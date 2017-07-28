// Copyright Cronofear Softworks 2017

#include "CGD_AutoSaveLoad_BPLibrary.h"
#include "Engine/Engine.h"	///world
#include "EngineUtils.h"	///actoriterator
#include "BufferArchive.h"	///MemoryWriter
#include "Serialization/MemoryReader.h"
#include "ArchiveSaveCompressedProxy.h"
#include "ArchiveLoadCompressedProxy.h"

#include "CGD_AutoSaveLoad_Object.h"
#include "CGD_AutoSaveLoad_TempObject.h"
#include "Components/PrimitiveComponent.h"
#include "CGDAutoSaveAndLoadComponent.h"
#include "Kismet/KismetStringLibrary.h"
#include "LatentClassTestAction.h"
#include "DelayAction.h"
#include "TimerManager.h"

#define OUT

#pragma region AUTO SAVE AND LOAD FUNCTIONS
UCGD_AutoSaveLoad_Object* UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject(const UObject* WorldContextObject, UCGD_AutoSaveLoad_Object* AutoSaveGameObject)
{
	///Validation
	if (!WorldContextObject || !AutoSaveGameObject)
	{
		///#Warning
		UE_LOG(LogTemp, Warning, TEXT("CGD SaveGame Failed, please verify if your slot name isn't empty, if your UserIndex is greater than -1 or if your AutoSaveGameObject was correctly created (view: CreateSaveGameObject())"));
		return AutoSaveGameObject;
	}
	///GetWorld
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	///Get Actors To Save and their SaveAndLoad Components
	TArray<AActor*> ActorsToSerialize;
	TArray<UActorComponent*> AutoSaveAndLoadComponentArray;
	GetAllActorsWithComponent(World, UCGDAutoSaveAndLoadComponent::StaticClass(), OUT ActorsToSerialize, OUT AutoSaveAndLoadComponentArray);
	///Save the game
	AutoFillSaveGameObject_Internal(World, ActorsToSerialize, AutoSaveAndLoadComponentArray, AutoSaveGameObject);
	return AutoSaveGameObject;
}

bool UCGD_AutoSaveLoad_BPLibrary::AutoLoadActorsDataFromSave(const UObject* WorldContextObject,const UCGD_AutoSaveLoad_Object* AutoSaveGameObject)
{
	if (!WorldContextObject || !AutoSaveGameObject)
	{
		///#Warning
		UE_LOG(LogTemp, Warning, TEXT("CGD LoadGame Failed, please verify if your slot name isn't empty, if your UserIndex is greater than -1 or if your AutoSaveGameObject was correctly created (view: CreateSaveGameObject())"));
		return false;
	}
	///Get World
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	///Force Garbage Collection
	World->ForceGarbageCollection(true);
	///Search if the current MapName exists in the array of MapRecords inside the UCGD_AutoSaveLoad_Object
	TArray<FName> CurrentMapNameArray;
	GetLevelsNames(World, CurrentMapNameArray);
	TArray<FCGDMapRecord> RelevantMapRecordArray;
	GetRelevantMapRecordArray(AutoSaveGameObject, CurrentMapNameArray, OUT RelevantMapRecordArray);
	///Get the Array of Actors To De-Serialize in the world
	TArray<AActor*> ActorsToSerialize;
	TArray<UActorComponent*> AutoSaveAndLoadComponentArray;
	GetAllActorsWithComponent(World, UCGDAutoSaveAndLoadComponent::StaticClass(), ActorsToSerialize, AutoSaveAndLoadComponentArray);
	///Deserialize the found data to the actors, and then try to destroy the actors that weren't updated (if the option was checked in the component)
	LoadActorDataFromArrayOfMapRecords(WorldContextObject, RelevantMapRecordArray, OUT ActorsToSerialize, OUT AutoSaveAndLoadComponentArray);
	return true;
}

void UCGD_AutoSaveLoad_BPLibrary::GetRelevantMapRecordArray(const UCGD_AutoSaveLoad_Object* AutoSaveGameObject, const TArray<FName>& CurrentMapNameArray, TArray<FCGDMapRecord> &RelevantMapRecordArray)
{
	for (const FCGDMapRecord& MapRecord : AutoSaveGameObject->MapRecordsArray)
	{
		for (const FName& CurrentMapName : CurrentMapNameArray)
		{
			/// If the MapName Exists, Store the Map record inside the Relevant map record as thats the one that will be used to Deserialize the actors in this map
			if (MapRecord.MapName == CurrentMapName)
			{
				///Array of Relevant Map Records (the maps that are loaded)
				RelevantMapRecordArray.Add(MapRecord);
				break;
			}
		}
	}
}

bool UCGD_AutoSaveLoad_BPLibrary::DoesSaveGameExist_Auto(const FString& SlotName, const int32 UserIndex, const bool bSaveIsCompressed /*= true*/)
{
	///Use a suffix for compressed files, so it doesn't crash
	FString NewSlotName;
	if (bSaveIsCompressed)
	{
		NewSlotName = UKismetStringLibrary::Concat_StrStr(SlotName, "_CGDCompressed");
	}
	else
	{
		NewSlotName = SlotName;
	}

	if (DoesSaveGameExist(NewSlotName, UserIndex))
	{
		return true;
	}
	else
	{
		///#Warning
		UE_LOG(LogTemp, Warning, TEXT("CGD SaveGameFile doesn't exist!, please verify that your SlotName isn't empty or if you're trying to Load an existing Compressed/Uncompressed File"));
		return false;
	}
}

