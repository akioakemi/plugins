// Copyright Cronofear Softworks 2017

#pragma once

#include "Kismet/GameplayStatics.h"
#include "CGD_AutoSaveLoad_Struct.h"

#include "CGD_AutoSaveLoad_BPLibrary.generated.h"



/**
 * GameplayStatics Blueprint Function Library that contains all the statics functions related to AutoSave and AutoLoad
 */
UCLASS()
class CGDAUTOSAVEANDLOADSYSTEM_API UCGD_AutoSaveLoad_BPLibrary : public UGameplayStatics
{
	GENERATED_BODY()
	
public:
	/**
	*	Auto Fill the SaveGameObject, it needs an already Created "CGDAutoSaveLoad_Object". Use CreateSaveGame() Node to create one.
	*	Auto Fill means that the SaveGameObject will be populated with all the actors of all the maps that are currently loaded.
	*	Use SaveGameToSlot to actually save the SaveGameObject into a file.
	*	@param AutoSaveGameObject	The UCGD_AutoSaveLoad_Object reference, it can be created using the CreateSaveGameObject() node.
	*	@return						The UCGD_AutoSaveLoad_Object filled with all the actors data from all the maps loaded.
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Auto Fill Save Game Object", WorldContext = "WorldContextObject"))
		static UCGD_AutoSaveLoad_Object* AutoFillSaveGameObject(const UObject* WorldContextObject, UCGD_AutoSaveLoad_Object* AutoSaveGameObject);

	/**
	*	Auto Load the Game and updates the data from all the actors (and components) that we're saved.
	*	If an actor was saved and don't exist in the world anymore, the actors will be recreated (if the option is enabled in the CGDAutoSaveAndLoadComponent).
	*	This method loads the data for all the maps that are currently loaded (it supports level streaming).
	*	@param AutoSaveGameObject		The UCGD_AutoSaveLoad_Object reference, can already contain data.
	*	@return							Whether if the Load was successful or Not.
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Auto Load Actors Data From Save", WorldContext = "WorldContextObject"))
		static bool AutoLoadActorsDataFromSave(const UObject* WorldContextObject, const UCGD_AutoSaveLoad_Object* AutoSaveGameObject);

	/**
	* Obtains the MapRecordArray data that is in the UCGD_AutoSaveLoad_Object, filtered by an array of Map Names.
	* @param AutoSaveGameObject			The UCGD_AutoSaveLoad_Object reference that already contains data.
	* @param CurrentMapNameArray		Map Names Array to use it as a filter for obtaining data from the UCGD_AutoSaveLoad_Object, use GetLevelsNames() or GetActorLevel().
	* @param RelevantMapRecordArray		MapRecordArray that also contains ActorsArray data
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Get Relevant Map Record Array"))
		static void GetRelevantMapRecordArray(const UCGD_AutoSaveLoad_Object* AutoSaveGameObject, const TArray<FName>& CurrentMapNameArray, TArray<FCGDMapRecord> &RelevantMapRecordArray);

	/**
	*  Check if there's a save game file with the specified name.
	*  @param SlotName				Name of save game slot.
	*  @param UserIndex				For some platforms, master user index to identify the user doing the saving.
	*  @param bSaveIsCompressed		Was the Game saved using compression? Very important as compressed files have a suffix signature.
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Does Save Game Exist"))
		static bool DoesSaveGameExist_Auto(const FString& SlotName, const int32 UserIndex, const bool bSaveIsCompressed = true);

	/**
	*  Delete the file for the corresponding slot.
	*  @param SlotName				Name of save game slot.
	*  @param UserIndex				For some platforms, master user index to identify the user doing the saving.
	*  @param bSaveIsCompressed		Was the Game saved using compression? Very important as compressed files have a suffix signature.
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Delete Game In Slot"))
		static bool DeleteGameInSlot_Auto(const FString& SlotName, const int32 UserIndex, const bool bSaveIsCompressed = true);

	/**
	* Convert a String into an Array of Bytes. Useful for sending data through the network.
	* @param InString	The String to be converted.
	* @param bUseUtf8	Convert the text to Standard UTF-8 before compressing it. Useful for sending data through the network.
	* @return			An Array of Bytes representing the text.
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::String To Bytes"))
		static TArray<uint8> CGDStringToBytes(const FString& InString, const bool bUseUtf8 = true);

	/**
	* Convert an Array of Bytes into String.
	* @param DataArray	The Array of Bytes to be converted.
	* @return			A String based on the array of bytes.
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Bytes To String"))
		static FString CGDBytesToString(const TArray<uint8>& DataArray);

	/**
	*	Find all Actors in the world with the specified component.
	*	This is a slow operation, use with caution e.g. do not use every frame.
	*	@param	Component			Component to find. Must be specified or result array will be empty.
	*	@param	OutActors			Output array of Actors that have specified component.
	*	@param	OutActorComponents	Output array of Actor Components that belongs to the array of actors.
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Get All Actors With Component", WorldContext = "WorldContextObject", DeterminesOutputType = "Component", DynamicOutputParam = "OutActorComponents"))
		static void GetAllActorsWithComponent(const UObject* WorldContextObject, const TSubclassOf<UActorComponent> Component, TArray<AActor*>& OutActors, TArray<UActorComponent*>& OutActorComponents);

	/**
	*	Get an actor by IDName and Class in the world (hover the mouse in the world out liner to see the actor ID Name).
	*	This is a slow operation, use with caution e.g. do not use every frame.
	*	@param	IDName				ID Name to find. Must be specified or the result will be nullptr.
	*	@param	ActorClass			Class Filter of the actor, determines the OutputType.
	*	@return						The Actor found.
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Get Actor By ID Name and Class", WorldContext = "WorldContextObject", DeterminesOutputType = "ActorClass"))
		static AActor* GetActorByIDNameAndClass(const UObject* WorldContextObject, const FName IDName, const TSubclassOf<AActor> ActorClass);

	/**
	*	Get an actor by IDName from a given Array of Actors.
	*	@param	IDName				ID Name to find. Must be specified or the result will be nullptr.
	*	@param	ArrayOfActors		The Array of Actors in which the search will be performed.
	*	@param	Actor				The Actor found.
	*	@return						The Index of the array where the Actor was found (it's -1 if no actor was found).
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Get Actor By ID Name From Array Of Actors"))
		static int32 GetActorByIDNameFromAnArrayOfActors(const FName IDName, const TArray<AActor*>& ArrayOfActors, AActor*& Actor);

	/**
	* Get an array of FNames bases on the levels currently loaded (including level streaming).
	* Caution: The names also contains the path of the level (Path/LevelName.UMAP...) .
	* So, if a Level is moved to another location, the name will be changed.
	* @param CurrentMapNameArray - Array of Level Names.
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Get Levels Names (Including Sublevels)", WorldContext = "WorldContextObject"))
		static void GetLevelsNames(const UObject* WorldContextObject, TArray<FName>& CurrentMapNameArray);

	/**
	*	Remove the MapRecords from a UCGD_AutoSaveLoad_Object based in the filter input: LevelsNameArray.
	*	Use CDG::GetLevelsNames() node to obtain the array of maps currently loaded..
	*	@param	AutoSaveGameObject	The CGD AutoSaveLoadObject that needs to be created and not be nullptr.
	*	@param	LevelsNameArray		Array of levels names >> Use CDG::GetLevelsNames() node to obtain the array of maps currently loaded (it supports level streaming).
	*	@return						True if at least one map saved data was removed.
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Remove Save Game Data From Levels"))
		static bool TryRemoveCurrentMapSavedData(UCGD_AutoSaveLoad_Object* AutoSaveGameObject, const TArray<FName>& LevelsNameArray);

	/**
	*	Save a SaveGameObject into a compressed file. Location of the save file: Project/Saved/SaveGames.
	*	@param SaveGameObject	The SaveGameObject, it can be created using the CreateSaveGameObject() node.
	*	@param SlotName			Name of the save game slot to load from.
	*   @param UserIndex		For some platforms, master user index to identify the user doing the loading.
	*	@return					The boolean result so we know if the Save was successful or not. It usually fails when the SlotName is empty.
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Save Game To Slot (Compressed)"))
		static bool SaveGameToSlot_Compressed(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);

	/**
	*	Load a game from a compressed saveFile. It doesn't work if you try to load a game from an uncompressed file.
	*	@param SaveGameObject	SaveGameObject of the same type of the one that was saved (Caution: the game will crash if it's not of the same type).
	*	@param SlotName			Name of the save game slot to load from.
	*   @param UserIndex		For some platforms, master user index to identify the user doing the loading.
	*   @return					A Save Game Object reference with the loaded data.
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Load Game From Slot (Compressed)", DeterminesOutputType = "SaveGameObject"))
		static USaveGame* LoadGameFromSlot_Compressed(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);

	/**
	* Get an actor of this class, only if there's only one actor of this class in the world.
	* @param ActorClass		Class of the actor to return
	* @return				The reference of the actor, can be nullptr if there are none or two+ actors in the world.
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true", DisplayName = "CGD::Get Unique Actor Of Class", DeterminesOutputType = "ActorClass"))
		static class AActor* GetUniqueActorOfClass(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass);

	/**
	*	Get the Level reference where the actor is loaded (supports level streaming).
	*	@param Actor	The actor reference.
	*	@return			The Level reference where the actor belongs (supports level streaming).
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Get Level Owner From Actor"))
		static ULevel* GetActorLevel(AActor* Actor);

	/**
	*	Spawn an Actor in the world with a given Name and Class.
	*	CAUTION: Use it wisely, don't give an ID Name that already exists in the world or the previous Actor will be deleted.
	*	@param Class				The class of the actor that will be spawned.
	*	@param SpawnTransformm		The transform data.
	*	@param NameID				The Given Name.
	*	@return						The Spawned Actor Reference.
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (WorldContext = "WorldContextObject", DisplayName = "CGD::Spawn Actor With a Name ID From Class", DeterminesOutputType = "Class"))
		static AActor* SpawnActorWithIDNameFromClass(const UObject* WorldContextObject, const TSubclassOf<AActor> Class, const FTransform SpawnTransformm, FName NameID);


	/**
	*	Only Supposed to be used in Blueprints.
	*	Save an array of actors into an array of FCGDMapRecords.
	*	@param ActorsArray								The array of actors that will be serialized.
	*	@param AutoSaveAndLoadComponentArray			The array of components that belongs to the actors.
	*	@param MapNameArray								The array of Map Names in order to filter which maps have to be saved.
	*   @param MapRecordArray							Result a MapRecordArray with all the actors data sorted by maps.
	*/	
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Save Actors into an Array of MapRecords"))
		static void SaveActorsToArrayOfMaps(const TArray<AActor*>& ActorsArray, const  TArray<UActorComponent *>& AutoSaveAndLoadComponentArray, const TArray<FName>& MapNameArray, TArray<FCGDMapRecord>& MapRecordArray);


