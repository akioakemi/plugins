// Copyright Cronofear Softworks 2017

#pragma once

#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "CGD_AutoSaveLoad_Struct.generated.h"


/**
* Custom GameArchive that allows to serialize SAVEGAME flagged variables
*/
struct FCGDSaveGameArchive : public FObjectAndNameAsStringProxyArchive
{
	FCGDSaveGameArchive(FArchive& InInnerArchive, bool bInLoadIfFindFails) :FObjectAndNameAsStringProxyArchive(InInnerArchive, bInLoadIfFindFails)
	{
		ArIsSaveGame = true;
	}
};

/**
* The structure where the actors components data will be stored
*/
USTRUCT()
struct FCGDActorComponentRecord
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Name")
		FName ActorComponentName;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "ComponentData")
		TArray<uint8> ActorsComponentData;

	///Transform if it's an actor component and the location wants to be saved
	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Transform")
		FVector SceneComponentLocation;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Transform")
		FRotator SceneComponentRotation;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Transform")
		FVector SceneComponentScale;

	///Physic simulation data in case it's a primitive component and the simulation state wants to be saved
	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Physics")
		FVector PrimitiveComponentLinearVelocity;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Physics")
		FVector PrimitiveComponentAngularVelocity;

	FCGDActorComponentRecord()
	{

	}
};

/**
* The structure where the actors data will be stored (each actor has an array of actor components records)
*/
USTRUCT(BlueprintType)
struct FCGDActorRecord
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Name")
		FName ActorName;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Class")
		UClass*	ActorClass;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Transform")
		FTransform ActorTransform;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Bool")
		bool bHasToLoadWithRandomName;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "ActorData")
		TArray<uint8> ActorData;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "ComponentData")
		TArray<FCGDActorComponentRecord> ActorsComponentRecordArray;

	FCGDActorRecord()
	{

	}
};

/**
* The structure where the map data will be stored (each map has an array of actor records)
*/
USTRUCT(BlueprintType)
struct FCGDMapRecord
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Name")
		FName MapName;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Array")
		TArray<FCGDActorRecord> ActorsRecordsArray;

	FCGDMapRecord()
	{

	}
};

/**
* Component Options
*/
USTRUCT(BlueprintType)
struct FCGDAutoSaveAndLoadComponentOption
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "ActorComponent")
		FName ComponentName="";
	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "SceneComponent")
		uint32 bSaveComponent : 1;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "SceneComponent", meta = (EditCondition = "bSaveComponent"))
		bool bSaveComponentLocation = true;
	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "SceneComponent", meta = (EditCondition = "bSaveComponent"))
		bool bSaveComponentRotation = true;
	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "SceneComponent", meta = (EditCondition = "bSaveComponent"))
		bool bSaveComponentScale = true;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "PrimitiveComponent", meta = (EditCondition = "bSaveComponent"))
		bool bSaveComponnetLinearVelocity = true;
	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "PrimitiveComponent", meta = (EditCondition = "bSaveComponent"))
		bool bSaveComponnetAngularVelocity = true;

	FCGDAutoSaveAndLoadComponentOption()
	{

	}
};

/**
* Execution Load Variables Enum
*/
UENUM(BlueprintType)
enum class ELoadVariablesExec : uint8
{
	Then0,
	Then1,
	Then2,
	Then3,
	Then4,
	Then5,
	Then6,
	Then7,
	Then8,
	Then9
};