bool UCGD_AutoSaveLoad_BPLibrary::DeleteGameInSlot_Auto(const FString& SlotName, const int32 UserIndex, const bool bSaveIsCompressed /*= true*/)
{
	///Use a suffix for compressed files, so it doesn't crash
	FString NewSlotName;
	if (bSaveIsCompressed)
	{
		NewSlotName = UKismetStringLibrary::Concat_StrStr(SlotName, "_CGDCompressed");
	}
	else
	{
		NewSlotName = SlotName;
	}
	if (DeleteGameInSlot(NewSlotName, UserIndex))
	{
		return true;
	}
	else
	{
		///#Warning
		UE_LOG(LogTemp, Warning, TEXT("CGD SaveGameFile doesn't exist!, please verify that your SlotName isn't empty or if you're trying to Load an existing Compressed/Uncompressed File"));
		return false;
	}
}

void UCGD_AutoSaveLoad_BPLibrary::CGDTryDestroyActors(const UObject* WorldContextObject, TArray<AActor *>& ActorsToSerialize, TArray<UActorComponent *> &AutoSaveAndLoadComponentArray)
{
	if (!WorldContextObject || ActorsToSerialize.Num() <= 0 || AutoSaveAndLoadComponentArray.Num() <= 0 || ActorsToSerialize.Num() != AutoSaveAndLoadComponentArray.Num())
	{
		return;
	}
	///Get World
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	int32 ActorIndex = 0;

	for (AActor* actor : ActorsToSerialize)
	{
		if (!actor->IsPendingKill() && AutoSaveAndLoadComponentArray[ActorIndex])
		{
			UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent = Cast<UCGDAutoSaveAndLoadComponent>(AutoSaveAndLoadComponentArray[ActorIndex]);

			if (AutoSaveAndLoadComponent && AutoSaveAndLoadComponent->GetDestroyActorOnLoadGameIfWasNotSaved() && AutoSaveAndLoadComponent->GetWasSaved() == false)
			{
				///#Call the Event OnBeginDestroyUnsavedActor() so we give a chance to abort destruction 
				AutoSaveAndLoadComponent->OnBeginDestroyUnsavedActor();
				///Destroy the actor
				actor->Destroy();
				actor->ConditionalBeginDestroy();
				actor = nullptr;
			}
			else
			{
				///#Call the Event OnUnchangedActor() so we tell that this actor wasn't changed at all when the game was loaded
				AutoSaveAndLoadComponent->OnUnchangedActor();
			}
		}
		ActorIndex++;
	}
}

bool UCGD_AutoSaveLoad_BPLibrary::TryRemoveCurrentMapSavedData(UCGD_AutoSaveLoad_Object* AutoSaveGameObject, const TArray<FName>& LevelsNameArray)
{
	if (!AutoSaveGameObject || AutoSaveGameObject->MapRecordsArray.Num() <= 0 || LevelsNameArray.Num() <= 0) return false;

	uint16 NumberOfSavedMaps = AutoSaveGameObject->MapRecordsArray.Num();
	for (const FName& currentMapName : LevelsNameArray)
	{
		uint32 MapIndex = 0;
		for (FCGDMapRecord& MapRecord : AutoSaveGameObject->MapRecordsArray)
		{
			if (MapRecord.MapName == currentMapName && AutoSaveGameObject->MapRecordsArray.IsValidIndex(MapIndex))
			{
				AutoSaveGameObject->MapRecordsArray.RemoveAt(MapIndex);
				break;
			}
			MapIndex++;
		}
	}

	if (NumberOfSavedMaps == AutoSaveGameObject->MapRecordsArray.Num())
	{
		return false;
	}
	else
	{
		return true;
	}
}

void UCGD_AutoSaveLoad_BPLibrary::SaveActorsToArrayOfMaps(const TArray<AActor *>& ActorsArray,const TArray<UActorComponent *>& AutoSaveAndLoadComponentArray,const TArray<FName>& MapNameArray, TArray<FCGDMapRecord>& MapRecordArray)
{
	if (MapNameArray.Num() <= 0 || ActorsArray.Num() <= 0 || AutoSaveAndLoadComponentArray.Num() <= 0) return;

	for (const FName& currentMapName : MapNameArray)
	{
		FCGDMapRecord NewMapRecord;
		NewMapRecord.MapName = currentMapName;
		MapRecordArray.Add(NewMapRecord);
	}

	if (ActorsArray.Num() < 0 || AutoSaveAndLoadComponentArray.Num() < 0) return;

	int i = 0;
	for (AActor* actor : ActorsArray)
	{
		if (AutoSaveAndLoadComponentArray[i] && !actor->IsPendingKill())
		{
			///#CALL The event OnSaveStart (Before the actor is saved)
			UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent = Cast<UCGDAutoSaveAndLoadComponent>(AutoSaveAndLoadComponentArray[i]);
			///If the plugin in enabled, save the actor and its components
			if (AutoSaveAndLoadComponent->GetEnablePlugin())
			{
				AutoSaveAndLoadComponent->OnSaveStart();
				///Create an ActorRecord for Store ActorName, ActorClass, ActorTransform and ActorData (SaveGame flagged Variables)
				FCGDActorRecord NewActorRecord;
				SaveActor(NewActorRecord, actor, AutoSaveAndLoadComponent);
				SaveActorComponents(NewActorRecord, actor, AutoSaveAndLoadComponent);
				///Store the NewActorRecord inside the Array of ActorRecord in the NewMapRecord
				FName actorLevelName = FName(*actor->GetLevel()->GetPathName());
				uint32 MapIndex = 0;
				for (FCGDMapRecord& mapRecord : MapRecordArray)
				{
					if (actorLevelName == mapRecord.MapName)
					{
						break;
					}
					MapIndex++;
				}
				MapRecordArray[MapIndex].ActorsRecordsArray.Add(NewActorRecord);
				///#CALL the Event OnSaveEnd (After the actor is saved)
				AutoSaveAndLoadComponent->OnSaveEnd();
			}
		}
		///Increase Counter
		i++;
	}
}

