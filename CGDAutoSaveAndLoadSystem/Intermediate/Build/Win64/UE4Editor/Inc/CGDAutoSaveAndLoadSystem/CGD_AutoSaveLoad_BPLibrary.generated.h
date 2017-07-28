// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCGDActorComponentRecord;
class UActorComponent;
struct FCGDAutoSaveAndLoadComponentOption;
class UCGDAutoSaveAndLoadComponent;
struct FCGDActorRecord;
class AActor;
class USaveGame;
class UObject;
class UCGD_AutoSaveLoad_Object;
struct FLatentActionInfo;
struct FCGDMapRecord;
class UWorld;
struct FTransform;
class ULevel;
#ifdef CGDAUTOSAVEANDLOADSYSTEM_CGD_AutoSaveLoad_BPLibrary_generated_h
#error "CGD_AutoSaveLoad_BPLibrary.generated.h already included, missing '#pragma once' in CGD_AutoSaveLoad_BPLibrary.h"
#endif
#define CGDAUTOSAVEANDLOADSYSTEM_CGD_AutoSaveLoad_BPLibrary_generated_h

#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecompressArrayOfBytes_Internal) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataArray); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DeCompressedDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::DecompressArrayOfBytes_Internal(Z_Param_Out_DataArray,Z_Param_Out_DeCompressedDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompressArrayOfBytes_Internal) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataArray); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::CompressArrayOfBytes_Internal(Z_Param_Out_DataArray,Z_Param_Out_CompressedDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadActorComponent) \
	{ \
		P_GET_STRUCT_REF(FCGDActorComponentRecord,Z_Param_Out_actorComponentRecord); \
		P_GET_OBJECT(UActorComponent,Z_Param_actorcomponent); \
		P_GET_STRUCT_REF(FCGDAutoSaveAndLoadComponentOption,Z_Param_Out_componentOptions); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::LoadActorComponent(Z_Param_Out_actorComponentRecord,Z_Param_actorcomponent,Z_Param_Out_componentOptions,Z_Param_AutoSaveAndLoadComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentSaveAndLoadConditions) \
	{ \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_GET_OBJECT(UActorComponent,Z_Param_actorcomponent); \
		P_GET_STRUCT_REF(FCGDAutoSaveAndLoadComponentOption,Z_Param_Out_componentOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetComponentSaveAndLoadConditions(Z_Param_AutoSaveAndLoadComponent,Z_Param_actorcomponent,Z_Param_Out_componentOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadActorComponents) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_DynamicActor); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::LoadActorComponents(Z_Param_Out_ActorRecord,Z_Param_DynamicActor,Z_Param_AutoSaveAndLoadComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadActor) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_DynamicActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::LoadActor(Z_Param_Out_ActorRecord,Z_Param_DynamicActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveActorComponents) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::SaveActorComponents(Z_Param_Out_ActorRecord,Z_Param_Actor,Z_Param_AutoSaveAndLoadComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveActor) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::SaveActor(Z_Param_Out_ActorRecord,Z_Param_Actor,Z_Param_AutoSaveAndLoadComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlot_Async) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Async(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlot_Compressed_Async) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Compressed_Async(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoFillSaveGameObject_Async) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_GET_STRUCT_REF(FLatentActionInfo,Z_Param_Out_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCGD_AutoSaveLoad_Object**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject_Async(Z_Param_WorldContextObject,Z_Param_AutoSaveGameObject,Z_Param_Out_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCGDTryDestroyActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToSerialize); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::CGDTryDestroyActors(Z_Param_WorldContextObject,Z_Param_Out_ActorsToSerialize,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFullLoadActor) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_GET_UBOOL(Z_Param_bLoadActorComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::FullLoadActor(Z_Param_Out_ActorRecord,Z_Param_Actor,Z_Param_AutoSaveAndLoadComponent,Z_Param_bLoadActorComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadActorDataFromArrayOfMapRecords) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FCGDMapRecord,Z_Param_Out_RelevantMapRecordArray); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsArray); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::LoadActorDataFromArrayOfMapRecords(Z_Param_WorldContextObject,Z_Param_Out_RelevantMapRecordArray,Z_Param_Out_ActorsArray,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecompressArrayOfBytes) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_DataArray); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DecompressedDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::DecompressArrayOfBytes(Z_Param_DataArray,Z_Param_Out_DecompressedDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompressArrayOfBytes) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_DataArray); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::CompressArrayOfBytes(Z_Param_DataArray,Z_Param_Out_CompressedDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoFillSaveGameObject_Internal) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToSaveArray); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_AutoSaveAndLoadComponentsArray); \
		P_GET_OBJECT_REF(UCGD_AutoSaveLoad_Object,Z_Param_Out_AutoSaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject_Internal(Z_Param_World,Z_Param_Out_ActorsToSaveArray,Z_Param_Out_AutoSaveAndLoadComponentsArray,Z_Param_Out_AutoSaveGameObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveActorsToArrayOfMaps) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsArray); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_MapNameArray); \
		P_GET_TARRAY_REF(FCGDMapRecord,Z_Param_Out_MapRecordArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::SaveActorsToArrayOfMaps(Z_Param_Out_ActorsArray,Z_Param_Out_AutoSaveAndLoadComponentArray,Z_Param_Out_MapNameArray,Z_Param_Out_MapRecordArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActorWithIDNameFromClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_STRUCT(FTransform,Z_Param_SpawnTransformm); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NameID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::SpawnActorWithIDNameFromClass(Z_Param_WorldContextObject,Z_Param_Class,Z_Param_SpawnTransformm,Z_Param_NameID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorLevel) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevel**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetActorLevel(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueActorOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetUniqueActorOfClass(Z_Param_WorldContextObject,Z_Param_ActorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameFromSlot_Compressed) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::LoadGameFromSlot_Compressed(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlot_Compressed) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Compressed(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryRemoveCurrentMapSavedData) \
	{ \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_LevelsNameArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::TryRemoveCurrentMapSavedData(Z_Param_AutoSaveGameObject,Z_Param_Out_LevelsNameArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelsNames) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_CurrentMapNameArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::GetLevelsNames(Z_Param_WorldContextObject,Z_Param_Out_CurrentMapNameArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorByIDNameFromAnArrayOfActors) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_IDName); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ArrayOfActors); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetActorByIDNameFromAnArrayOfActors(Z_Param_IDName,Z_Param_Out_ArrayOfActors,Z_Param_Out_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorByIDNameAndClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_IDName); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetActorByIDNameAndClass(Z_Param_WorldContextObject,Z_Param_IDName,Z_Param_ActorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsWithComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Component); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_OutActorComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::GetAllActorsWithComponent(Z_Param_WorldContextObject,Z_Param_Component,Z_Param_Out_OutActors,Z_Param_Out_OutActorComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCGDBytesToString) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::CGDBytesToString(Z_Param_Out_DataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCGDStringToBytes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_UBOOL(Z_Param_bUseUtf8); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::CGDStringToBytes(Z_Param_InString,Z_Param_bUseUtf8); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteGameInSlot_Auto) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_GET_UBOOL(Z_Param_bSaveIsCompressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::DeleteGameInSlot_Auto(Z_Param_SlotName,Z_Param_UserIndex,Z_Param_bSaveIsCompressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSaveGameExist_Auto) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_GET_UBOOL(Z_Param_bSaveIsCompressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::DoesSaveGameExist_Auto(Z_Param_SlotName,Z_Param_UserIndex,Z_Param_bSaveIsCompressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantMapRecordArray) \
	{ \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_CurrentMapNameArray); \
		P_GET_TARRAY_REF(FCGDMapRecord,Z_Param_Out_RelevantMapRecordArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::GetRelevantMapRecordArray(Z_Param_AutoSaveGameObject,Z_Param_Out_CurrentMapNameArray,Z_Param_Out_RelevantMapRecordArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoLoadActorsDataFromSave) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::AutoLoadActorsDataFromSave(Z_Param_WorldContextObject,Z_Param_AutoSaveGameObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoFillSaveGameObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCGD_AutoSaveLoad_Object**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject(Z_Param_WorldContextObject,Z_Param_AutoSaveGameObject); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecompressArrayOfBytes_Internal) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataArray); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DeCompressedDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::DecompressArrayOfBytes_Internal(Z_Param_Out_DataArray,Z_Param_Out_DeCompressedDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompressArrayOfBytes_Internal) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataArray); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::CompressArrayOfBytes_Internal(Z_Param_Out_DataArray,Z_Param_Out_CompressedDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadActorComponent) \
	{ \
		P_GET_STRUCT_REF(FCGDActorComponentRecord,Z_Param_Out_actorComponentRecord); \
		P_GET_OBJECT(UActorComponent,Z_Param_actorcomponent); \
		P_GET_STRUCT_REF(FCGDAutoSaveAndLoadComponentOption,Z_Param_Out_componentOptions); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::LoadActorComponent(Z_Param_Out_actorComponentRecord,Z_Param_actorcomponent,Z_Param_Out_componentOptions,Z_Param_AutoSaveAndLoadComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentSaveAndLoadConditions) \
	{ \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_GET_OBJECT(UActorComponent,Z_Param_actorcomponent); \
		P_GET_STRUCT_REF(FCGDAutoSaveAndLoadComponentOption,Z_Param_Out_componentOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetComponentSaveAndLoadConditions(Z_Param_AutoSaveAndLoadComponent,Z_Param_actorcomponent,Z_Param_Out_componentOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadActorComponents) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_DynamicActor); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::LoadActorComponents(Z_Param_Out_ActorRecord,Z_Param_DynamicActor,Z_Param_AutoSaveAndLoadComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadActor) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_DynamicActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::LoadActor(Z_Param_Out_ActorRecord,Z_Param_DynamicActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveActorComponents) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::SaveActorComponents(Z_Param_Out_ActorRecord,Z_Param_Actor,Z_Param_AutoSaveAndLoadComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveActor) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::SaveActor(Z_Param_Out_ActorRecord,Z_Param_Actor,Z_Param_AutoSaveAndLoadComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlot_Async) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Async(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlot_Compressed_Async) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Compressed_Async(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoFillSaveGameObject_Async) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_GET_STRUCT_REF(FLatentActionInfo,Z_Param_Out_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCGD_AutoSaveLoad_Object**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject_Async(Z_Param_WorldContextObject,Z_Param_AutoSaveGameObject,Z_Param_Out_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCGDTryDestroyActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToSerialize); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::CGDTryDestroyActors(Z_Param_WorldContextObject,Z_Param_Out_ActorsToSerialize,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFullLoadActor) \
	{ \
		P_GET_STRUCT_REF(FCGDActorRecord,Z_Param_Out_ActorRecord); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UCGDAutoSaveAndLoadComponent,Z_Param_AutoSaveAndLoadComponent); \
		P_GET_UBOOL(Z_Param_bLoadActorComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::FullLoadActor(Z_Param_Out_ActorRecord,Z_Param_Actor,Z_Param_AutoSaveAndLoadComponent,Z_Param_bLoadActorComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadActorDataFromArrayOfMapRecords) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FCGDMapRecord,Z_Param_Out_RelevantMapRecordArray); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsArray); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::LoadActorDataFromArrayOfMapRecords(Z_Param_WorldContextObject,Z_Param_Out_RelevantMapRecordArray,Z_Param_Out_ActorsArray,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecompressArrayOfBytes) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_DataArray); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DecompressedDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::DecompressArrayOfBytes(Z_Param_DataArray,Z_Param_Out_DecompressedDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompressArrayOfBytes) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_DataArray); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::CompressArrayOfBytes(Z_Param_DataArray,Z_Param_Out_CompressedDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoFillSaveGameObject_Internal) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToSaveArray); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_AutoSaveAndLoadComponentsArray); \
		P_GET_OBJECT_REF(UCGD_AutoSaveLoad_Object,Z_Param_Out_AutoSaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject_Internal(Z_Param_World,Z_Param_Out_ActorsToSaveArray,Z_Param_Out_AutoSaveAndLoadComponentsArray,Z_Param_Out_AutoSaveGameObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveActorsToArrayOfMaps) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsArray); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_AutoSaveAndLoadComponentArray); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_MapNameArray); \
		P_GET_TARRAY_REF(FCGDMapRecord,Z_Param_Out_MapRecordArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::SaveActorsToArrayOfMaps(Z_Param_Out_ActorsArray,Z_Param_Out_AutoSaveAndLoadComponentArray,Z_Param_Out_MapNameArray,Z_Param_Out_MapRecordArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActorWithIDNameFromClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_STRUCT(FTransform,Z_Param_SpawnTransformm); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NameID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::SpawnActorWithIDNameFromClass(Z_Param_WorldContextObject,Z_Param_Class,Z_Param_SpawnTransformm,Z_Param_NameID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorLevel) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevel**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetActorLevel(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueActorOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetUniqueActorOfClass(Z_Param_WorldContextObject,Z_Param_ActorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameFromSlot_Compressed) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::LoadGameFromSlot_Compressed(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlot_Compressed) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Compressed(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryRemoveCurrentMapSavedData) \
	{ \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_LevelsNameArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::TryRemoveCurrentMapSavedData(Z_Param_AutoSaveGameObject,Z_Param_Out_LevelsNameArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelsNames) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_CurrentMapNameArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::GetLevelsNames(Z_Param_WorldContextObject,Z_Param_Out_CurrentMapNameArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorByIDNameFromAnArrayOfActors) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_IDName); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ArrayOfActors); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetActorByIDNameFromAnArrayOfActors(Z_Param_IDName,Z_Param_Out_ArrayOfActors,Z_Param_Out_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorByIDNameAndClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_IDName); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::GetActorByIDNameAndClass(Z_Param_WorldContextObject,Z_Param_IDName,Z_Param_ActorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsWithComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Component); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_OutActorComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::GetAllActorsWithComponent(Z_Param_WorldContextObject,Z_Param_Component,Z_Param_Out_OutActors,Z_Param_Out_OutActorComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCGDBytesToString) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::CGDBytesToString(Z_Param_Out_DataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCGDStringToBytes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_UBOOL(Z_Param_bUseUtf8); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::CGDStringToBytes(Z_Param_InString,Z_Param_bUseUtf8); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteGameInSlot_Auto) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_GET_UBOOL(Z_Param_bSaveIsCompressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::DeleteGameInSlot_Auto(Z_Param_SlotName,Z_Param_UserIndex,Z_Param_bSaveIsCompressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSaveGameExist_Auto) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_GET_UBOOL(Z_Param_bSaveIsCompressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::DoesSaveGameExist_Auto(Z_Param_SlotName,Z_Param_UserIndex,Z_Param_bSaveIsCompressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantMapRecordArray) \
	{ \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_CurrentMapNameArray); \
		P_GET_TARRAY_REF(FCGDMapRecord,Z_Param_Out_RelevantMapRecordArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCGD_AutoSaveLoad_BPLibrary::GetRelevantMapRecordArray(Z_Param_AutoSaveGameObject,Z_Param_Out_CurrentMapNameArray,Z_Param_Out_RelevantMapRecordArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoLoadActorsDataFromSave) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::AutoLoadActorsDataFromSave(Z_Param_WorldContextObject,Z_Param_AutoSaveGameObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoFillSaveGameObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UCGD_AutoSaveLoad_Object,Z_Param_AutoSaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCGD_AutoSaveLoad_Object**)Z_Param__Result=UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject(Z_Param_WorldContextObject,Z_Param_AutoSaveGameObject); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCGD_AutoSaveLoad_BPLibrary(); \
	friend CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary(); \
public: \
	DECLARE_CLASS(UCGD_AutoSaveLoad_BPLibrary, UGameplayStatics, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CGDAutoSaveAndLoadSystem"), NO_API) \
	DECLARE_SERIALIZER(UCGD_AutoSaveLoad_BPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCGD_AutoSaveLoad_BPLibrary(); \
	friend CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary(); \
public: \
	DECLARE_CLASS(UCGD_AutoSaveLoad_BPLibrary, UGameplayStatics, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CGDAutoSaveAndLoadSystem"), NO_API) \
	DECLARE_SERIALIZER(UCGD_AutoSaveLoad_BPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCGD_AutoSaveLoad_BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCGD_AutoSaveLoad_BPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCGD_AutoSaveLoad_BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCGD_AutoSaveLoad_BPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCGD_AutoSaveLoad_BPLibrary(UCGD_AutoSaveLoad_BPLibrary&&); \
	NO_API UCGD_AutoSaveLoad_BPLibrary(const UCGD_AutoSaveLoad_BPLibrary&); \
public:


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCGD_AutoSaveLoad_BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCGD_AutoSaveLoad_BPLibrary(UCGD_AutoSaveLoad_BPLibrary&&); \
	NO_API UCGD_AutoSaveLoad_BPLibrary(const UCGD_AutoSaveLoad_BPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCGD_AutoSaveLoad_BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCGD_AutoSaveLoad_BPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCGD_AutoSaveLoad_BPLibrary)


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_15_PROLOG
#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_RPC_WRAPPERS \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_INCLASS \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_BlueprintFunctionLibrary_GameplayStatics_CGD_AutoSaveLoad_BPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