	/**
	* Only public in c++.
	* We use this private function to save the game async or sync.
	* We pass an array of ActorsToSaveArray and AutoSaveAndLoadComponentsArray because these arrays are obtained using GetAllActorsWithComponent() that can't be called in a async task because TActorIterator is unsupported.
	*/
	UFUNCTION()
		static void AutoFillSaveGameObject_Internal(const UWorld* World, const TArray<AActor *>& ActorsToSaveArray, const TArray<UActorComponent *>& AutoSaveAndLoadComponentsArray, UCGD_AutoSaveLoad_Object*& AutoSaveGameObject);

	/**
	* Compress an array of Bytes using ZLIB.
	* Use Length() node to see the difference in size.
	* @param DataArray				Array of Bytes that will be compressed.
	* @param CompressedDataArray	The Compressed version of the DataArray.	
	* @return						Is the CompressedDataArray result less in size than the DataArray?
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Compress Array Of Bytes"))
		static bool CompressArrayOfBytes(TArray<uint8> DataArray, TArray<uint8>& CompressedDataArray);

	/**
	* Decompress an array of Bytes using ZLIB.
	* Use Length() node to see the difference in size.
	* @param DataArray					Array of Bytes that will be compressed.
	* @param DeCompressedDataArray		The Decompressed Version of the Array Of Bytes.	
	* @return							Decompressed Array of Bytes.
	*/
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Decompress Array Of Bytes", Keywords = "Uncompress"))
		static void DecompressArrayOfBytes(TArray<uint8> DataArray, TArray<uint8>& DecompressedDataArray);