#pragma endregion

#pragma region SAVE AND LOAD COMPRESSED FUNCTIONS
bool UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Compressed(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex)
{
	if (!SaveGameObject || SlotName.Len() <= 0 || UserIndex < 0)
	{
		return false;
	}
	///Use a suffix for compressed files, so it doesn't crash
	FString CompressedSlotName = UKismetStringLibrary::Concat_StrStr(SlotName, "_CGDCompressed");
	///Create a temp AutoSaveGameObject
	UCGDDummyObject* AutoSaveGameObjectCompressed;
	AutoSaveGameObjectCompressed = Cast<UCGDDummyObject>(CreateSaveGameObject(UCGDDummyObject::StaticClass()));
	///Serialize the CurrentSaveObject into an array of bytes
	TArray<uint8> DataArray;
	FMemoryWriter MemoryWriter(DataArray, true);
	FObjectAndNameAsStringProxyArchive Ar(MemoryWriter, false);
	SaveGameObject->Serialize(Ar);
	///Compress the serialized Data and store it into the temp SaveGameObject
	CompressArrayOfBytes_Internal(DataArray, OUT AutoSaveGameObjectCompressed->MapRecordsArrayOfBytes);
	///Save the compressed object
	bool bSaveResult = SaveGameToSlot(AutoSaveGameObjectCompressed, CompressedSlotName, UserIndex);
	///Clean the compressed object data
	AutoSaveGameObjectCompressed->MapRecordsArrayOfBytes.Empty();
	AutoSaveGameObjectCompressed = nullptr;
	DataArray.Empty();
	MemoryWriter.FlushCache();
	MemoryWriter.Close();
	///Return if the save was successful
	return bSaveResult;
}

USaveGame* UCGD_AutoSaveLoad_BPLibrary::LoadGameFromSlot_Compressed(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex)
{
	if (!SaveGameObject || SlotName.Len() <= 0 || UserIndex < 0)
	{
		return nullptr;
	}
	///Use a suffix for compressed files, so it doesn't crash
	FString CompressedSlotName = UKismetStringLibrary::Concat_StrStr(SlotName, "_CGDCompressed");
	///Create a temp AutoSaveGameObject
	UCGDDummyObject* AutoSaveGameObjectCompressed;
/*	AutoSaveGameObjectCompressed = Cast<UCGDDummyObject>(CreateSaveGameObject(UCGDDummyObject::StaticClass()));*/
	///Load the Data
	AutoSaveGameObjectCompressed = Cast<UCGDDummyObject>(LoadGameFromSlot(CompressedSlotName, UserIndex));
	if (!AutoSaveGameObjectCompressed)
	{
		return nullptr;
	}
	TArray<uint8> DecompressedBinaryArray;
	DecompressArrayOfBytes_Internal(AutoSaveGameObjectCompressed->MapRecordsArrayOfBytes,OUT DecompressedBinaryArray);
	///CONTINUE
	FMemoryReader MemoryReader(DecompressedBinaryArray, true);
	MemoryReader.Seek(0);
	FObjectAndNameAsStringProxyArchive Ar(MemoryReader, true);
	SaveGameObject->Serialize(Ar);
	/// Empty & Close Buffer 
	MemoryReader.FlushCache();
	MemoryReader.Close();
	DecompressedBinaryArray.Empty();
	AutoSaveGameObjectCompressed->MapRecordsArrayOfBytes.Empty();
	AutoSaveGameObjectCompressed = nullptr;

	return SaveGameObject;
}

void UCGD_AutoSaveLoad_BPLibrary::CompressArrayOfBytes_Internal(TArray<uint8>& DataArray, TArray<uint8>& CompressedDataArray)
{
	if (DataArray.Num() <= 0) return;

	CompressedDataArray.Empty();
	///Init Compressor
	FArchiveSaveCompressedProxy Compressor = FArchiveSaveCompressedProxy(CompressedDataArray, ECompressionFlags::COMPRESS_ZLIB);
	///Compress the data array
	Compressor << DataArray;
	///Send compressed data to CompressedDataArray
	Compressor.Flush();
	///Clean
	Compressor.FlushCache();
	Compressor.Close();
}

void UCGD_AutoSaveLoad_BPLibrary::DecompressArrayOfBytes_Internal(TArray<uint8>& DataArray, TArray<uint8>& DeCompressedDataArray)
{
	if (DataArray.Num() <= 0) return;
	///DECOMPRESS FILE
	FArchiveLoadCompressedProxy Decompressor = FArchiveLoadCompressedProxy(DataArray, ECompressionFlags::COMPRESS_ZLIB);

	if (Decompressor.GetError())
	{
		UE_LOG(LogTemp, Error, TEXT("MyGameplayStatics >> ERROR >> DecompressArrayOfBytes Failed on Decompression!"));
		return;
	}
	Decompressor << DeCompressedDataArray;
	///Clean
	Decompressor.FlushCache();
	Decompressor.Close();
}

void UCGD_AutoSaveLoad_BPLibrary::FullLoadActor(const FCGDActorRecord& ActorRecord, AActor* Actor, UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent, const bool bLoadActorComponents /*= true*/)
{
	if (!Actor || !AutoSaveAndLoadComponent) return;
	///Load the data from the AutoSaveAndLoadComponent first, so the options will match the options from the savefile
	for (const FCGDActorComponentRecord& actorComponentRecord : ActorRecord.ActorsComponentRecordArray)
	{
		///For each component that this actors has, verifies if the name is the same an then loads the data that corresponds
		if (actorComponentRecord.ActorComponentName == AutoSaveAndLoadComponent->GetFName())
		{
			FCGDAutoSaveAndLoadComponentOption componentOptions;
			LoadActorComponent(actorComponentRecord, OUT AutoSaveAndLoadComponent, componentOptions, AutoSaveAndLoadComponent);
			break;
		}
	}
	///Load the Actor and the components only if the component is enabled on this actor
	if (AutoSaveAndLoadComponent->GetEnablePlugin())
	{
		LoadActor(ActorRecord, Actor);
		if (bLoadActorComponents)
		{
			LoadActorComponents(ActorRecord, Actor, AutoSaveAndLoadComponent);
		}
	}
}

ULevel* UCGD_AutoSaveLoad_BPLibrary::GetActorLevel(AActor* Actor)
{
	if (!Actor) return nullptr;

	return Actor->GetLevel();
}

#pragma endregion

#pragma region EXTRA::CONVERT STRING TO BYTES AND VICEVERSA

TArray<uint8> UCGD_AutoSaveLoad_BPLibrary::CGDStringToBytes(const FString& InString, const bool bUseUtf8 /*= true*/)
{
	TArray<uint8> OutBytes;
	if (InString.Len() <= 0) return OutBytes;

	if (bUseUtf8)
	{
		///Convert String to UTF8 String
		FTCHARToUTF8 ToUtf8Converter(InString.GetCharArray().GetData());
		FString InStringUtf = ToUtf8Converter.Get();

		int32 MaxBufferSize = InStringUtf.Len();
		OutBytes.AddUninitialized(MaxBufferSize);
		StringToBytes(InStringUtf, OUT OutBytes.GetData(), MaxBufferSize);
	}
	else
	{
		int32 MaxBufferSize = InString.Len();
		OutBytes.AddUninitialized(MaxBufferSize);
		StringToBytes(InString, OUT OutBytes.GetData(), MaxBufferSize);
	}


	return OutBytes;
}

FString UCGD_AutoSaveLoad_BPLibrary::CGDBytesToString(const TArray<uint8>& DataArray)
{
	FString OutString;
	if (DataArray.Num() <= 0) return OutString;

	OutString = BytesToString(DataArray.GetData(), DataArray.Num());

	return OutString;
}

#pragma endregion

#pragma region Generic Function Libraries

void UCGD_AutoSaveLoad_BPLibrary::GetLevelsNames(const UObject* WorldContextObject, TArray<FName>& CurrentMapNameArray)
{
	if (!WorldContextObject) return;

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	TArray<ULevel*> Levels = World->GetLevels();
	for (ULevel* level : Levels)
	{
		CurrentMapNameArray.Add(FName(*level->GetPathName()));
	}
}

void UCGD_AutoSaveLoad_BPLibrary::GetAllActorsWithComponent(const UObject* WorldContextObject, const TSubclassOf<UActorComponent> Component, TArray<AActor*>& OutActors, TArray<UActorComponent*>& OutActorComponents)
{
	if (!Component || !WorldContextObject) return;

	OutActors.Empty();
	OutActorComponents.Empty();

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	/// We do nothing if not class provided, rather than giving ALL actors!
	if (Component && World)
	{
		for (FActorIterator It(World); It; ++It)
		{
			AActor* Actor = *It;
			UActorComponent* ActorComponent = Actor->GetComponentByClass(Component);
			if (Actor && !Actor->IsPendingKill() && ActorComponent)
			{
				OutActors.Add(Actor);
				OutActorComponents.Add(ActorComponent);
			}
		}
	}
}

AActor* UCGD_AutoSaveLoad_BPLibrary::GetActorByIDNameAndClass(const UObject* WorldContextObject, const FName IDName, const TSubclassOf<AActor> ActorClass)
{
	if (!WorldContextObject || !ActorClass) return nullptr;

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	// We do nothing if not class provided, rather than giving ALL actors!
	if (ActorClass && World)
	{
		for (TActorIterator<AActor> It(World, ActorClass); It; ++It)
		{
			AActor* Actor = *It;
			if (!Actor->IsPendingKill() && Actor->GetFName() == IDName)
			{
				return Actor;
			}
		}
	}
	return nullptr;
}

int32 UCGD_AutoSaveLoad_BPLibrary::GetActorByIDNameFromAnArrayOfActors(const FName IDName, const TArray<AActor*>& ArrayOfActors, AActor*& Actor)
{
	if (ArrayOfActors.Num() <= 0) return -1;

	int32 Index = 0;
	for (AActor* actor : ArrayOfActors)
	{
		if (!actor->IsPendingKill() && actor->GetFName() == IDName)
		{
			Actor = actor;
			return Index;
		}
		Index++;
	}
	Index = -1;
	return Index;
}