	/**
	*	Only Supposed to be used in Blueprints.
	*	Load the Actors Data from an Array of MapRecords that can be obtained from the SaveGameObject.
	*	@param RelevantMapRecordArray					The array of MapRecords, can be obtained from a CGD Save Game Object.
	*	@param ActorsArray								The array of the actors in the world that can be updated on Load.
	*   @param AutoSaveAndLoadComponentArray			The array of AutoSaveAndLoadComponent that belongs to the actors.
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Load Actors Data From Array of MapRecords", WorldContext = "WorldContextObject"))
		static void LoadActorDataFromArrayOfMapRecords(const UObject* WorldContextObject, const TArray<FCGDMapRecord>& RelevantMapRecordArray, UPARAM(ref) TArray<AActor *>& ActorsArray, UPARAM(ref) TArray<UActorComponent *>& AutoSaveAndLoadComponentArray);


// 	UFUNCTION(BlueprintCallable, Category = "Stuff", Meta = (ExpandEnumAsExecs = "Branches", ArrayParm = "TargetArray"))
// 		static void LoadVariablesSequence(const int32 DecimalPrefix, const TArray<int32>& TargetArray, ELoadVariablesExec& Branches);

private:
	/**
	*	Load CGDActorRecordStruct data into the corresponding actor (the actor components too).
	*	@param ActorRecord					The Struct that contains all the actors data (and actor components).
	*	@param AutoSaveAndLoadComponent		The AutoSaveAndLoadComponent that belongs to the Actor, used for customizing the functionality.
	*	@param Actor						The actor to be stored in the struct.
	*	@param bLoadActorComponents			Determines if the ActorComponents Will be Loaded or not.
	*/
	UFUNCTION()
		static void FullLoadActor(const FCGDActorRecord& ActorRecord, AActor* Actor, UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent, const bool bLoadActorComponents = true);