class AActor* UCGD_AutoSaveLoad_BPLibrary::GetUniqueActorOfClass(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass)
{
	if (!WorldContextObject || !ActorClass) return nullptr;
	///GetWorld
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	///Iterate Actors of Class
	AActor* Actor = nullptr;
	uint8 ActorCounter = 0;
	if (ActorClass && World)
	{
		for (TActorIterator<AActor> It(World, ActorClass); It; ++It)
		{
			if (ActorCounter <= 1)
			{
				Actor = *It;
				if (!Actor->IsPendingKill())
				{
					ActorCounter++;
				}
			}
			else
			{
				break;
			}
		}
	}
	///If there's only one actor in the world
	if (ActorCounter == 1)
	{
		return Actor;
	}
	else
	{
		if (ActorCounter == 0)
		{
			UE_LOG(LogTemp, Log, TEXT("CGD: GetUniqueActorOfClass() No Actor Found"));
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("CGD: GetUniqueActorOfClass() There are more than 1 actor of this class in the world"));
		}
		return nullptr;
	}
}

AActor* UCGD_AutoSaveLoad_BPLibrary::SpawnActorWithIDNameFromClass(const UObject* WorldContextObject, const TSubclassOf<AActor> Class, const FTransform SpawnTransformm, FName NameID)
{
	if (!WorldContextObject || !Class) return nullptr;
	///GetWorld
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	FActorSpawnParameters SpawnInfo;
	if (NameID != FName(""))
	{
		SpawnInfo.Name = NameID;
	}
	AActor* SpawnedActor = World->SpawnActor<AActor>(Class, SpawnTransformm, SpawnInfo);
	return SpawnedActor;
}

#pragma endregion

#pragma region PRIVATE::AUTO SAVE AND LOAD FUNCTIONS

void UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject_Internal(const UWorld* World, const TArray<AActor *>& ActorsToSaveArray, const TArray<UActorComponent *>& AutoSaveAndLoadComponentsArray, UCGD_AutoSaveLoad_Object*& AutoSaveGameObject)
{
	///Get Array of Level Names that are loaded (including Level streaming sub levels)
	TArray<FName> CurrentMapNameArray;
	UCGD_AutoSaveLoad_BPLibrary::GetLevelsNames(World,OUT CurrentMapNameArray);
	///If there's data saved from the current map, delete all the data so we can start a save fresh for the map without affecting others map data
	UCGD_AutoSaveLoad_BPLibrary::TryRemoveCurrentMapSavedData(AutoSaveGameObject, CurrentMapNameArray);
	///Initialize MapRecordArray
	TArray<FCGDMapRecord> NewMapRecordArray;
	///Save all the actors for all the maps loaded into an array of FCGDMapRecord
	///#CronofearTODO Create and Async Version of this in the future? (For blueprint customization)
	UCGD_AutoSaveLoad_BPLibrary::SaveActorsToArrayOfMaps(ActorsToSaveArray, AutoSaveAndLoadComponentsArray, CurrentMapNameArray, OUT NewMapRecordArray);
	///Store the Array of Maps back into the SaveGameObject
	for (FCGDMapRecord& mapRecord : NewMapRecordArray)
	{
		AutoSaveGameObject->MapRecordsArray.Add(mapRecord);
	}
}

bool UCGD_AutoSaveLoad_BPLibrary::CompressArrayOfBytes(TArray<uint8> DataArray, TArray<uint8>& CompressedDataArray)
{
	CompressArrayOfBytes_Internal(DataArray, CompressedDataArray);

	return CompressedDataArray.Num() <= DataArray.Num();
}

void UCGD_AutoSaveLoad_BPLibrary::DecompressArrayOfBytes(TArray<uint8> DataArray, TArray<uint8>& DeCompressedDataArray)
{
	DecompressArrayOfBytes_Internal(DataArray, DeCompressedDataArray);
}

void UCGD_AutoSaveLoad_BPLibrary::LoadActorDataFromArrayOfMapRecords(const UObject* WorldContextObject, const TArray<FCGDMapRecord>& RelevantMapRecordArray, UPARAM(ref) TArray<AActor *>& ActorsArray, UPARAM(ref) TArray<UActorComponent *>& AutoSaveAndLoadComponentArray)
{
	if (!WorldContextObject || RelevantMapRecordArray.Num() < 1 || ActorsArray.Num() != AutoSaveAndLoadComponentArray.Num()) return;
	///Get World
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);

	for (const FCGDMapRecord& RelevantMapRecord : RelevantMapRecordArray)
	{
		for (const FCGDActorRecord& ActorRecord : RelevantMapRecord.ActorsRecordsArray)
		{
			AActor* LoadedActor = nullptr;
			///Get an Actor By Name from an array of saveable actors in the world
			int32 ActorIndex = GetActorByIDNameFromAnArrayOfActors(ActorRecord.ActorName, ActorsArray, OUT LoadedActor);
			///If the actor was found, remove the index from the array so next time we iterate less (also this is important for working with the unchanged actors next)
			///Unchanged actors means that this actors weren't saved so they need will persist (default functionality) of will be destroyed to recover the previous state
			if (ActorIndex != -1 && ActorsArray[ActorIndex] && AutoSaveAndLoadComponentArray[ActorIndex])
			{
				ActorsArray.RemoveAt(ActorIndex);
				AutoSaveAndLoadComponentArray.RemoveAt(ActorIndex);
			}
			UCGDAutoSaveAndLoadComponent* SaveAndLoadComponent;
			///If an actor with the same IDName and Class exists:
			if (LoadedActor)
			{
				SaveAndLoadComponent = Cast<UCGDAutoSaveAndLoadComponent>(LoadedActor->GetComponentByClass(UCGDAutoSaveAndLoadComponent::StaticClass()));
				if (SaveAndLoadComponent && SaveAndLoadComponent->GetEnablePlugin())
				{
					///#CALL OnLoadStart Event
					SaveAndLoadComponent->OnLoadStart();
					///Load Actor and ActorComponent Data
					FullLoadActor(ActorRecord, LoadedActor, SaveAndLoadComponent, true);
				}
			}
			///If the actor doesn't exist, then we have to spawn a new actor
			else
			{
				///If Load With Random Name is Enabled, then create the actor with a random name
				if (ActorRecord.bHasToLoadWithRandomName)
				{
					FActorSpawnParameters SpawnInfo;
					///Spawn the actor with the given parameters
					LoadedActor = World->SpawnActor<AActor>(ActorRecord.ActorClass, ActorRecord.ActorTransform, SpawnInfo);
				}
				///Else, create an Actor with a given name
				else
				{
					LoadedActor = SpawnActorWithIDNameFromClass(World, ActorRecord.ActorClass, ActorRecord.ActorTransform, ActorRecord.ActorName);
				}
				SaveAndLoadComponent = Cast<UCGDAutoSaveAndLoadComponent>(LoadedActor->GetComponentByClass(UCGDAutoSaveAndLoadComponent::StaticClass()));
				if (SaveAndLoadComponent && SaveAndLoadComponent->GetEnablePlugin())
				{
					///#CALL OnLoadStar Event
					SaveAndLoadComponent->OnLoadStart();
					///Load Actor and ActorComponent Data
					FullLoadActor(ActorRecord, LoadedActor, SaveAndLoadComponent, true);
				}
				///Destroy a recreated actor if it doesn't have a SaveAndLoadComponent or if it's component is disabled
				else
				{
					LoadedActor->Destroy();
					LoadedActor->ConditionalBeginDestroy();
					LoadedActor = nullptr;
				}
			}
			if (SaveAndLoadComponent && SaveAndLoadComponent->GetEnablePlugin())
			{
				///#CALL OnLoadEnd Event
				SaveAndLoadComponent->OnLoadEnd();
			}
		}
	}
	///Try to destroy actors in case they weren't updated
	CGDTryDestroyActors(WorldContextObject, ActorsArray, AutoSaveAndLoadComponentArray);
	World->ForceGarbageCollection(true);
}

void UCGD_AutoSaveLoad_BPLibrary::SaveActor(FCGDActorRecord& ActorRecord, AActor* Actor, const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent)
{
	///Save actor
	ActorRecord.ActorName = Actor->GetFName();
	ActorRecord.ActorClass = Actor->GetClass();
	ActorRecord.ActorTransform = Actor->GetTransform();
	ActorRecord.bHasToLoadWithRandomName = AutoSaveAndLoadComponent->GetLoadActorWithRandomIDName();

	FMemoryWriter MemoryWriter(ActorRecord.ActorData, true);
	/// Use a wrapper archive that converts FNames and UObject*'s to strings that can be read back in
	FCGDSaveGameArchive Ar(MemoryWriter, false);
	/// Serialize the object
	Actor->Serialize(Ar);
	///Clean
	MemoryWriter.FlushCache();
	MemoryWriter.Close();
}

void UCGD_AutoSaveLoad_BPLibrary::SaveActorComponents(FCGDActorRecord& ActorRecord, AActor* Actor, const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent)
{
	///Return if there are no components to save 
	if (AutoSaveAndLoadComponent->GetSaveComponents()== false && AutoSaveAndLoadComponent->GetComponentOptions().Num() < 1) return;

	TArray<UActorComponent*> ActorComponentsArray;
	Actor->GetComponents(ActorComponentsArray);

	for (UActorComponent* actorcomponent : ActorComponentsArray)
	{
		///Find if there are custom options for this component
		FCGDAutoSaveAndLoadComponentOption componentOptions;
		bool bSaveThisComponent = GetComponentSaveAndLoadConditions(AutoSaveAndLoadComponent, actorcomponent, componentOptions);
		///If this component can be saved
		if (bSaveThisComponent)
		{
			FCGDActorComponentRecord ActorComponentRecord;
			///Save ActorComponent Name, Class and Transform (if it's a scene component)
			ActorComponentRecord.ActorComponentName = actorcomponent->GetFName();

			///Save relative transform if the components is a scene component
			if (actorcomponent->GetClass()->IsChildOf(USceneComponent::StaticClass()))
			{
				USceneComponent* sceneComponent = Cast<USceneComponent>(actorcomponent);
				///Save Relative Location
				if ((AutoSaveAndLoadComponent->GetSaveComponentsLocation() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponentLocation))
				{
					ActorComponentRecord.SceneComponentLocation = sceneComponent->RelativeLocation;
				}
				///Save Relative Rotation
				if ((AutoSaveAndLoadComponent->GetSaveComponentsRotation() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponentRotation))
				{
					ActorComponentRecord.SceneComponentRotation = sceneComponent->RelativeRotation;
				}
				///SetRelative Scale
				if ((AutoSaveAndLoadComponent->GetSaveComponentsScale() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponentScale))
				{
					ActorComponentRecord.SceneComponentScale = sceneComponent->RelativeScale3D;
				}
				else
				{
					ActorComponentRecord.SceneComponentScale = FVector(1.0, 1.0, 1.0);
				}
			}
			///Save Physics Simulation if it's a Primitive Component
			if (actorcomponent->GetClass()->IsChildOf(UPrimitiveComponent::StaticClass()))
			{
				UPrimitiveComponent* primitiveComponent = Cast<UPrimitiveComponent>(actorcomponent);
				if ((AutoSaveAndLoadComponent->GetSaveComponentsLinearVelocity() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponnetLinearVelocity))
				{
					ActorComponentRecord.PrimitiveComponentLinearVelocity = primitiveComponent->GetPhysicsLinearVelocity();
				}
				if ((AutoSaveAndLoadComponent->GetSaveComponentsAngularVelocity() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponnetAngularVelocity))
				{
					ActorComponentRecord.PrimitiveComponentAngularVelocity = primitiveComponent->GetPhysicsAngularVelocity();
				}
			}
			///Save Actor Component Data
			FMemoryWriter MemoryWriter(ActorComponentRecord.ActorsComponentData, true);
			/// Use a wrapper archive that converts FNames and UObject*'s to strings that can be read back in
			FCGDSaveGameArchive Ar(MemoryWriter, false);
			actorcomponent->Serialize(Ar);
			ActorRecord.ActorsComponentRecordArray.Add(ActorComponentRecord);
			///Clean
			MemoryWriter.FlushCache();
			MemoryWriter.Close();
		}
	}
}