	/**
	* Try to destroy an array of actors if their corresponding AutoSaveAndLoadComponents have the bDestroyActorOnLoadGameIfWasNotSaved set to true
	*/
	UFUNCTION()
		static void CGDTryDestroyActors(const UObject* WorldContextObject, TArray<AActor *>& ActorsToSerialize, TArray<UActorComponent *>& AutoSaveAndLoadComponentArray);

	UFUNCTION(/*BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (Latent, LatentInfo = "LatentInfo", DisplayName = "CGD::Auto Fill Save Game Object (Async)", WorldContext = "WorldContextObject")*/)
		static UCGD_AutoSaveLoad_Object* AutoFillSaveGameObject_Async(const UObject* WorldContextObject, UCGD_AutoSaveLoad_Object* AutoSaveGameObject, FLatentActionInfo& LatentInfo);

	UFUNCTION(/*BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (DisplayName = "CGD::Save Game To Slot (Compressed) (Async)")*/)
		static bool SaveGameToSlot_Compressed_Async(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);

	UFUNCTION(/*BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::GameplayStatics", meta = (Latent, DisplayName = "CGD::Save Game To Slot (Async)")*/)
		static bool SaveGameToSlot_Async(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);

	/**
	* Save an Actor Data into a CGDActorStruct
	*/
	UFUNCTION()
		static void SaveActor(FCGDActorRecord& ActorRecord, AActor* Actor, const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent);

	/**
	* Save the components of an Actor into an Array of CGDActorComponentArrayRecords
	*/
	UFUNCTION()
		static void SaveActorComponents(FCGDActorRecord& ActorRecord, AActor* Actor, const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent);

	/**
	* Load an Actor from a CGDActorStruct
	*/
	UFUNCTION()
		static void LoadActor(const FCGDActorRecord& ActorRecord, AActor* DynamicActor);

	/**
	* Load the components of an Actor from an array of CGDActorComponentArrayRecords
	*/
	UFUNCTION()
		static void LoadActorComponents(const FCGDActorRecord& ActorRecord, AActor* DynamicActor, const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent);

	/**
	* Check if the component can be saved or not. If it can be saved, returns the componentOptions that can be used to customize the functionality
	*/
	UFUNCTION()
		static bool GetComponentSaveAndLoadConditions(const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent,const UActorComponent* actorcomponent, FCGDAutoSaveAndLoadComponentOption &componentOptions);

	/**
	* Load a component of an actor from a CGDActorComponentRecord
	*/
	UFUNCTION()
		static void LoadActorComponent(const FCGDActorComponentRecord &actorComponentRecord, UActorComponent* actorcomponent, const FCGDAutoSaveAndLoadComponentOption &componentOptions, const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent);

	/**
	* Compress an array of Bytes using ZLIB
	* Use Length() node to see the difference in size
	* @param DataArray	Array of Bytes that will be compressed
	* @return			Compressed Array of Bytes
	*/
	UFUNCTION()
		static void CompressArrayOfBytes_Internal(TArray<uint8>& DataArray, TArray<uint8>& CompressedDataArray);

	/**
	* Decompress an array of Bytes using ZLIB
	* Use Length() node to see the difference in size
	* @param DataArray	Array of Bytes that will be compressed
	* @return			Decompressed Array of Bytes
	*/
	UFUNCTION()
		static void DecompressArrayOfBytes_Internal(TArray<uint8>& DataArray, TArray<uint8>& DeCompressedDataArray);
};