void UCGD_AutoSaveLoad_BPLibrary::LoadActor(const FCGDActorRecord& ActorRecord, AActor* DynamicActor)
{
	FMemoryReader MemoryReader(ActorRecord.ActorData, true);
	FCGDSaveGameArchive Ar(MemoryReader, true);
	DynamicActor->Serialize(Ar);
	///Clean
	MemoryReader.FlushCache();
	MemoryReader.Close();
}

void UCGD_AutoSaveLoad_BPLibrary::LoadActorComponents(const FCGDActorRecord& ActorRecord, AActor* DynamicActor, const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent)
{
	///Return if there are no components to load or if the AutoSaveAndLoadComponent is nullptr
	if (AutoSaveAndLoadComponent->GetSaveComponents() == false && AutoSaveAndLoadComponent->GetComponentOptions().Num() < 1) return;

	TArray<UActorComponent*> ActorComponentsArray;
	DynamicActor->GetComponents(ActorComponentsArray);
	///This method is faster than above, Serializes the data of all the components of an actor
	int i = 0;
	for (UActorComponent* actorcomponent : ActorComponentsArray)
	{
		if (actorcomponent != AutoSaveAndLoadComponent)
		{
			///Find if there are custom options for this component and determine if this component can be loaded
			FCGDAutoSaveAndLoadComponentOption componentOptions;
			bool bLoadThisComponent = GetComponentSaveAndLoadConditions(AutoSaveAndLoadComponent, actorcomponent, componentOptions);
			///IF THIS COMPONENT CAN BE LOADED
			if (bLoadThisComponent)
			{
				///Try to load the actor in order first (when it works, it loads the actor components faster)
				if (ActorRecord.ActorsComponentRecordArray.IsValidIndex(i))
				{
					const FCGDActorComponentRecord& actorComponentRecordOut = ActorRecord.ActorsComponentRecordArray[i];
					if (actorComponentRecordOut.ActorComponentName == actorcomponent->GetFName())
					{
						LoadActorComponent(actorComponentRecordOut, actorcomponent, componentOptions, AutoSaveAndLoadComponent);
						i++;
						continue;
					}
				}
				///If the actors components weren't loaded at this point, try to search an actor components that matches the name and load it!
				for (const FCGDActorComponentRecord& actorComponentRecord : ActorRecord.ActorsComponentRecordArray)
				{
					///For each component that this actors has, verifies if the name is the same an then loads the data that corresponds
					if (actorComponentRecord.ActorComponentName == actorcomponent->GetFName())
					{
						LoadActorComponent(actorComponentRecord, actorcomponent, componentOptions, AutoSaveAndLoadComponent);
						i++;
						break;
					}
				}
			}
		}
		i++;
	}
}

bool UCGD_AutoSaveLoad_BPLibrary::GetComponentSaveAndLoadConditions(const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent, const  UActorComponent* actorcomponent, FCGDAutoSaveAndLoadComponentOption &componentOptions)
{
	bool bComponentOptionsFound = false;
	for (FCGDAutoSaveAndLoadComponentOption& options : AutoSaveAndLoadComponent->GetComponentOptions())
	{
		if (options.ComponentName == actorcomponent->GetFName())
		{
			bComponentOptionsFound = true;
			componentOptions = options;
			break;
		}
	}
	///Determine if this component can be saved/loaded
	bool bSaveLoadThisComponent = false;
	/// When save components is enabled by default, save only if no ComponentOptions where found OR if a component option was found and save component is checked in the options
	if (AutoSaveAndLoadComponent->GetSaveComponents())
	{
		bSaveLoadThisComponent = (bComponentOptionsFound == false) || (bComponentOptionsFound && componentOptions.bSaveComponent);
	}
	/// When save components is not enabled by default, save only if a component option was found and save component is checked in the options
	else
	{
		bSaveLoadThisComponent = bComponentOptionsFound && componentOptions.bSaveComponent;
	}
	return bSaveLoadThisComponent;
}

void UCGD_AutoSaveLoad_BPLibrary::LoadActorComponent(const FCGDActorComponentRecord &actorComponentRecord, UActorComponent* actorcomponent, const FCGDAutoSaveAndLoadComponentOption &componentOptions, const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent)
{
	FMemoryReader MemoryReader(actorComponentRecord.ActorsComponentData, true);
	FCGDSaveGameArchive Ar(MemoryReader, true);
	actorcomponent->Serialize(Ar);
	///Load Transform if it's an scene component
	if (actorcomponent->GetClass()->IsChildOf(USceneComponent::StaticClass()))
	{
		USceneComponent* sceneComponent = Cast<USceneComponent>(actorcomponent);
		///Load Relative Location
		if ((AutoSaveAndLoadComponent->GetSaveComponentsLocation() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponentLocation))
		{
			sceneComponent->SetRelativeLocation(actorComponentRecord.SceneComponentLocation, false, nullptr, ETeleportType::TeleportPhysics);
		}
		if ((AutoSaveAndLoadComponent->GetSaveComponentsRotation() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponentRotation))
		{
			sceneComponent->SetRelativeRotation(actorComponentRecord.SceneComponentRotation, false, nullptr, ETeleportType::TeleportPhysics);
		}
		if ((AutoSaveAndLoadComponent->GetSaveComponentsScale() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponentScale))
		{
			sceneComponent->SetRelativeScale3D(actorComponentRecord.SceneComponentScale);
		}
	}
	///Load Physics Simulation if it's a Primitive Component
	if (actorcomponent->GetClass()->IsChildOf(UPrimitiveComponent::StaticClass()))
	{
		UPrimitiveComponent* primitiveComponent = Cast<UPrimitiveComponent>(actorcomponent);
		if ((AutoSaveAndLoadComponent->GetSaveComponentsLinearVelocity() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponnetLinearVelocity))
		{
			primitiveComponent->SetPhysicsLinearVelocity(actorComponentRecord.PrimitiveComponentLinearVelocity);///#CronofearTODO Bone
		}
		if ((AutoSaveAndLoadComponent->GetSaveComponentsAngularVelocity() && componentOptions.ComponentName == "None") || (componentOptions.ComponentName != "None" && componentOptions.bSaveComponnetAngularVelocity))
		{
			primitiveComponent->SetPhysicsAngularVelocity(actorComponentRecord.PrimitiveComponentAngularVelocity);///#CronofearTODO Bone
		}
	}
	///Clean
	MemoryReader.FlushCache();
	MemoryReader.Close();
}

UCGD_AutoSaveLoad_Object* UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject_Async(const UObject* WorldContextObject, UCGD_AutoSaveLoad_Object* AutoSaveGameObject, FLatentActionInfo& LatentInfo)
{
	///Validation
	if (!WorldContextObject || !AutoSaveGameObject)
	{
		///#Warning
		UE_LOG(LogTemp, Warning, TEXT("CGD SaveGame Failed, please verify if your slot name isn't empty, if your UserIndex is greater than -1 or if your AutoSaveGameObject was correctly created (view: CreateSaveGameObject())"));
		return AutoSaveGameObject;
	}
	///GetWorld
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	///Get Actors To Save and their SaveAndLoad Components
	TArray<AActor*> ActorsToSerialize;
	TArray<UActorComponent*> AutoSaveAndLoadComponentArray;
	///#CronofearTODO Async exec this function? Using FLatentActionManager. Right Now it's fast enough
	GetAllActorsWithComponent(World, UCGDAutoSaveAndLoadComponent::StaticClass(), OUT ActorsToSerialize, OUT AutoSaveAndLoadComponentArray);

	///AutoFillSaveGameObject_Async
	//(new FAutoDeleteAsyncTask<FAutoFillSaveGameObjectAsyncTask>(World, ActorsToSerialize, AutoSaveAndLoadComponentArray, AutoSaveGameObject))->StartBackgroundTask();


	FAsyncTask<FAutoFillSaveGameObjectAsyncTask>* MyTask = new FAsyncTask<FAutoFillSaveGameObjectAsyncTask>(World, ActorsToSerialize, AutoSaveAndLoadComponentArray, AutoSaveGameObject);
	MyTask->StartBackgroundTask();
	//MyTask->EnsureCompletion();

	FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
	FDelayAction* Action = LatentActionManager.FindExistingAction<FDelayAction>(LatentInfo.CallbackTarget, LatentInfo.UUID);


	// 	MyTask->StartBackgroundTask();
	// 	//MyTask->EnsureCompletion();
	// 	if (MyTask->IsDone())
	// 	{
	// 		///#CronofearTODO Wait for the async task to finish before returning anything!!!
	// 		delete MyTask;
	// 		return AutoSaveGameObject;
	// 		//MyTask->EnsureCompletion();
	// 	}
	return AutoSaveGameObject;
}

bool UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Compressed_Async(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex)
{
	(new FAutoDeleteAsyncTask<FSaveGameToSlotAsyncTask>(SaveGameObject, SlotName, UserIndex, true))->StartBackgroundTask();
	///#CronofearTODO Wait for tast and return value
	return true;
}

bool UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Async(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex)
{
	(new FAutoDeleteAsyncTask<FSaveGameToSlotAsyncTask>(SaveGameObject, SlotName, UserIndex, false))->StartBackgroundTask();
	///#CronofearTODO Wait for tast and return value
	return true;
}
#pragma endregion