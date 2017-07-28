// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CGDAutoSaveAndLoadSystem.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1CGDAutoSaveAndLoadSystem() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UGameplayStatics();
	ENGINE_API class UClass* Z_Construct_UClass_USaveGame();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();

	CGDAUTOSAVEANDLOADSYSTEM_API class UEnum* Z_Construct_UEnum_CGDAutoSaveAndLoadSystem_ELoadVariablesExec();
	CGDAUTOSAVEANDLOADSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption();
	CGDAUTOSAVEANDLOADSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FCGDMapRecord();
	CGDAUTOSAVEANDLOADSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FCGDActorRecord();
	CGDAUTOSAVEANDLOADSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FCGDActorComponentRecord();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject_Async();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject_Internal();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoLoadActorsDataFromSave();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDBytesToString();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDStringToBytes();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDTryDestroyActors();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CompressArrayOfBytes();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CompressArrayOfBytes_Internal();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DecompressArrayOfBytes();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DecompressArrayOfBytes_Internal();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DeleteGameInSlot_Auto();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DoesSaveGameExist_Auto();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_FullLoadActor();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorByIDNameAndClass();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorByIDNameFromAnArrayOfActors();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorLevel();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetAllActorsWithComponent();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetComponentSaveAndLoadConditions();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetLevelsNames();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetRelevantMapRecordArray();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetUniqueActorOfClass();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActor();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorComponent();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorComponents();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorDataFromArrayOfMapRecords();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadGameFromSlot_Compressed();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActor();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActorComponents();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActorsToArrayOfMaps();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Async();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Compressed();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Compressed_Async();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SpawnActorWithIDNameFromClass();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_TryRemoveCurrentMapSavedData();
	CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary_NoRegister();
	CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
	CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister();
	CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_Object();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadUnchanged__DelegateSignature();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadBeginDestroy__DelegateSignature();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadEnd__DelegateSignature();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadStart__DelegateSignature();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnSaveEnd__DelegateSignature();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnSaveStart__DelegateSignature();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetComponentOptions();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetDestroyActorOnLoadGameIfWasNotSaved();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetEnablePlugin();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetLoadActorWithRandomIDName();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponents();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsAngularVelocity();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsLinearVelocity();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsLocation();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsRotation();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsScale();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedBooleans();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedFloats();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedNames();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedNumbers();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedRotators();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedStrings();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedVectors();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetWasSaved();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnBeginDestroyUnsavedActor();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnLoadEnd();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnLoadStart();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnSaveEnd();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnSaveStart();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnUnchangedActor();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetComponentOptions();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetDestroyActorOnLoadGameIfWasNotSaved();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetEnablePlugin();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetLoadActorWithRandomIDName();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponents();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsAngularVelocity();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsLinearVelocity();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsLocation();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsRotation();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsScale();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedBooleans();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedFloats();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedNames();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedNumbers();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedRotators();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedStrings();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedVectors();
	CGDAUTOSAVEANDLOADSYSTEM_API class UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetWasSaved();
	CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGDAutoSaveAndLoadComponent_NoRegister();
	CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
	CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGDDummyObject_NoRegister();
	CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGDDummyObject();
	CGDAUTOSAVEANDLOADSYSTEM_API class UPackage* Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
static UEnum* ELoadVariablesExec_StaticEnum()
{
	extern CGDAUTOSAVEANDLOADSYSTEM_API class UPackage* Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern CGDAUTOSAVEANDLOADSYSTEM_API class UEnum* Z_Construct_UEnum_CGDAutoSaveAndLoadSystem_ELoadVariablesExec();
		Singleton = GetStaticEnum(Z_Construct_UEnum_CGDAutoSaveAndLoadSystem_ELoadVariablesExec, Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem(), TEXT("ELoadVariablesExec"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadVariablesExec(ELoadVariablesExec_StaticEnum, TEXT("/Script/CGDAutoSaveAndLoadSystem"), TEXT("ELoadVariablesExec"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_CGDAutoSaveAndLoadSystem_ELoadVariablesExec()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		extern uint32 Get_Z_Construct_UEnum_CGDAutoSaveAndLoadSystem_ELoadVariablesExec_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadVariablesExec"), 0, Get_Z_Construct_UEnum_CGDAutoSaveAndLoadSystem_ELoadVariablesExec_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ELoadVariablesExec"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then0"), 0);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then1"), 1);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then2"), 2);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then3"), 3);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then4"), 4);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then5"), 5);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then6"), 6);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then7"), 7);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then8"), 8);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::Then9"), 9);
			EnumNames.Emplace(TEXT("ELoadVariablesExec::ELoadVariablesExec_MAX"), 10);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ELoadVariablesExec");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Execution Load Variables Enum"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_CGDAutoSaveAndLoadSystem_ELoadVariablesExec_CRC() { return 934625663U; }
class UScriptStruct* FCGDAutoSaveAndLoadComponentOption::StaticStruct()
{
	extern CGDAUTOSAVEANDLOADSYSTEM_API class UPackage* Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CGDAUTOSAVEANDLOADSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption();
		extern CGDAUTOSAVEANDLOADSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption, Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem(), TEXT("CGDAutoSaveAndLoadComponentOption"), sizeof(FCGDAutoSaveAndLoadComponentOption), Get_Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption(FCGDAutoSaveAndLoadComponentOption::StaticStruct, TEXT("/Script/CGDAutoSaveAndLoadSystem"), TEXT("CGDAutoSaveAndLoadComponentOption"), false, nullptr, nullptr);
static struct FScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDAutoSaveAndLoadComponentOption
{
	FScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDAutoSaveAndLoadComponentOption()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CGDAutoSaveAndLoadComponentOption")),new UScriptStruct::TCppStructOps<FCGDAutoSaveAndLoadComponentOption>);
	}
} ScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDAutoSaveAndLoadComponentOption;
	UScriptStruct* Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		extern uint32 Get_Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CGDAutoSaveAndLoadComponentOption"), sizeof(FCGDAutoSaveAndLoadComponentOption), Get_Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDAutoSaveAndLoadComponentOption"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCGDAutoSaveAndLoadComponentOption>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponnetAngularVelocity, FCGDAutoSaveAndLoadComponentOption, bool);
			UProperty* NewProp_bSaveComponnetAngularVelocity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSaveComponnetAngularVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponnetAngularVelocity, FCGDAutoSaveAndLoadComponentOption), 0x0010000001000005, CPP_BOOL_PROPERTY_BITMASK(bSaveComponnetAngularVelocity, FCGDAutoSaveAndLoadComponentOption), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponnetLinearVelocity, FCGDAutoSaveAndLoadComponentOption, bool);
			UProperty* NewProp_bSaveComponnetLinearVelocity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSaveComponnetLinearVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponnetLinearVelocity, FCGDAutoSaveAndLoadComponentOption), 0x0010000001000005, CPP_BOOL_PROPERTY_BITMASK(bSaveComponnetLinearVelocity, FCGDAutoSaveAndLoadComponentOption), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponentScale, FCGDAutoSaveAndLoadComponentOption, bool);
			UProperty* NewProp_bSaveComponentScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSaveComponentScale"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponentScale, FCGDAutoSaveAndLoadComponentOption), 0x0010000001000005, CPP_BOOL_PROPERTY_BITMASK(bSaveComponentScale, FCGDAutoSaveAndLoadComponentOption), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponentRotation, FCGDAutoSaveAndLoadComponentOption, bool);
			UProperty* NewProp_bSaveComponentRotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSaveComponentRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponentRotation, FCGDAutoSaveAndLoadComponentOption), 0x0010000001000005, CPP_BOOL_PROPERTY_BITMASK(bSaveComponentRotation, FCGDAutoSaveAndLoadComponentOption), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponentLocation, FCGDAutoSaveAndLoadComponentOption, bool);
			UProperty* NewProp_bSaveComponentLocation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSaveComponentLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponentLocation, FCGDAutoSaveAndLoadComponentOption), 0x0010000001000005, CPP_BOOL_PROPERTY_BITMASK(bSaveComponentLocation, FCGDAutoSaveAndLoadComponentOption), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponent, FCGDAutoSaveAndLoadComponentOption, uint8);
			UProperty* NewProp_bSaveComponent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSaveComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponent, FCGDAutoSaveAndLoadComponentOption), 0x0010000001000005, CPP_BOOL_PROPERTY_BITMASK(bSaveComponent, FCGDAutoSaveAndLoadComponentOption), sizeof(uint8), false);
			UProperty* NewProp_ComponentName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ComponentName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ComponentName, FCGDAutoSaveAndLoadComponentOption), 0x0010000001000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Component Options"));
			MetaData->SetValue(NewProp_bSaveComponnetAngularVelocity, TEXT("Category"), TEXT("PrimitiveComponent"));
			MetaData->SetValue(NewProp_bSaveComponnetAngularVelocity, TEXT("EditCondition"), TEXT("bSaveComponent"));
			MetaData->SetValue(NewProp_bSaveComponnetAngularVelocity, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_bSaveComponnetLinearVelocity, TEXT("Category"), TEXT("PrimitiveComponent"));
			MetaData->SetValue(NewProp_bSaveComponnetLinearVelocity, TEXT("EditCondition"), TEXT("bSaveComponent"));
			MetaData->SetValue(NewProp_bSaveComponnetLinearVelocity, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_bSaveComponentScale, TEXT("Category"), TEXT("SceneComponent"));
			MetaData->SetValue(NewProp_bSaveComponentScale, TEXT("EditCondition"), TEXT("bSaveComponent"));
			MetaData->SetValue(NewProp_bSaveComponentScale, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_bSaveComponentRotation, TEXT("Category"), TEXT("SceneComponent"));
			MetaData->SetValue(NewProp_bSaveComponentRotation, TEXT("EditCondition"), TEXT("bSaveComponent"));
			MetaData->SetValue(NewProp_bSaveComponentRotation, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_bSaveComponentLocation, TEXT("Category"), TEXT("SceneComponent"));
			MetaData->SetValue(NewProp_bSaveComponentLocation, TEXT("EditCondition"), TEXT("bSaveComponent"));
			MetaData->SetValue(NewProp_bSaveComponentLocation, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_bSaveComponent, TEXT("Category"), TEXT("SceneComponent"));
			MetaData->SetValue(NewProp_bSaveComponent, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_ComponentName, TEXT("Category"), TEXT("ActorComponent"));
			MetaData->SetValue(NewProp_ComponentName, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption_CRC() { return 2806963835U; }
class UScriptStruct* FCGDMapRecord::StaticStruct()
{
	extern CGDAUTOSAVEANDLOADSYSTEM_API class UPackage* Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CGDAUTOSAVEANDLOADSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FCGDMapRecord();
		extern CGDAUTOSAVEANDLOADSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FCGDMapRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCGDMapRecord, Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem(), TEXT("CGDMapRecord"), sizeof(FCGDMapRecord), Get_Z_Construct_UScriptStruct_FCGDMapRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCGDMapRecord(FCGDMapRecord::StaticStruct, TEXT("/Script/CGDAutoSaveAndLoadSystem"), TEXT("CGDMapRecord"), false, nullptr, nullptr);
static struct FScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDMapRecord
{
	FScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDMapRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CGDMapRecord")),new UScriptStruct::TCppStructOps<FCGDMapRecord>);
	}
} ScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDMapRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FCGDMapRecord()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		extern uint32 Get_Z_Construct_UScriptStruct_FCGDMapRecord_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CGDMapRecord"), sizeof(FCGDMapRecord), Get_Z_Construct_UScriptStruct_FCGDMapRecord_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDMapRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCGDMapRecord>, EStructFlags(0x00000001));
			UProperty* NewProp_ActorsRecordsArray = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorsRecordsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActorsRecordsArray, FCGDMapRecord), 0x0010000001000005);
			UProperty* NewProp_ActorsRecordsArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActorsRecordsArray, TEXT("ActorsRecordsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCGDActorRecord());
			UProperty* NewProp_MapName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MapName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(MapName, FCGDMapRecord), 0x0010000001000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("The structure where the map data will be stored (each map has an array of actor records)"));
			MetaData->SetValue(NewProp_ActorsRecordsArray, TEXT("Category"), TEXT("Array"));
			MetaData->SetValue(NewProp_ActorsRecordsArray, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_MapName, TEXT("Category"), TEXT("Name"));
			MetaData->SetValue(NewProp_MapName, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCGDMapRecord_CRC() { return 2918848474U; }
class UScriptStruct* FCGDActorRecord::StaticStruct()
{
	extern CGDAUTOSAVEANDLOADSYSTEM_API class UPackage* Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CGDAUTOSAVEANDLOADSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FCGDActorRecord();
		extern CGDAUTOSAVEANDLOADSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FCGDActorRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCGDActorRecord, Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem(), TEXT("CGDActorRecord"), sizeof(FCGDActorRecord), Get_Z_Construct_UScriptStruct_FCGDActorRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCGDActorRecord(FCGDActorRecord::StaticStruct, TEXT("/Script/CGDAutoSaveAndLoadSystem"), TEXT("CGDActorRecord"), false, nullptr, nullptr);
static struct FScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDActorRecord
{
	FScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDActorRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CGDActorRecord")),new UScriptStruct::TCppStructOps<FCGDActorRecord>);
	}
} ScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDActorRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FCGDActorRecord()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		extern uint32 Get_Z_Construct_UScriptStruct_FCGDActorRecord_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CGDActorRecord"), sizeof(FCGDActorRecord), Get_Z_Construct_UScriptStruct_FCGDActorRecord_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDActorRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCGDActorRecord>, EStructFlags(0x00000001));
			UProperty* NewProp_ActorsComponentRecordArray = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorsComponentRecordArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActorsComponentRecordArray, FCGDActorRecord), 0x0010000001000005);
			UProperty* NewProp_ActorsComponentRecordArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActorsComponentRecordArray, TEXT("ActorsComponentRecordArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCGDActorComponentRecord());
			UProperty* NewProp_ActorData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActorData, FCGDActorRecord), 0x0010000001000005);
			UProperty* NewProp_ActorData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActorData, TEXT("ActorData"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasToLoadWithRandomName, FCGDActorRecord, bool);
			UProperty* NewProp_bHasToLoadWithRandomName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bHasToLoadWithRandomName"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasToLoadWithRandomName, FCGDActorRecord), 0x0010000001000005, CPP_BOOL_PROPERTY_BITMASK(bHasToLoadWithRandomName, FCGDActorRecord), sizeof(bool), true);
			UProperty* NewProp_ActorTransform = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ActorTransform, FCGDActorRecord), 0x0010000001000005, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_ActorClass = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ActorClass, FCGDActorRecord), 0x0010000001000005, Z_Construct_UClass_UObject_NoRegister(), UClass::StaticClass());
			UProperty* NewProp_ActorName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ActorName, FCGDActorRecord), 0x0010000001000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("The structure where the actors data will be stored (each actor has an array of actor components records)"));
			MetaData->SetValue(NewProp_ActorsComponentRecordArray, TEXT("Category"), TEXT("ComponentData"));
			MetaData->SetValue(NewProp_ActorsComponentRecordArray, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_ActorData, TEXT("Category"), TEXT("ActorData"));
			MetaData->SetValue(NewProp_ActorData, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_bHasToLoadWithRandomName, TEXT("Category"), TEXT("Bool"));
			MetaData->SetValue(NewProp_bHasToLoadWithRandomName, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_ActorTransform, TEXT("Category"), TEXT("Transform"));
			MetaData->SetValue(NewProp_ActorTransform, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_ActorClass, TEXT("Category"), TEXT("Class"));
			MetaData->SetValue(NewProp_ActorClass, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_ActorName, TEXT("Category"), TEXT("Name"));
			MetaData->SetValue(NewProp_ActorName, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCGDActorRecord_CRC() { return 1571340457U; }
class UScriptStruct* FCGDActorComponentRecord::StaticStruct()
{
	extern CGDAUTOSAVEANDLOADSYSTEM_API class UPackage* Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CGDAUTOSAVEANDLOADSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FCGDActorComponentRecord();
		extern CGDAUTOSAVEANDLOADSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FCGDActorComponentRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCGDActorComponentRecord, Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem(), TEXT("CGDActorComponentRecord"), sizeof(FCGDActorComponentRecord), Get_Z_Construct_UScriptStruct_FCGDActorComponentRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCGDActorComponentRecord(FCGDActorComponentRecord::StaticStruct, TEXT("/Script/CGDAutoSaveAndLoadSystem"), TEXT("CGDActorComponentRecord"), false, nullptr, nullptr);
static struct FScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDActorComponentRecord
{
	FScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDActorComponentRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CGDActorComponentRecord")),new UScriptStruct::TCppStructOps<FCGDActorComponentRecord>);
	}
} ScriptStruct_CGDAutoSaveAndLoadSystem_StaticRegisterNativesFCGDActorComponentRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FCGDActorComponentRecord()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		extern uint32 Get_Z_Construct_UScriptStruct_FCGDActorComponentRecord_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CGDActorComponentRecord"), sizeof(FCGDActorComponentRecord), Get_Z_Construct_UScriptStruct_FCGDActorComponentRecord_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDActorComponentRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCGDActorComponentRecord>, EStructFlags(0x00000001));
			UProperty* NewProp_PrimitiveComponentAngularVelocity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PrimitiveComponentAngularVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PrimitiveComponentAngularVelocity, FCGDActorComponentRecord), 0x0010000001000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_PrimitiveComponentLinearVelocity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PrimitiveComponentLinearVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PrimitiveComponentLinearVelocity, FCGDActorComponentRecord), 0x0010000001000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SceneComponentScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SceneComponentScale"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SceneComponentScale, FCGDActorComponentRecord), 0x0010000001000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SceneComponentRotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SceneComponentRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SceneComponentRotation, FCGDActorComponentRecord), 0x0010000001000005, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_SceneComponentLocation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SceneComponentLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SceneComponentLocation, FCGDActorComponentRecord), 0x0010000001000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_ActorsComponentData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorsComponentData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActorsComponentData, FCGDActorComponentRecord), 0x0010000001000005);
			UProperty* NewProp_ActorsComponentData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActorsComponentData, TEXT("ActorsComponentData"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_ActorComponentName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorComponentName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ActorComponentName, FCGDActorComponentRecord), 0x0010000001000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("The structure where the actors components data will be stored"));
			MetaData->SetValue(NewProp_PrimitiveComponentAngularVelocity, TEXT("Category"), TEXT("Physics"));
			MetaData->SetValue(NewProp_PrimitiveComponentAngularVelocity, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_PrimitiveComponentLinearVelocity, TEXT("Category"), TEXT("Physics"));
			MetaData->SetValue(NewProp_PrimitiveComponentLinearVelocity, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_PrimitiveComponentLinearVelocity, TEXT("ToolTip"), TEXT("Physic simulation data in case it's a primitive component and the simulation state wants to be saved"));
			MetaData->SetValue(NewProp_SceneComponentScale, TEXT("Category"), TEXT("Transform"));
			MetaData->SetValue(NewProp_SceneComponentScale, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_SceneComponentRotation, TEXT("Category"), TEXT("Transform"));
			MetaData->SetValue(NewProp_SceneComponentRotation, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_SceneComponentLocation, TEXT("Category"), TEXT("Transform"));
			MetaData->SetValue(NewProp_SceneComponentLocation, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_SceneComponentLocation, TEXT("ToolTip"), TEXT("Transform if it's an actor component and the location wants to be saved"));
			MetaData->SetValue(NewProp_ActorsComponentData, TEXT("Category"), TEXT("ComponentData"));
			MetaData->SetValue(NewProp_ActorsComponentData, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
			MetaData->SetValue(NewProp_ActorComponentName, TEXT("Category"), TEXT("Name"));
			MetaData->SetValue(NewProp_ActorComponentName, TEXT("ModuleRelativePath"), TEXT("Public/Field/Struct/CGD_AutoSaveLoad_Struct.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCGDActorComponentRecord_CRC() { return 409095957U; }
	void UCGD_AutoSaveLoad_BPLibrary::StaticRegisterNativesUCGD_AutoSaveLoad_BPLibrary()
	{
		UClass* Class = UCGD_AutoSaveLoad_BPLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AutoFillSaveGameObject", (Native)&UCGD_AutoSaveLoad_BPLibrary::execAutoFillSaveGameObject },
			{ "AutoFillSaveGameObject_Async", (Native)&UCGD_AutoSaveLoad_BPLibrary::execAutoFillSaveGameObject_Async },
			{ "AutoFillSaveGameObject_Internal", (Native)&UCGD_AutoSaveLoad_BPLibrary::execAutoFillSaveGameObject_Internal },
			{ "AutoLoadActorsDataFromSave", (Native)&UCGD_AutoSaveLoad_BPLibrary::execAutoLoadActorsDataFromSave },
			{ "CGDBytesToString", (Native)&UCGD_AutoSaveLoad_BPLibrary::execCGDBytesToString },
			{ "CGDStringToBytes", (Native)&UCGD_AutoSaveLoad_BPLibrary::execCGDStringToBytes },
			{ "CGDTryDestroyActors", (Native)&UCGD_AutoSaveLoad_BPLibrary::execCGDTryDestroyActors },
			{ "CompressArrayOfBytes", (Native)&UCGD_AutoSaveLoad_BPLibrary::execCompressArrayOfBytes },
			{ "CompressArrayOfBytes_Internal", (Native)&UCGD_AutoSaveLoad_BPLibrary::execCompressArrayOfBytes_Internal },
			{ "DecompressArrayOfBytes", (Native)&UCGD_AutoSaveLoad_BPLibrary::execDecompressArrayOfBytes },
			{ "DecompressArrayOfBytes_Internal", (Native)&UCGD_AutoSaveLoad_BPLibrary::execDecompressArrayOfBytes_Internal },
			{ "DeleteGameInSlot_Auto", (Native)&UCGD_AutoSaveLoad_BPLibrary::execDeleteGameInSlot_Auto },
			{ "DoesSaveGameExist_Auto", (Native)&UCGD_AutoSaveLoad_BPLibrary::execDoesSaveGameExist_Auto },
			{ "FullLoadActor", (Native)&UCGD_AutoSaveLoad_BPLibrary::execFullLoadActor },
			{ "GetActorByIDNameAndClass", (Native)&UCGD_AutoSaveLoad_BPLibrary::execGetActorByIDNameAndClass },
			{ "GetActorByIDNameFromAnArrayOfActors", (Native)&UCGD_AutoSaveLoad_BPLibrary::execGetActorByIDNameFromAnArrayOfActors },
			{ "GetActorLevel", (Native)&UCGD_AutoSaveLoad_BPLibrary::execGetActorLevel },
			{ "GetAllActorsWithComponent", (Native)&UCGD_AutoSaveLoad_BPLibrary::execGetAllActorsWithComponent },
			{ "GetComponentSaveAndLoadConditions", (Native)&UCGD_AutoSaveLoad_BPLibrary::execGetComponentSaveAndLoadConditions },
			{ "GetLevelsNames", (Native)&UCGD_AutoSaveLoad_BPLibrary::execGetLevelsNames },
			{ "GetRelevantMapRecordArray", (Native)&UCGD_AutoSaveLoad_BPLibrary::execGetRelevantMapRecordArray },
			{ "GetUniqueActorOfClass", (Native)&UCGD_AutoSaveLoad_BPLibrary::execGetUniqueActorOfClass },
			{ "LoadActor", (Native)&UCGD_AutoSaveLoad_BPLibrary::execLoadActor },
			{ "LoadActorComponent", (Native)&UCGD_AutoSaveLoad_BPLibrary::execLoadActorComponent },
			{ "LoadActorComponents", (Native)&UCGD_AutoSaveLoad_BPLibrary::execLoadActorComponents },
			{ "LoadActorDataFromArrayOfMapRecords", (Native)&UCGD_AutoSaveLoad_BPLibrary::execLoadActorDataFromArrayOfMapRecords },
			{ "LoadGameFromSlot_Compressed", (Native)&UCGD_AutoSaveLoad_BPLibrary::execLoadGameFromSlot_Compressed },
			{ "SaveActor", (Native)&UCGD_AutoSaveLoad_BPLibrary::execSaveActor },
			{ "SaveActorComponents", (Native)&UCGD_AutoSaveLoad_BPLibrary::execSaveActorComponents },
			{ "SaveActorsToArrayOfMaps", (Native)&UCGD_AutoSaveLoad_BPLibrary::execSaveActorsToArrayOfMaps },
			{ "SaveGameToSlot_Async", (Native)&UCGD_AutoSaveLoad_BPLibrary::execSaveGameToSlot_Async },
			{ "SaveGameToSlot_Compressed", (Native)&UCGD_AutoSaveLoad_BPLibrary::execSaveGameToSlot_Compressed },
			{ "SaveGameToSlot_Compressed_Async", (Native)&UCGD_AutoSaveLoad_BPLibrary::execSaveGameToSlot_Compressed_Async },
			{ "SpawnActorWithIDNameFromClass", (Native)&UCGD_AutoSaveLoad_BPLibrary::execSpawnActorWithIDNameFromClass },
			{ "TryRemoveCurrentMapSavedData", (Native)&UCGD_AutoSaveLoad_BPLibrary::execTryRemoveCurrentMapSavedData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 35);
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Parms
		{
			const UObject* WorldContextObject;
			UCGD_AutoSaveLoad_Object* AutoSaveGameObject;
			UCGD_AutoSaveLoad_Object* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutoFillSaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Parms), 0x0010000000000580, Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister());
			UProperty* NewProp_AutoSaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Parms), 0x0010000000000080, Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Auto Fill Save Game Object"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Auto Fill the SaveGameObject, it needs an already Created \"CGDAutoSaveLoad_Object\". Use CreateSaveGame() Node to create one.\nAuto Fill means that the SaveGameObject will be populated with all the actors of all the maps that are currently loaded.\nUse SaveGameToSlot to actually save the SaveGameObject into a file.\n@param AutoSaveGameObject       The UCGD_AutoSaveLoad_Object reference, it can be created using the CreateSaveGameObject() node.\n@return                                         The UCGD_AutoSaveLoad_Object filled with all the actors data from all the maps loaded."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject_Async()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Async_Parms
		{
			const UObject* WorldContextObject;
			UCGD_AutoSaveLoad_Object* AutoSaveGameObject;
			FLatentActionInfo LatentInfo;
			UCGD_AutoSaveLoad_Object* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutoFillSaveGameObject_Async"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Async_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Async_Parms), 0x0010000000000580, Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister());
			UProperty* NewProp_LatentInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LatentInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LatentInfo, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Async_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FLatentActionInfo());
			UProperty* NewProp_AutoSaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Async_Parms), 0x0010000000000080, Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Async_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("BlueprintCallable, Category = \"CGD|AutoSaveAndLoadSystem::GameplayStatics\", meta = (Latent, LatentInfo = \"LatentInfo\", DisplayName = \"CGD::Auto Fill Save Game Object (Async)\", WorldContext = \"WorldContextObject\")"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject_Internal()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Internal_Parms
		{
			const UWorld* World;
			TArray<AActor*> ActorsToSaveArray;
			TArray<UActorComponent*> AutoSaveAndLoadComponentsArray;
			UCGD_AutoSaveLoad_Object* AutoSaveGameObject;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutoFillSaveGameObject_Internal"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Internal_Parms));
			UProperty* NewProp_AutoSaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Internal_Parms), 0x0010000000000180, Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister());
			UProperty* NewProp_AutoSaveAndLoadComponentsArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponentsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponentsArray, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Internal_Parms), 0x0010008008000182);
			UProperty* NewProp_AutoSaveAndLoadComponentsArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AutoSaveAndLoadComponentsArray, TEXT("AutoSaveAndLoadComponentsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080000, Z_Construct_UClass_UActorComponent_NoRegister());
			UProperty* NewProp_ActorsToSaveArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorsToSaveArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActorsToSaveArray, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Internal_Parms), 0x0010000008000182);
			UProperty* NewProp_ActorsToSaveArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActorsToSaveArray, TEXT("ActorsToSaveArray"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_World = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("World"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(World, CGD_AutoSaveLoad_BPLibrary_eventAutoFillSaveGameObject_Internal_Parms), 0x0010000000000082, Z_Construct_UClass_UWorld_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Only public in c++.\nWe use this private function to save the game async or sync.\nWe pass an array of ActorsToSaveArray and AutoSaveAndLoadComponentsArray because these arrays are obtained using GetAllActorsWithComponent() that can't be called in a async task because TActorIterator is unsupported."));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponentsArray, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponentsArray, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_ActorsToSaveArray, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_World, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoLoadActorsDataFromSave()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventAutoLoadActorsDataFromSave_Parms
		{
			const UObject* WorldContextObject;
			const UCGD_AutoSaveLoad_Object* AutoSaveGameObject;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutoLoadActorsDataFromSave"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventAutoLoadActorsDataFromSave_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventAutoLoadActorsDataFromSave_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventAutoLoadActorsDataFromSave_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventAutoLoadActorsDataFromSave_Parms), sizeof(bool), true);
			UProperty* NewProp_AutoSaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventAutoLoadActorsDataFromSave_Parms), 0x0010000000000082, Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventAutoLoadActorsDataFromSave_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Auto Load Actors Data From Save"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Auto Load the Game and updates the data from all the actors (and components) that we're saved.\nIf an actor was saved and don't exist in the world anymore, the actors will be recreated (if the option is enabled in the CGDAutoSaveAndLoadComponent).\nThis method loads the data for all the maps that are currently loaded (it supports level streaming).\n@param AutoSaveGameObject               The UCGD_AutoSaveLoad_Object reference, can already contain data.\n@return                                                 Whether if the Load was successful or Not."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_AutoSaveGameObject, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDBytesToString()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventCGDBytesToString_Parms
		{
			TArray<uint8> DataArray;
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDBytesToString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventCGDBytesToString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventCGDBytesToString_Parms), 0x0010000000000580);
			UProperty* NewProp_DataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DataArray, CGD_AutoSaveLoad_BPLibrary_eventCGDBytesToString_Parms), 0x0010000008000182);
			UProperty* NewProp_DataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DataArray, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Bytes To String"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Convert an Array of Bytes into String.\n@param DataArray      The Array of Bytes to be converted.\n@return                       A String based on the array of bytes."));
			MetaData->SetValue(NewProp_DataArray, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDStringToBytes()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventCGDStringToBytes_Parms
		{
			FString InString;
			bool bUseUtf8;
			TArray<uint8> ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDStringToBytes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventCGDStringToBytes_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventCGDStringToBytes_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseUtf8, CGD_AutoSaveLoad_BPLibrary_eventCGDStringToBytes_Parms, bool);
			UProperty* NewProp_bUseUtf8 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUseUtf8"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseUtf8, CGD_AutoSaveLoad_BPLibrary_eventCGDStringToBytes_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(bUseUtf8, CGD_AutoSaveLoad_BPLibrary_eventCGDStringToBytes_Parms), sizeof(bool), true);
			UProperty* NewProp_InString = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InString"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(InString, CGD_AutoSaveLoad_BPLibrary_eventCGDStringToBytes_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUseUtf8"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::String To Bytes"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Convert a String into an Array of Bytes. Useful for sending data through the network.\n@param InString       The String to be converted.\n@param bUseUtf8       Convert the text to Standard UTF-8 before compressing it. Useful for sending data through the network.\n@return                       An Array of Bytes representing the text."));
			MetaData->SetValue(NewProp_bUseUtf8, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_InString, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDTryDestroyActors()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventCGDTryDestroyActors_Parms
		{
			const UObject* WorldContextObject;
			TArray<AActor*> ActorsToSerialize;
			TArray<UActorComponent*> AutoSaveAndLoadComponentArray;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDTryDestroyActors"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventCGDTryDestroyActors_Parms));
			UProperty* NewProp_AutoSaveAndLoadComponentArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponentArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponentArray, CGD_AutoSaveLoad_BPLibrary_eventCGDTryDestroyActors_Parms), 0x0010008000000180);
			UProperty* NewProp_AutoSaveAndLoadComponentArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AutoSaveAndLoadComponentArray, TEXT("AutoSaveAndLoadComponentArray"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080000, Z_Construct_UClass_UActorComponent_NoRegister());
			UProperty* NewProp_ActorsToSerialize = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorsToSerialize"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActorsToSerialize, CGD_AutoSaveLoad_BPLibrary_eventCGDTryDestroyActors_Parms), 0x0010000000000180);
			UProperty* NewProp_ActorsToSerialize_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActorsToSerialize, TEXT("ActorsToSerialize"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventCGDTryDestroyActors_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Try to destroy an array of actors if their corresponding AutoSaveAndLoadComponents have the bDestroyActorOnLoadGameIfWasNotSaved set to true"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponentArray, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CompressArrayOfBytes()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Parms
		{
			TArray<uint8> DataArray;
			TArray<uint8> CompressedDataArray;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CompressArrayOfBytes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Parms), sizeof(bool), true);
			UProperty* NewProp_CompressedDataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CompressedDataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(CompressedDataArray, CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Parms), 0x0010000000000180);
			UProperty* NewProp_CompressedDataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_CompressedDataArray, TEXT("CompressedDataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_DataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DataArray, CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Parms), 0x0010000000000080);
			UProperty* NewProp_DataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DataArray, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Compress Array Of Bytes"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Compress an array of Bytes using ZLIB.\nUse Length() node to see the difference in size.\n@param DataArray                              Array of Bytes that will be compressed.\n@param CompressedDataArray    The Compressed version of the DataArray.\n@return                                               Is the CompressedDataArray result less in size than the DataArray?"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CompressArrayOfBytes_Internal()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Internal_Parms
		{
			TArray<uint8> DataArray;
			TArray<uint8> CompressedDataArray;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CompressArrayOfBytes_Internal"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Internal_Parms));
			UProperty* NewProp_CompressedDataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CompressedDataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(CompressedDataArray, CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Internal_Parms), 0x0010000000000180);
			UProperty* NewProp_CompressedDataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_CompressedDataArray, TEXT("CompressedDataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_DataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DataArray, CGD_AutoSaveLoad_BPLibrary_eventCompressArrayOfBytes_Internal_Parms), 0x0010000000000180);
			UProperty* NewProp_DataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DataArray, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Compress an array of Bytes using ZLIB\nUse Length() node to see the difference in size\n@param DataArray      Array of Bytes that will be compressed\n@return                       Compressed Array of Bytes"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DecompressArrayOfBytes()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventDecompressArrayOfBytes_Parms
		{
			TArray<uint8> DataArray;
			TArray<uint8> DecompressedDataArray;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DecompressArrayOfBytes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventDecompressArrayOfBytes_Parms));
			UProperty* NewProp_DecompressedDataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DecompressedDataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DecompressedDataArray, CGD_AutoSaveLoad_BPLibrary_eventDecompressArrayOfBytes_Parms), 0x0010000000000180);
			UProperty* NewProp_DecompressedDataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DecompressedDataArray, TEXT("DecompressedDataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_DataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DataArray, CGD_AutoSaveLoad_BPLibrary_eventDecompressArrayOfBytes_Parms), 0x0010000000000080);
			UProperty* NewProp_DataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DataArray, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Decompress Array Of Bytes"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Uncompress"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Decompress an array of Bytes using ZLIB.\nUse Length() node to see the difference in size.\n@param DataArray                                      Array of Bytes that will be compressed.\n@param DeCompressedDataArray          The Decompressed Version of the Array Of Bytes.\n@return                                                       Decompressed Array of Bytes."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DecompressArrayOfBytes_Internal()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventDecompressArrayOfBytes_Internal_Parms
		{
			TArray<uint8> DataArray;
			TArray<uint8> DeCompressedDataArray;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DecompressArrayOfBytes_Internal"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventDecompressArrayOfBytes_Internal_Parms));
			UProperty* NewProp_DeCompressedDataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeCompressedDataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DeCompressedDataArray, CGD_AutoSaveLoad_BPLibrary_eventDecompressArrayOfBytes_Internal_Parms), 0x0010000000000180);
			UProperty* NewProp_DeCompressedDataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DeCompressedDataArray, TEXT("DeCompressedDataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_DataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DataArray, CGD_AutoSaveLoad_BPLibrary_eventDecompressArrayOfBytes_Internal_Parms), 0x0010000000000180);
			UProperty* NewProp_DataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DataArray, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Decompress an array of Bytes using ZLIB\nUse Length() node to see the difference in size\n@param DataArray      Array of Bytes that will be compressed\n@return                       Decompressed Array of Bytes"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DeleteGameInSlot_Auto()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool bSaveIsCompressed;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DeleteGameInSlot_Auto"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveIsCompressed, CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms, bool);
			UProperty* NewProp_bSaveIsCompressed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSaveIsCompressed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveIsCompressed, CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(bSaveIsCompressed, CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms), sizeof(bool), true);
			UProperty* NewProp_UserIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UserIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(UserIndex, CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms), 0x0010000000000082);
			UProperty* NewProp_SlotName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SlotName, CGD_AutoSaveLoad_BPLibrary_eventDeleteGameInSlot_Auto_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bSaveIsCompressed"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Delete Game In Slot"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Delete the file for the corresponding slot.\n@param SlotName                              Name of save game slot.\n@param UserIndex                             For some platforms, master user index to identify the user doing the saving.\n@param bSaveIsCompressed             Was the Game saved using compression? Very important as compressed files have a suffix signature."));
			MetaData->SetValue(NewProp_bSaveIsCompressed, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_UserIndex, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SlotName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DoesSaveGameExist_Auto()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool bSaveIsCompressed;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DoesSaveGameExist_Auto"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveIsCompressed, CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms, bool);
			UProperty* NewProp_bSaveIsCompressed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSaveIsCompressed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveIsCompressed, CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(bSaveIsCompressed, CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms), sizeof(bool), true);
			UProperty* NewProp_UserIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UserIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(UserIndex, CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms), 0x0010000000000082);
			UProperty* NewProp_SlotName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SlotName, CGD_AutoSaveLoad_BPLibrary_eventDoesSaveGameExist_Auto_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bSaveIsCompressed"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Does Save Game Exist"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Check if there's a save game file with the specified name.\n@param SlotName                              Name of save game slot.\n@param UserIndex                             For some platforms, master user index to identify the user doing the saving.\n@param bSaveIsCompressed             Was the Game saved using compression? Very important as compressed files have a suffix signature."));
			MetaData->SetValue(NewProp_bSaveIsCompressed, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_UserIndex, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SlotName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_FullLoadActor()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventFullLoadActor_Parms
		{
			FCGDActorRecord ActorRecord;
			AActor* Actor;
			UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent;
			bool bLoadActorComponents;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FullLoadActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventFullLoadActor_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLoadActorComponents, CGD_AutoSaveLoad_BPLibrary_eventFullLoadActor_Parms, bool);
			UProperty* NewProp_bLoadActorComponents = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bLoadActorComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLoadActorComponents, CGD_AutoSaveLoad_BPLibrary_eventFullLoadActor_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(bLoadActorComponents, CGD_AutoSaveLoad_BPLibrary_eventFullLoadActor_Parms), sizeof(bool), true);
			UProperty* NewProp_AutoSaveAndLoadComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponent, CGD_AutoSaveLoad_BPLibrary_eventFullLoadActor_Parms), 0x0010000000080080, Z_Construct_UClass_UCGDAutoSaveAndLoadComponent_NoRegister());
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, CGD_AutoSaveLoad_BPLibrary_eventFullLoadActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_ActorRecord = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ActorRecord, CGD_AutoSaveLoad_BPLibrary_eventFullLoadActor_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FCGDActorRecord());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Load CGDActorRecordStruct data into the corresponding actor (the actor components too).\n@param ActorRecord                                      The Struct that contains all the actors data (and actor components).\n@param AutoSaveAndLoadComponent         The AutoSaveAndLoadComponent that belongs to the Actor, used for customizing the functionality.\n@param Actor                                            The actor to be stored in the struct.\n@param bLoadActorComponents                     Determines if the ActorComponents Will be Loaded or not."));
			MetaData->SetValue(NewProp_bLoadActorComponents, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_ActorRecord, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorByIDNameAndClass()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameAndClass_Parms
		{
			const UObject* WorldContextObject;
			FName IDName;
			const TSubclassOf<AActor>  ActorClass;
			AActor* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetActorByIDNameAndClass"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameAndClass_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameAndClass_Parms), 0x0010000000000580, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_ActorClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ActorClass, CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameAndClass_Parms), 0x0014000000000082, Z_Construct_UClass_AActor_NoRegister(), UClass::StaticClass());
			UProperty* NewProp_IDName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IDName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(IDName, CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameAndClass_Parms), 0x0010000000000082);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameAndClass_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DeterminesOutputType"), TEXT("ActorClass"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Get Actor By ID Name and Class"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get an actor by IDName and Class in the world (hover the mouse in the world out liner to see the actor ID Name).\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param  IDName                          ID Name to find. Must be specified or the result will be nullptr.\n@param  ActorClass                      Class Filter of the actor, determines the OutputType.\n@return                                         The Actor found."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_ActorClass, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_IDName, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorByIDNameFromAnArrayOfActors()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameFromAnArrayOfActors_Parms
		{
			FName IDName;
			TArray<AActor*> ArrayOfActors;
			AActor* Actor;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetActorByIDNameFromAnArrayOfActors"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameFromAnArrayOfActors_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameFromAnArrayOfActors_Parms), 0x0010000000000580);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameFromAnArrayOfActors_Parms), 0x0010000000000180, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_ArrayOfActors = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ArrayOfActors"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ArrayOfActors, CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameFromAnArrayOfActors_Parms), 0x0010000008000182);
			UProperty* NewProp_ArrayOfActors_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ArrayOfActors, TEXT("ArrayOfActors"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_IDName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IDName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(IDName, CGD_AutoSaveLoad_BPLibrary_eventGetActorByIDNameFromAnArrayOfActors_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Get Actor By ID Name From Array Of Actors"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get an actor by IDName from a given Array of Actors.\n@param  IDName                          ID Name to find. Must be specified or the result will be nullptr.\n@param  ArrayOfActors           The Array of Actors in which the search will be performed.\n@param  Actor                           The Actor found.\n@return                                         The Index of the array where the Actor was found (it's -1 if no actor was found)."));
			MetaData->SetValue(NewProp_ArrayOfActors, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_IDName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorLevel()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventGetActorLevel_Parms
		{
			AActor* Actor;
			ULevel* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetActorLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventGetActorLevel_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventGetActorLevel_Parms), 0x0010000000000580, Z_Construct_UClass_ULevel_NoRegister());
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, CGD_AutoSaveLoad_BPLibrary_eventGetActorLevel_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Get Level Owner From Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the Level reference where the actor is loaded (supports level streaming).\n@param Actor    The actor reference.\n@return                 The Level reference where the actor belongs (supports level streaming)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetAllActorsWithComponent()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventGetAllActorsWithComponent_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<UActorComponent>  Component;
			TArray<AActor*> OutActors;
			TArray<UActorComponent*> OutActorComponents;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAllActorsWithComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventGetAllActorsWithComponent_Parms));
			UProperty* NewProp_OutActorComponents = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutActorComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(OutActorComponents, CGD_AutoSaveLoad_BPLibrary_eventGetAllActorsWithComponent_Parms), 0x0010008000000180);
			UProperty* NewProp_OutActorComponents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_OutActorComponents, TEXT("OutActorComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080000, Z_Construct_UClass_UActorComponent_NoRegister());
			UProperty* NewProp_OutActors = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutActors"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(OutActors, CGD_AutoSaveLoad_BPLibrary_eventGetAllActorsWithComponent_Parms), 0x0010000000000180);
			UProperty* NewProp_OutActors_Inner = new(EC_InternalUseOnlyConstructor, NewProp_OutActors, TEXT("OutActors"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_Component = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Component"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Component, CGD_AutoSaveLoad_BPLibrary_eventGetAllActorsWithComponent_Parms), 0x0014000000000082, Z_Construct_UClass_UActorComponent_NoRegister(), UClass::StaticClass());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventGetAllActorsWithComponent_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DeterminesOutputType"), TEXT("Component"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Get All Actors With Component"));
			MetaData->SetValue(ReturnFunction, TEXT("DynamicOutputParam"), TEXT("OutActorComponents"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Find all Actors in the world with the specified component.\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param  Component                       Component to find. Must be specified or result array will be empty.\n@param  OutActors                       Output array of Actors that have specified component.\n@param  OutActorComponents      Output array of Actor Components that belongs to the array of actors."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_OutActorComponents, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Component, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetComponentSaveAndLoadConditions()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventGetComponentSaveAndLoadConditions_Parms
		{
			const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent;
			const UActorComponent* actorcomponent;
			FCGDAutoSaveAndLoadComponentOption componentOptions;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetComponentSaveAndLoadConditions"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventGetComponentSaveAndLoadConditions_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventGetComponentSaveAndLoadConditions_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventGetComponentSaveAndLoadConditions_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventGetComponentSaveAndLoadConditions_Parms), sizeof(bool), true);
			UProperty* NewProp_componentOptions = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("componentOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(componentOptions, CGD_AutoSaveLoad_BPLibrary_eventGetComponentSaveAndLoadConditions_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption());
			UProperty* NewProp_actorcomponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("actorcomponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(actorcomponent, CGD_AutoSaveLoad_BPLibrary_eventGetComponentSaveAndLoadConditions_Parms), 0x0010000000080082, Z_Construct_UClass_UActorComponent_NoRegister());
			UProperty* NewProp_AutoSaveAndLoadComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponent, CGD_AutoSaveLoad_BPLibrary_eventGetComponentSaveAndLoadConditions_Parms), 0x0010000000080082, Z_Construct_UClass_UCGDAutoSaveAndLoadComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Check if the component can be saved or not. If it can be saved, returns the componentOptions that can be used to customize the functionality"));
			MetaData->SetValue(NewProp_actorcomponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_actorcomponent, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetLevelsNames()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventGetLevelsNames_Parms
		{
			const UObject* WorldContextObject;
			TArray<FName> CurrentMapNameArray;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLevelsNames"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventGetLevelsNames_Parms));
			UProperty* NewProp_CurrentMapNameArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CurrentMapNameArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(CurrentMapNameArray, CGD_AutoSaveLoad_BPLibrary_eventGetLevelsNames_Parms), 0x0010000000000180);
			UProperty* NewProp_CurrentMapNameArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_CurrentMapNameArray, TEXT("CurrentMapNameArray"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventGetLevelsNames_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Get Levels Names (Including Sublevels)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get an array of FNames bases on the levels currently loaded (including level streaming).\nCaution: The names also contains the path of the level (Path/LevelName.UMAP...) .\nSo, if a Level is moved to another location, the name will be changed.\n@param CurrentMapNameArray - Array of Level Names."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetRelevantMapRecordArray()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventGetRelevantMapRecordArray_Parms
		{
			const UCGD_AutoSaveLoad_Object* AutoSaveGameObject;
			TArray<FName> CurrentMapNameArray;
			TArray<FCGDMapRecord> RelevantMapRecordArray;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRelevantMapRecordArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventGetRelevantMapRecordArray_Parms));
			UProperty* NewProp_RelevantMapRecordArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RelevantMapRecordArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RelevantMapRecordArray, CGD_AutoSaveLoad_BPLibrary_eventGetRelevantMapRecordArray_Parms), 0x0010000000000180);
			UProperty* NewProp_RelevantMapRecordArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RelevantMapRecordArray, TEXT("RelevantMapRecordArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCGDMapRecord());
			UProperty* NewProp_CurrentMapNameArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CurrentMapNameArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(CurrentMapNameArray, CGD_AutoSaveLoad_BPLibrary_eventGetRelevantMapRecordArray_Parms), 0x0010000008000182);
			UProperty* NewProp_CurrentMapNameArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_CurrentMapNameArray, TEXT("CurrentMapNameArray"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_AutoSaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventGetRelevantMapRecordArray_Parms), 0x0010000000000082, Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Get Relevant Map Record Array"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Obtains the MapRecordArray data that is in the UCGD_AutoSaveLoad_Object, filtered by an array of Map Names.\n@param AutoSaveGameObject                     The UCGD_AutoSaveLoad_Object reference that already contains data.\n@param CurrentMapNameArray            Map Names Array to use it as a filter for obtaining data from the UCGD_AutoSaveLoad_Object, use GetLevelsNames() or GetActorLevel().\n@param RelevantMapRecordArray         MapRecordArray that also contains ActorsArray data"));
			MetaData->SetValue(NewProp_CurrentMapNameArray, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AutoSaveGameObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetUniqueActorOfClass()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventGetUniqueActorOfClass_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<AActor>  ActorClass;
			AActor* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetUniqueActorOfClass"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventGetUniqueActorOfClass_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventGetUniqueActorOfClass_Parms), 0x0010000000000580, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_ActorClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ActorClass, CGD_AutoSaveLoad_BPLibrary_eventGetUniqueActorOfClass_Parms), 0x0014000000000082, Z_Construct_UClass_AActor_NoRegister(), UClass::StaticClass());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventGetUniqueActorOfClass_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DeterminesOutputType"), TEXT("ActorClass"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Get Unique Actor Of Class"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get an actor of this class, only if there's only one actor of this class in the world.\n@param ActorClass             Class of the actor to return\n@return                               The reference of the actor, can be nullptr if there are none or two+ actors in the world."));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_ActorClass, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActor()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventLoadActor_Parms
		{
			FCGDActorRecord ActorRecord;
			AActor* DynamicActor;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventLoadActor_Parms));
			UProperty* NewProp_DynamicActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DynamicActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DynamicActor, CGD_AutoSaveLoad_BPLibrary_eventLoadActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_ActorRecord = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ActorRecord, CGD_AutoSaveLoad_BPLibrary_eventLoadActor_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FCGDActorRecord());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Load an Actor from a CGDActorStruct"));
			MetaData->SetValue(NewProp_ActorRecord, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorComponent()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponent_Parms
		{
			FCGDActorComponentRecord actorComponentRecord;
			UActorComponent* actorcomponent;
			FCGDAutoSaveAndLoadComponentOption componentOptions;
			const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadActorComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponent_Parms));
			UProperty* NewProp_AutoSaveAndLoadComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponent, CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponent_Parms), 0x0010000000080082, Z_Construct_UClass_UCGDAutoSaveAndLoadComponent_NoRegister());
			UProperty* NewProp_componentOptions = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("componentOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(componentOptions, CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponent_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption());
			UProperty* NewProp_actorcomponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("actorcomponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(actorcomponent, CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponent_Parms), 0x0010000000080080, Z_Construct_UClass_UActorComponent_NoRegister());
			UProperty* NewProp_actorComponentRecord = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("actorComponentRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(actorComponentRecord, CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponent_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FCGDActorComponentRecord());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Load a component of an actor from a CGDActorComponentRecord"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_componentOptions, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_actorcomponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_actorComponentRecord, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorComponents()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponents_Parms
		{
			FCGDActorRecord ActorRecord;
			AActor* DynamicActor;
			const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadActorComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponents_Parms));
			UProperty* NewProp_AutoSaveAndLoadComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponent, CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponents_Parms), 0x0010000000080082, Z_Construct_UClass_UCGDAutoSaveAndLoadComponent_NoRegister());
			UProperty* NewProp_DynamicActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DynamicActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DynamicActor, CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponents_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_ActorRecord = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ActorRecord, CGD_AutoSaveLoad_BPLibrary_eventLoadActorComponents_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FCGDActorRecord());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Load the components of an Actor from an array of CGDActorComponentArrayRecords"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_ActorRecord, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorDataFromArrayOfMapRecords()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventLoadActorDataFromArrayOfMapRecords_Parms
		{
			const UObject* WorldContextObject;
			TArray<FCGDMapRecord> RelevantMapRecordArray;
			TArray<AActor*> ActorsArray;
			TArray<UActorComponent*> AutoSaveAndLoadComponentArray;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadActorDataFromArrayOfMapRecords"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventLoadActorDataFromArrayOfMapRecords_Parms));
			UProperty* NewProp_AutoSaveAndLoadComponentArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponentArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponentArray, CGD_AutoSaveLoad_BPLibrary_eventLoadActorDataFromArrayOfMapRecords_Parms), 0x0010008008000180);
			UProperty* NewProp_AutoSaveAndLoadComponentArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AutoSaveAndLoadComponentArray, TEXT("AutoSaveAndLoadComponentArray"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080000, Z_Construct_UClass_UActorComponent_NoRegister());
			UProperty* NewProp_ActorsArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActorsArray, CGD_AutoSaveLoad_BPLibrary_eventLoadActorDataFromArrayOfMapRecords_Parms), 0x0010000008000180);
			UProperty* NewProp_ActorsArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActorsArray, TEXT("ActorsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_RelevantMapRecordArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RelevantMapRecordArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RelevantMapRecordArray, CGD_AutoSaveLoad_BPLibrary_eventLoadActorDataFromArrayOfMapRecords_Parms), 0x0010000008000182);
			UProperty* NewProp_RelevantMapRecordArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RelevantMapRecordArray, TEXT("RelevantMapRecordArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCGDMapRecord());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventLoadActorDataFromArrayOfMapRecords_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Load Actors Data From Array of MapRecords"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Only Supposed to be used in Blueprints.\nLoad the Actors Data from an Array of MapRecords that can be obtained from the SaveGameObject.\n@param RelevantMapRecordArray                                   The array of MapRecords, can be obtained from a CGD Save Game Object.\n@param ActorsArray                                                              The array of the actors in the world that can be updated on Load.\n@param AutoSaveAndLoadComponentArray                        The array of AutoSaveAndLoadComponent that belongs to the actors."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponentArray, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_RelevantMapRecordArray, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadGameFromSlot_Compressed()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventLoadGameFromSlot_Compressed_Parms
		{
			USaveGame* SaveGameObject;
			FString SlotName;
			int32 UserIndex;
			USaveGame* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadGameFromSlot_Compressed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventLoadGameFromSlot_Compressed_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventLoadGameFromSlot_Compressed_Parms), 0x0010000000000580, Z_Construct_UClass_USaveGame_NoRegister());
			UProperty* NewProp_UserIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UserIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(UserIndex, CGD_AutoSaveLoad_BPLibrary_eventLoadGameFromSlot_Compressed_Parms), 0x0010000000000082);
			UProperty* NewProp_SlotName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SlotName, CGD_AutoSaveLoad_BPLibrary_eventLoadGameFromSlot_Compressed_Parms), 0x0010000000000080);
			UProperty* NewProp_SaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventLoadGameFromSlot_Compressed_Parms), 0x0010000000000080, Z_Construct_UClass_USaveGame_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DeterminesOutputType"), TEXT("SaveGameObject"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Load Game From Slot (Compressed)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Load a game from a compressed saveFile. It doesn't work if you try to load a game from an uncompressed file.\n@param SaveGameObject   SaveGameObject of the same type of the one that was saved (Caution: the game will crash if it's not of the same type).\n@param SlotName                 Name of the save game slot to load from.\n@param UserIndex            For some platforms, master user index to identify the user doing the loading.\n@return                                     A Save Game Object reference with the loaded data."));
			MetaData->SetValue(NewProp_UserIndex, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SlotName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActor()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventSaveActor_Parms
		{
			FCGDActorRecord ActorRecord;
			AActor* Actor;
			const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventSaveActor_Parms));
			UProperty* NewProp_AutoSaveAndLoadComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponent, CGD_AutoSaveLoad_BPLibrary_eventSaveActor_Parms), 0x0010000000080082, Z_Construct_UClass_UCGDAutoSaveAndLoadComponent_NoRegister());
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, CGD_AutoSaveLoad_BPLibrary_eventSaveActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_ActorRecord = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ActorRecord, CGD_AutoSaveLoad_BPLibrary_eventSaveActor_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FCGDActorRecord());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Save an Actor Data into a CGDActorStruct"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActorComponents()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventSaveActorComponents_Parms
		{
			FCGDActorRecord ActorRecord;
			AActor* Actor;
			const UCGDAutoSaveAndLoadComponent* AutoSaveAndLoadComponent;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveActorComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00442401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventSaveActorComponents_Parms));
			UProperty* NewProp_AutoSaveAndLoadComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponent, CGD_AutoSaveLoad_BPLibrary_eventSaveActorComponents_Parms), 0x0010000000080082, Z_Construct_UClass_UCGDAutoSaveAndLoadComponent_NoRegister());
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, CGD_AutoSaveLoad_BPLibrary_eventSaveActorComponents_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_ActorRecord = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ActorRecord, CGD_AutoSaveLoad_BPLibrary_eventSaveActorComponents_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FCGDActorRecord());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Save the components of an Actor into an Array of CGDActorComponentArrayRecords"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponent, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActorsToArrayOfMaps()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventSaveActorsToArrayOfMaps_Parms
		{
			TArray<AActor*> ActorsArray;
			TArray<UActorComponent*> AutoSaveAndLoadComponentArray;
			TArray<FName> MapNameArray;
			TArray<FCGDMapRecord> MapRecordArray;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveActorsToArrayOfMaps"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventSaveActorsToArrayOfMaps_Parms));
			UProperty* NewProp_MapRecordArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MapRecordArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(MapRecordArray, CGD_AutoSaveLoad_BPLibrary_eventSaveActorsToArrayOfMaps_Parms), 0x0010000000000180);
			UProperty* NewProp_MapRecordArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_MapRecordArray, TEXT("MapRecordArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCGDMapRecord());
			UProperty* NewProp_MapNameArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MapNameArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(MapNameArray, CGD_AutoSaveLoad_BPLibrary_eventSaveActorsToArrayOfMaps_Parms), 0x0010000008000182);
			UProperty* NewProp_MapNameArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_MapNameArray, TEXT("MapNameArray"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_AutoSaveAndLoadComponentArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveAndLoadComponentArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AutoSaveAndLoadComponentArray, CGD_AutoSaveLoad_BPLibrary_eventSaveActorsToArrayOfMaps_Parms), 0x0010008008000182);
			UProperty* NewProp_AutoSaveAndLoadComponentArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AutoSaveAndLoadComponentArray, TEXT("AutoSaveAndLoadComponentArray"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080000, Z_Construct_UClass_UActorComponent_NoRegister());
			UProperty* NewProp_ActorsArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActorsArray, CGD_AutoSaveLoad_BPLibrary_eventSaveActorsToArrayOfMaps_Parms), 0x0010000008000182);
			UProperty* NewProp_ActorsArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActorsArray, TEXT("ActorsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Save Actors into an Array of MapRecords"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Only Supposed to be used in Blueprints.\nSave an array of actors into an array of FCGDMapRecords.\n@param ActorsArray                                                              The array of actors that will be serialized.\n@param AutoSaveAndLoadComponentArray                    The array of components that belongs to the actors.\n@param MapNameArray                                                             The array of Map Names in order to filter which maps have to be saved.\n@param MapRecordArray                                                       Result a MapRecordArray with all the actors data sorted by maps."));
			MetaData->SetValue(NewProp_MapNameArray, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponentArray, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AutoSaveAndLoadComponentArray, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_ActorsArray, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Async()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Async_Parms
		{
			USaveGame* SaveGameObject;
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveGameToSlot_Async"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00042401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Async_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Async_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Async_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Async_Parms), sizeof(bool), true);
			UProperty* NewProp_UserIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UserIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(UserIndex, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Async_Parms), 0x0010000000000082);
			UProperty* NewProp_SlotName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SlotName, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Async_Parms), 0x0010000000000080);
			UProperty* NewProp_SaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Async_Parms), 0x0010000000000080, Z_Construct_UClass_USaveGame_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("BlueprintCallable, Category = \"CGD|AutoSaveAndLoadSystem::GameplayStatics\", meta = (Latent, DisplayName = \"CGD::Save Game To Slot (Async)\")"));
			MetaData->SetValue(NewProp_UserIndex, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SlotName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Compressed()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Parms
		{
			USaveGame* SaveGameObject;
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveGameToSlot_Compressed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Parms), sizeof(bool), true);
			UProperty* NewProp_UserIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UserIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(UserIndex, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Parms), 0x0010000000000082);
			UProperty* NewProp_SlotName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SlotName, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Parms), 0x0010000000000080);
			UProperty* NewProp_SaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Parms), 0x0010000000000080, Z_Construct_UClass_USaveGame_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Save Game To Slot (Compressed)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Save a SaveGameObject into a compressed file. Location of the save file: Project/Saved/SaveGames.\n@param SaveGameObject   The SaveGameObject, it can be created using the CreateSaveGameObject() node.\n@param SlotName                 Name of the save game slot to load from.\n@param UserIndex            For some platforms, master user index to identify the user doing the loading.\n@return                                 The boolean result so we know if the Save was successful or not. It usually fails when the SlotName is empty."));
			MetaData->SetValue(NewProp_UserIndex, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SlotName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Compressed_Async()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Async_Parms
		{
			USaveGame* SaveGameObject;
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveGameToSlot_Compressed_Async"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00042401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Async_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Async_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Async_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Async_Parms), sizeof(bool), true);
			UProperty* NewProp_UserIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UserIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(UserIndex, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Async_Parms), 0x0010000000000082);
			UProperty* NewProp_SlotName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SlotName, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Async_Parms), 0x0010000000000080);
			UProperty* NewProp_SaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventSaveGameToSlot_Compressed_Async_Parms), 0x0010000000000080, Z_Construct_UClass_USaveGame_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("BlueprintCallable, Category = \"CGD|AutoSaveAndLoadSystem::GameplayStatics\", meta = (DisplayName = \"CGD::Save Game To Slot (Compressed) (Async)\")"));
			MetaData->SetValue(NewProp_UserIndex, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SlotName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SpawnActorWithIDNameFromClass()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventSpawnActorWithIDNameFromClass_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<AActor>  Class;
			FTransform SpawnTransformm;
			FName NameID;
			AActor* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpawnActorWithIDNameFromClass"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04822401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventSpawnActorWithIDNameFromClass_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventSpawnActorWithIDNameFromClass_Parms), 0x0010000000000580, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_NameID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NameID"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(NameID, CGD_AutoSaveLoad_BPLibrary_eventSpawnActorWithIDNameFromClass_Parms), 0x0010000000000080);
			UProperty* NewProp_SpawnTransformm = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SpawnTransformm"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SpawnTransformm, CGD_AutoSaveLoad_BPLibrary_eventSpawnActorWithIDNameFromClass_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Class = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Class"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Class, CGD_AutoSaveLoad_BPLibrary_eventSpawnActorWithIDNameFromClass_Parms), 0x0014000000000082, Z_Construct_UClass_AActor_NoRegister(), UClass::StaticClass());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, CGD_AutoSaveLoad_BPLibrary_eventSpawnActorWithIDNameFromClass_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DeterminesOutputType"), TEXT("Class"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Spawn Actor With a Name ID From Class"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Spawn an Actor in the world with a given Name and Class.\nCAUTION: Use it wisely, don't give an ID Name that already exists in the world or the previous Actor will be deleted.\n@param Class                            The class of the actor that will be spawned.\n@param SpawnTransformm          The transform data.\n@param NameID                           The Given Name.\n@return                                         The Spawned Actor Reference."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_SpawnTransformm, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Class, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_TryRemoveCurrentMapSavedData()
	{
		struct CGD_AutoSaveLoad_BPLibrary_eventTryRemoveCurrentMapSavedData_Parms
		{
			UCGD_AutoSaveLoad_Object* AutoSaveGameObject;
			TArray<FName> LevelsNameArray;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TryRemoveCurrentMapSavedData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(CGD_AutoSaveLoad_BPLibrary_eventTryRemoveCurrentMapSavedData_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventTryRemoveCurrentMapSavedData_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventTryRemoveCurrentMapSavedData_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGD_AutoSaveLoad_BPLibrary_eventTryRemoveCurrentMapSavedData_Parms), sizeof(bool), true);
			UProperty* NewProp_LevelsNameArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LevelsNameArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LevelsNameArray, CGD_AutoSaveLoad_BPLibrary_eventTryRemoveCurrentMapSavedData_Parms), 0x0010000008000182);
			UProperty* NewProp_LevelsNameArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LevelsNameArray, TEXT("LevelsNameArray"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_AutoSaveGameObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoSaveGameObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSaveGameObject, CGD_AutoSaveLoad_BPLibrary_eventTryRemoveCurrentMapSavedData_Parms), 0x0010000000000080, Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::GameplayStatics"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Remove Save Game Data From Levels"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Remove the MapRecords from a UCGD_AutoSaveLoad_Object based in the filter input: LevelsNameArray.\nUse CDG::GetLevelsNames() node to obtain the array of maps currently loaded..\n@param  AutoSaveGameObject      The CGD AutoSaveLoadObject that needs to be created and not be nullptr.\n@param  LevelsNameArray         Array of levels names >> Use CDG::GetLevelsNames() node to obtain the array of maps currently loaded (it supports level streaming).\n@return                                         True if at least one map saved data was removed."));
			MetaData->SetValue(NewProp_LevelsNameArray, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary_NoRegister()
	{
		return UCGD_AutoSaveLoad_BPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGameplayStatics();
			Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
			OuterClass = UCGD_AutoSaveLoad_BPLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject_Async());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject_Internal());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoLoadActorsDataFromSave());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDBytesToString());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDStringToBytes());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDTryDestroyActors());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CompressArrayOfBytes());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CompressArrayOfBytes_Internal());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DecompressArrayOfBytes());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DecompressArrayOfBytes_Internal());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DeleteGameInSlot_Auto());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DoesSaveGameExist_Auto());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_FullLoadActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorByIDNameAndClass());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorByIDNameFromAnArrayOfActors());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorLevel());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetAllActorsWithComponent());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetComponentSaveAndLoadConditions());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetLevelsNames());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetRelevantMapRecordArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetUniqueActorOfClass());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorComponent());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorComponents());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorDataFromArrayOfMapRecords());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadGameFromSlot_Compressed());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActorComponents());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActorsToArrayOfMaps());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Async());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Compressed());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Compressed_Async());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SpawnActorWithIDNameFromClass());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_TryRemoveCurrentMapSavedData());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject(), "AutoFillSaveGameObject"); // 971472634
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject_Async(), "AutoFillSaveGameObject_Async"); // 513056897
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoFillSaveGameObject_Internal(), "AutoFillSaveGameObject_Internal"); // 713732167
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_AutoLoadActorsDataFromSave(), "AutoLoadActorsDataFromSave"); // 3428672799
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDBytesToString(), "CGDBytesToString"); // 3122870814
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDStringToBytes(), "CGDStringToBytes"); // 2084903663
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CGDTryDestroyActors(), "CGDTryDestroyActors"); // 2519450189
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CompressArrayOfBytes(), "CompressArrayOfBytes"); // 1041369573
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_CompressArrayOfBytes_Internal(), "CompressArrayOfBytes_Internal"); // 2692966813
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DecompressArrayOfBytes(), "DecompressArrayOfBytes"); // 3830522436
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DecompressArrayOfBytes_Internal(), "DecompressArrayOfBytes_Internal"); // 3936665909
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DeleteGameInSlot_Auto(), "DeleteGameInSlot_Auto"); // 3328253839
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_DoesSaveGameExist_Auto(), "DoesSaveGameExist_Auto"); // 1562572639
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_FullLoadActor(), "FullLoadActor"); // 1906968482
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorByIDNameAndClass(), "GetActorByIDNameAndClass"); // 71623693
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorByIDNameFromAnArrayOfActors(), "GetActorByIDNameFromAnArrayOfActors"); // 2675718911
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetActorLevel(), "GetActorLevel"); // 4210333595
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetAllActorsWithComponent(), "GetAllActorsWithComponent"); // 3648593606
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetComponentSaveAndLoadConditions(), "GetComponentSaveAndLoadConditions"); // 3497095696
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetLevelsNames(), "GetLevelsNames"); // 1381801388
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetRelevantMapRecordArray(), "GetRelevantMapRecordArray"); // 1906953488
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_GetUniqueActorOfClass(), "GetUniqueActorOfClass"); // 3810485794
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActor(), "LoadActor"); // 3801454932
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorComponent(), "LoadActorComponent"); // 3534050898
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorComponents(), "LoadActorComponents"); // 4286639684
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadActorDataFromArrayOfMapRecords(), "LoadActorDataFromArrayOfMapRecords"); // 3306528015
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_LoadGameFromSlot_Compressed(), "LoadGameFromSlot_Compressed"); // 927194643
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActor(), "SaveActor"); // 131829187
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActorComponents(), "SaveActorComponents"); // 1969798821
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveActorsToArrayOfMaps(), "SaveActorsToArrayOfMaps"); // 1100799562
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Async(), "SaveGameToSlot_Async"); // 1915065029
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Compressed(), "SaveGameToSlot_Compressed"); // 1367738493
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SaveGameToSlot_Compressed_Async(), "SaveGameToSlot_Compressed_Async"); // 3713064336
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_SpawnActorWithIDNameFromClass(), "SpawnActorWithIDNameFromClass"); // 2871209830
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGD_AutoSaveLoad_BPLibrary_TryRemoveCurrentMapSavedData(), "TryRemoveCurrentMapSavedData"); // 300923451
				static TCppClassTypeInfo<TCppClassTypeTraits<UCGD_AutoSaveLoad_BPLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintFunctionLibrary/GameplayStatics/CGD_AutoSaveLoad_BPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("GameplayStatics Blueprint Function Library that contains all the statics functions related to AutoSave and AutoLoad"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCGD_AutoSaveLoad_BPLibrary, 3874458710);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCGD_AutoSaveLoad_BPLibrary(Z_Construct_UClass_UCGD_AutoSaveLoad_BPLibrary, &UCGD_AutoSaveLoad_BPLibrary::StaticClass, TEXT("/Script/CGDAutoSaveAndLoadSystem"), TEXT("UCGD_AutoSaveLoad_BPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCGD_AutoSaveLoad_BPLibrary);
	void UCGD_AutoSaveLoad_Object::StaticRegisterNativesUCGD_AutoSaveLoad_Object()
	{
	}
	UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_Object_NoRegister()
	{
		return UCGD_AutoSaveLoad_Object::StaticClass();
	}
	UClass* Z_Construct_UClass_UCGD_AutoSaveLoad_Object()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USaveGame();
			Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
			OuterClass = UCGD_AutoSaveLoad_Object::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MapRecordsArray = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MapRecordsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(MapRecordsArray, UCGD_AutoSaveLoad_Object), 0x0010000001000005);
				UProperty* NewProp_MapRecordsArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_MapRecordsArray, TEXT("MapRecordsArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCGDMapRecord());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UCGD_AutoSaveLoad_Object> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SaveGame/CGD_AutoSaveLoad_Object.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SaveGame/CGD_AutoSaveLoad_Object.h"));
				MetaData->SetValue(NewProp_MapRecordsArray, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem"));
				MetaData->SetValue(NewProp_MapRecordsArray, TEXT("ModuleRelativePath"), TEXT("Public/SaveGame/CGD_AutoSaveLoad_Object.h"));
				MetaData->SetValue(NewProp_MapRecordsArray, TEXT("ToolTip"), TEXT("Array of Map records that contain each Map actor records (Each map contains an array of actor records)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCGD_AutoSaveLoad_Object, 1194436121);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCGD_AutoSaveLoad_Object(Z_Construct_UClass_UCGD_AutoSaveLoad_Object, &UCGD_AutoSaveLoad_Object::StaticClass, TEXT("/Script/CGDAutoSaveAndLoadSystem"), TEXT("UCGD_AutoSaveLoad_Object"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCGD_AutoSaveLoad_Object);
	UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadUnchanged__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDOnLoadUnchanged__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadBeginDestroy__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDOnLoadBeginDestroy__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadEnd__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDOnLoadEnd__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadStart__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDOnLoadStart__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnSaveEnd__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDOnSaveEnd__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnSaveStart__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CGDOnSaveStart__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	void UCGDAutoSaveAndLoadComponent::StaticRegisterNativesUCGDAutoSaveAndLoadComponent()
	{
		UClass* Class = UCGDAutoSaveAndLoadComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetComponentOptions", (Native)&UCGDAutoSaveAndLoadComponent::execGetComponentOptions },
			{ "GetDestroyActorOnLoadGameIfWasNotSaved", (Native)&UCGDAutoSaveAndLoadComponent::execGetDestroyActorOnLoadGameIfWasNotSaved },
			{ "GetEnablePlugin", (Native)&UCGDAutoSaveAndLoadComponent::execGetEnablePlugin },
			{ "GetLoadActorWithRandomIDName", (Native)&UCGDAutoSaveAndLoadComponent::execGetLoadActorWithRandomIDName },
			{ "GetSaveComponents", (Native)&UCGDAutoSaveAndLoadComponent::execGetSaveComponents },
			{ "GetSaveComponentsAngularVelocity", (Native)&UCGDAutoSaveAndLoadComponent::execGetSaveComponentsAngularVelocity },
			{ "GetSaveComponentsLinearVelocity", (Native)&UCGDAutoSaveAndLoadComponent::execGetSaveComponentsLinearVelocity },
			{ "GetSaveComponentsLocation", (Native)&UCGDAutoSaveAndLoadComponent::execGetSaveComponentsLocation },
			{ "GetSaveComponentsRotation", (Native)&UCGDAutoSaveAndLoadComponent::execGetSaveComponentsRotation },
			{ "GetSaveComponentsScale", (Native)&UCGDAutoSaveAndLoadComponent::execGetSaveComponentsScale },
			{ "GetSavedBooleans", (Native)&UCGDAutoSaveAndLoadComponent::execGetSavedBooleans },
			{ "GetSavedFloats", (Native)&UCGDAutoSaveAndLoadComponent::execGetSavedFloats },
			{ "GetSavedNames", (Native)&UCGDAutoSaveAndLoadComponent::execGetSavedNames },
			{ "GetSavedNumbers", (Native)&UCGDAutoSaveAndLoadComponent::execGetSavedNumbers },
			{ "GetSavedRotators", (Native)&UCGDAutoSaveAndLoadComponent::execGetSavedRotators },
			{ "GetSavedStrings", (Native)&UCGDAutoSaveAndLoadComponent::execGetSavedStrings },
			{ "GetSavedVectors", (Native)&UCGDAutoSaveAndLoadComponent::execGetSavedVectors },
			{ "GetWasSaved", (Native)&UCGDAutoSaveAndLoadComponent::execGetWasSaved },
			{ "OnBeginDestroyUnsavedActor", (Native)&UCGDAutoSaveAndLoadComponent::execOnBeginDestroyUnsavedActor },
			{ "OnLoadEnd", (Native)&UCGDAutoSaveAndLoadComponent::execOnLoadEnd },
			{ "OnLoadStart", (Native)&UCGDAutoSaveAndLoadComponent::execOnLoadStart },
			{ "OnSaveEnd", (Native)&UCGDAutoSaveAndLoadComponent::execOnSaveEnd },
			{ "OnSaveStart", (Native)&UCGDAutoSaveAndLoadComponent::execOnSaveStart },
			{ "OnUnchangedActor", (Native)&UCGDAutoSaveAndLoadComponent::execOnUnchangedActor },
			{ "SetComponentOptions", (Native)&UCGDAutoSaveAndLoadComponent::execSetComponentOptions },
			{ "SetDestroyActorOnLoadGameIfWasNotSaved", (Native)&UCGDAutoSaveAndLoadComponent::execSetDestroyActorOnLoadGameIfWasNotSaved },
			{ "SetEnablePlugin", (Native)&UCGDAutoSaveAndLoadComponent::execSetEnablePlugin },
			{ "SetLoadActorWithRandomIDName", (Native)&UCGDAutoSaveAndLoadComponent::execSetLoadActorWithRandomIDName },
			{ "SetSaveComponents", (Native)&UCGDAutoSaveAndLoadComponent::execSetSaveComponents },
			{ "SetSaveComponentsAngularVelocity", (Native)&UCGDAutoSaveAndLoadComponent::execSetSaveComponentsAngularVelocity },
			{ "SetSaveComponentsLinearVelocity", (Native)&UCGDAutoSaveAndLoadComponent::execSetSaveComponentsLinearVelocity },
			{ "SetSaveComponentsLocation", (Native)&UCGDAutoSaveAndLoadComponent::execSetSaveComponentsLocation },
			{ "SetSaveComponentsRotation", (Native)&UCGDAutoSaveAndLoadComponent::execSetSaveComponentsRotation },
			{ "SetSaveComponentsScale", (Native)&UCGDAutoSaveAndLoadComponent::execSetSaveComponentsScale },
			{ "SetSavedBooleans", (Native)&UCGDAutoSaveAndLoadComponent::execSetSavedBooleans },
			{ "SetSavedFloats", (Native)&UCGDAutoSaveAndLoadComponent::execSetSavedFloats },
			{ "SetSavedNames", (Native)&UCGDAutoSaveAndLoadComponent::execSetSavedNames },
			{ "SetSavedNumbers", (Native)&UCGDAutoSaveAndLoadComponent::execSetSavedNumbers },
			{ "SetSavedRotators", (Native)&UCGDAutoSaveAndLoadComponent::execSetSavedRotators },
			{ "SetSavedStrings", (Native)&UCGDAutoSaveAndLoadComponent::execSetSavedStrings },
			{ "SetSavedVectors", (Native)&UCGDAutoSaveAndLoadComponent::execSetSavedVectors },
			{ "SetWasSaved", (Native)&UCGDAutoSaveAndLoadComponent::execSetWasSaved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 42);
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetComponentOptions()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetComponentOptions_Parms
		{
			TArray<FCGDAutoSaveAndLoadComponentOption> ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetComponentOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetComponentOptions_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetComponentOptions_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetDestroyActorOnLoadGameIfWasNotSaved()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetDestroyActorOnLoadGameIfWasNotSaved_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDestroyActorOnLoadGameIfWasNotSaved"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetDestroyActorOnLoadGameIfWasNotSaved_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetDestroyActorOnLoadGameIfWasNotSaved_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetDestroyActorOnLoadGameIfWasNotSaved_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetDestroyActorOnLoadGameIfWasNotSaved_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetEnablePlugin()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetEnablePlugin_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetEnablePlugin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetEnablePlugin_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetEnablePlugin_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetEnablePlugin_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetEnablePlugin_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetEnableComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetLoadActorWithRandomIDName()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetLoadActorWithRandomIDName_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLoadActorWithRandomIDName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetLoadActorWithRandomIDName_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetLoadActorWithRandomIDName_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetLoadActorWithRandomIDName_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetLoadActorWithRandomIDName_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponents()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSaveComponents_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSaveComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSaveComponents_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponents_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponents_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponents_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsAngularVelocity()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSaveComponentsAngularVelocity_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSaveComponentsAngularVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSaveComponentsAngularVelocity_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsAngularVelocity_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsAngularVelocity_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsAngularVelocity_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsLinearVelocity()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLinearVelocity_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSaveComponentsLinearVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLinearVelocity_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLinearVelocity_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLinearVelocity_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLinearVelocity_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsLocation()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLocation_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSaveComponentsLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLocation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLocation_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLocation_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsLocation_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsRotation()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSaveComponentsRotation_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSaveComponentsRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSaveComponentsRotation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsRotation_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsRotation_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsRotation_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsScale()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSaveComponentsScale_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSaveComponentsScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSaveComponentsScale_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsScale_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsScale_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetSaveComponentsScale_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedBooleans()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSavedBooleans_Parms
		{
			TArray<bool> SavedBooleans;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSavedBooleans"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSavedBooleans_Parms));
			UProperty* NewProp_SavedBooleans = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SavedBooleans"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SavedBooleans, CGDAutoSaveAndLoadComponent_eventGetSavedBooleans_Parms), 0x0010000000000180);
			UProperty* NewProp_SavedBooleans_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SavedBooleans, TEXT("SavedBooleans"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedFloats()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSavedFloats_Parms
		{
			TArray<float> SavedFloats;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSavedFloats"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSavedFloats_Parms));
			UProperty* NewProp_SavedFloats = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SavedFloats"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SavedFloats, CGDAutoSaveAndLoadComponent_eventGetSavedFloats_Parms), 0x0010000000000180);
			UProperty* NewProp_SavedFloats_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SavedFloats, TEXT("SavedFloats"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedNames()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSavedNames_Parms
		{
			TArray<FName> SavedNames;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSavedNames"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSavedNames_Parms));
			UProperty* NewProp_SavedNames = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SavedNames"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SavedNames, CGDAutoSaveAndLoadComponent_eventGetSavedNames_Parms), 0x0010000000000180);
			UProperty* NewProp_SavedNames_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SavedNames, TEXT("SavedNames"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("#CronofearTODO New changes, explain"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedNumbers()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSavedNumbers_Parms
		{
			TArray<int32> SavedNumbers;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSavedNumbers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSavedNumbers_Parms));
			UProperty* NewProp_SavedNumbers = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SavedNumbers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SavedNumbers, CGDAutoSaveAndLoadComponent_eventGetSavedNumbers_Parms), 0x0010000000000180);
			UProperty* NewProp_SavedNumbers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SavedNumbers, TEXT("SavedNumbers"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedRotators()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSavedRotators_Parms
		{
			TArray<FRotator> SavedRotators;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSavedRotators"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSavedRotators_Parms));
			UProperty* NewProp_SavedRotators = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SavedRotators"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SavedRotators, CGDAutoSaveAndLoadComponent_eventGetSavedRotators_Parms), 0x0010000000000180);
			UProperty* NewProp_SavedRotators_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SavedRotators, TEXT("SavedRotators"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedStrings()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSavedStrings_Parms
		{
			TArray<FString> SavedStrings;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSavedStrings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSavedStrings_Parms));
			UProperty* NewProp_SavedStrings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SavedStrings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SavedStrings, CGDAutoSaveAndLoadComponent_eventGetSavedStrings_Parms), 0x0010000000000180);
			UProperty* NewProp_SavedStrings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SavedStrings, TEXT("SavedStrings"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedVectors()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetSavedVectors_Parms
		{
			TArray<FVector> SavedVectors;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSavedVectors"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetSavedVectors_Parms));
			UProperty* NewProp_SavedVectors = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SavedVectors"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SavedVectors, CGDAutoSaveAndLoadComponent_eventGetSavedVectors_Parms), 0x0010000000000180);
			UProperty* NewProp_SavedVectors_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SavedVectors, TEXT("SavedVectors"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetWasSaved()
	{
		struct CGDAutoSaveAndLoadComponent_eventGetWasSaved_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetWasSaved"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventGetWasSaved_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetWasSaved_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetWasSaved_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CGDAutoSaveAndLoadComponent_eventGetWasSaved_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnBeginDestroyUnsavedActor()
	{
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBeginDestroyUnsavedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Function"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Call On Begin Destroy Unsaved Actor Event"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call the Event BeginDestroyOnLoad that can be triggered in the actor owner of this component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnLoadEnd()
	{
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnLoadEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Function"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Call On Load End Event"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call the Event OnLoadEnd that can be triggered in the actor owner of this component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnLoadStart()
	{
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnLoadStart"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Function"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Call On Load Start Event"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call the Event OnLoadStart that can be triggered in the actor owner of this component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnSaveEnd()
	{
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSaveEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Function"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Call On Save End Event"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call the Event OnSaveEnd that can be triggered in the actor owner of this component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnSaveStart()
	{
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSaveStart"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Function"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Call On Save Start Event"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call the Event OnSaveStart that can be triggered in the actor owner of this component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnUnchangedActor()
	{
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnUnchangedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Function"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CGD::Call On Unchanged Actor Event"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call the Event UnchangedOnLoad that can be triggered in the actor owner of this component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetComponentOptions()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetComponentOptions_Parms
		{
			TArray<FCGDAutoSaveAndLoadComponentOption> Options;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetComponentOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetComponentOptions_Parms));
			UProperty* NewProp_Options = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Options"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Options, CGDAutoSaveAndLoadComponent_eventSetComponentOptions_Parms), 0x0010000000000080);
			UProperty* NewProp_Options_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Options, TEXT("Options"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetDestroyActorOnLoadGameIfWasNotSaved()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetDestroyActorOnLoadGameIfWasNotSaved_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetDestroyActorOnLoadGameIfWasNotSaved"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetDestroyActorOnLoadGameIfWasNotSaved_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetDestroyActorOnLoadGameIfWasNotSaved_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetDestroyActorOnLoadGameIfWasNotSaved_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetDestroyActorOnLoadGameIfWasNotSaved_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetEnablePlugin()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetEnablePlugin_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetEnablePlugin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetEnablePlugin_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetEnablePlugin_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetEnablePlugin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetEnablePlugin_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("SetEnableComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetLoadActorWithRandomIDName()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetLoadActorWithRandomIDName_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetLoadActorWithRandomIDName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetLoadActorWithRandomIDName_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetLoadActorWithRandomIDName_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetLoadActorWithRandomIDName_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetLoadActorWithRandomIDName_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponents()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSaveComponents_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSaveComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSaveComponents_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponents_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponents_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponents_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsAngularVelocity()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSaveComponentsAngularVelocity_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSaveComponentsAngularVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSaveComponentsAngularVelocity_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsAngularVelocity_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsAngularVelocity_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsAngularVelocity_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsLinearVelocity()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLinearVelocity_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSaveComponentsLinearVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLinearVelocity_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLinearVelocity_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLinearVelocity_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLinearVelocity_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsLocation()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLocation_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSaveComponentsLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLocation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLocation_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsLocation_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsRotation()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSaveComponentsRotation_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSaveComponentsRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSaveComponentsRotation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsRotation_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsRotation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsRotation_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsScale()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSaveComponentsScale_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSaveComponentsScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSaveComponentsScale_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsScale_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsScale_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetSaveComponentsScale_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedBooleans()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSavedBooleans_Parms
		{
			TArray<bool> BooleansToSave;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSavedBooleans"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSavedBooleans_Parms));
			UProperty* NewProp_BooleansToSave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BooleansToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BooleansToSave, CGDAutoSaveAndLoadComponent_eventSetSavedBooleans_Parms), 0x0010000008000182);
			UProperty* NewProp_BooleansToSave_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BooleansToSave, TEXT("BooleansToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("BooleansToSave"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(NewProp_BooleansToSave, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedFloats()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSavedFloats_Parms
		{
			TArray<float> FloatsToSave;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSavedFloats"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSavedFloats_Parms));
			UProperty* NewProp_FloatsToSave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FloatsToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FloatsToSave, CGDAutoSaveAndLoadComponent_eventSetSavedFloats_Parms), 0x0010000008000182);
			UProperty* NewProp_FloatsToSave_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FloatsToSave, TEXT("FloatsToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("FloatsToSave"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(NewProp_FloatsToSave, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedNames()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSavedNames_Parms
		{
			TArray<FName> NamesToSave;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSavedNames"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSavedNames_Parms));
			UProperty* NewProp_NamesToSave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NamesToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(NamesToSave, CGDAutoSaveAndLoadComponent_eventSetSavedNames_Parms), 0x0010000008000182);
			UProperty* NewProp_NamesToSave_Inner = new(EC_InternalUseOnlyConstructor, NewProp_NamesToSave, TEXT("NamesToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("NamesToSave"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(NewProp_NamesToSave, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedNumbers()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSavedNumbers_Parms
		{
			TArray<int32> NumbersToSave;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSavedNumbers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSavedNumbers_Parms));
			UProperty* NewProp_NumbersToSave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NumbersToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(NumbersToSave, CGDAutoSaveAndLoadComponent_eventSetSavedNumbers_Parms), 0x0010000008000182);
			UProperty* NewProp_NumbersToSave_Inner = new(EC_InternalUseOnlyConstructor, NewProp_NumbersToSave, TEXT("NumbersToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("NumbersToSave"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(NewProp_NumbersToSave, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedRotators()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSavedRotators_Parms
		{
			TArray<FRotator> RotatorsToSave;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSavedRotators"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSavedRotators_Parms));
			UProperty* NewProp_RotatorsToSave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RotatorsToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RotatorsToSave, CGDAutoSaveAndLoadComponent_eventSetSavedRotators_Parms), 0x0010000008000182);
			UProperty* NewProp_RotatorsToSave_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RotatorsToSave, TEXT("RotatorsToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("RotatorsToSave"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(NewProp_RotatorsToSave, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedStrings()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSavedStrings_Parms
		{
			TArray<FString> StringToSaves;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSavedStrings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSavedStrings_Parms));
			UProperty* NewProp_StringToSaves = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StringToSaves"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(StringToSaves, CGDAutoSaveAndLoadComponent_eventSetSavedStrings_Parms), 0x0010000008000182);
			UProperty* NewProp_StringToSaves_Inner = new(EC_InternalUseOnlyConstructor, NewProp_StringToSaves, TEXT("StringToSaves"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("StringToSaves"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(NewProp_StringToSaves, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedVectors()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetSavedVectors_Parms
		{
			TArray<FVector> VectorsToSave;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSavedVectors"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetSavedVectors_Parms));
			UProperty* NewProp_VectorsToSave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VectorsToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(VectorsToSave, CGDAutoSaveAndLoadComponent_eventSetSavedVectors_Parms), 0x0010000008000182);
			UProperty* NewProp_VectorsToSave_Inner = new(EC_InternalUseOnlyConstructor, NewProp_VectorsToSave, TEXT("VectorsToSave"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("VectorsToSave"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
			MetaData->SetValue(NewProp_VectorsToSave, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetWasSaved()
	{
		struct CGDAutoSaveAndLoadComponent_eventSetWasSaved_Parms
		{
			bool bValue;
		};
		UObject* Outer=Z_Construct_UClass_UCGDAutoSaveAndLoadComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetWasSaved"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CGDAutoSaveAndLoadComponent_eventSetWasSaved_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValue, CGDAutoSaveAndLoadComponent_eventSetWasSaved_Parms, bool);
			UProperty* NewProp_bValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValue, CGDAutoSaveAndLoadComponent_eventSetWasSaved_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bValue, CGDAutoSaveAndLoadComponent_eventSetWasSaved_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCGDAutoSaveAndLoadComponent_NoRegister()
	{
		return UCGDAutoSaveAndLoadComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCGDAutoSaveAndLoadComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
			OuterClass = UCGDAutoSaveAndLoadComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetComponentOptions());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetDestroyActorOnLoadGameIfWasNotSaved());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetEnablePlugin());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetLoadActorWithRandomIDName());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponents());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsAngularVelocity());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsLinearVelocity());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsRotation());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsScale());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedBooleans());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedFloats());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedNames());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedNumbers());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedRotators());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedStrings());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedVectors());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetWasSaved());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnBeginDestroyUnsavedActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnLoadEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnLoadStart());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnSaveEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnSaveStart());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnUnchangedActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetComponentOptions());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetDestroyActorOnLoadGameIfWasNotSaved());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetEnablePlugin());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetLoadActorWithRandomIDName());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponents());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsAngularVelocity());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsLinearVelocity());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsRotation());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsScale());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedBooleans());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedFloats());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedNames());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedNumbers());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedRotators());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedStrings());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedVectors());
				OuterClass->LinkChild(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetWasSaved());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_EventUnchangedOnLoad = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventUnchangedOnLoad"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(EventUnchangedOnLoad, UCGDAutoSaveAndLoadComponent), 0x0020080010080000, Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadBeginDestroy__DelegateSignature());
				UProperty* NewProp_EventBeginDestroyOnLoad = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventBeginDestroyOnLoad"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(EventBeginDestroyOnLoad, UCGDAutoSaveAndLoadComponent), 0x0020080010080000, Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadBeginDestroy__DelegateSignature());
				UProperty* NewProp_EventOnLoadEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventOnLoadEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(EventOnLoadEnd, UCGDAutoSaveAndLoadComponent), 0x0020080010080000, Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadEnd__DelegateSignature());
				UProperty* NewProp_EventOnLoadStart = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventOnLoadStart"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(EventOnLoadStart, UCGDAutoSaveAndLoadComponent), 0x0020080010080000, Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadStart__DelegateSignature());
				UProperty* NewProp_EventOnSaveEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventOnSaveEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(EventOnSaveEnd, UCGDAutoSaveAndLoadComponent), 0x0020080010080000, Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnSaveEnd__DelegateSignature());
				UProperty* NewProp_EventOnSaveStart = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventOnSaveStart"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(EventOnSaveStart, UCGDAutoSaveAndLoadComponent), 0x0020080010080000, Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnSaveStart__DelegateSignature());
				UProperty* NewProp_Rotators = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Rotators"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Rotators, UCGDAutoSaveAndLoadComponent), 0x0040000001000000);
				UProperty* NewProp_Rotators_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Rotators, TEXT("Rotators"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_Vectors = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Vectors"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vectors, UCGDAutoSaveAndLoadComponent), 0x0040000001000000);
				UProperty* NewProp_Vectors_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vectors, TEXT("Vectors"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_Booleans = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Booleans"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Booleans, UCGDAutoSaveAndLoadComponent), 0x0040000001000000);
				UProperty* NewProp_Booleans_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Booleans, TEXT("Booleans"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
				UProperty* NewProp_Numbers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Numbers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Numbers, UCGDAutoSaveAndLoadComponent), 0x0040000001000000);
				UProperty* NewProp_Numbers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Numbers, TEXT("Numbers"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Values = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Values"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Values, UCGDAutoSaveAndLoadComponent), 0x0040000001000000);
				UProperty* NewProp_Values_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Values, TEXT("Values"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Strings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Strings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Strings, UCGDAutoSaveAndLoadComponent), 0x0040000001000000);
				UProperty* NewProp_Strings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Strings, TEXT("Strings"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Names = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Names"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Names, UCGDAutoSaveAndLoadComponent), 0x0040000001000000);
				UProperty* NewProp_Names_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Names, TEXT("Names"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_ComponentOptions = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ComponentOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ComponentOptions, UCGDAutoSaveAndLoadComponent), 0x0040000001000001);
				UProperty* NewProp_ComponentOptions_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ComponentOptions, TEXT("ComponentOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCGDAutoSaveAndLoadComponentOption());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponentsAngularVelocity, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bSaveComponentsAngularVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSaveComponentsAngularVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponentsAngularVelocity, UCGDAutoSaveAndLoadComponent), 0x0040000001000001, CPP_BOOL_PROPERTY_BITMASK(bSaveComponentsAngularVelocity, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponentsLinearVelocity, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bSaveComponentsLinearVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSaveComponentsLinearVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponentsLinearVelocity, UCGDAutoSaveAndLoadComponent), 0x0040000001000001, CPP_BOOL_PROPERTY_BITMASK(bSaveComponentsLinearVelocity, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponentsScale, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bSaveComponentsScale = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSaveComponentsScale"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponentsScale, UCGDAutoSaveAndLoadComponent), 0x0040000001000001, CPP_BOOL_PROPERTY_BITMASK(bSaveComponentsScale, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponentsRotation, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bSaveComponentsRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSaveComponentsRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponentsRotation, UCGDAutoSaveAndLoadComponent), 0x0040000001000001, CPP_BOOL_PROPERTY_BITMASK(bSaveComponentsRotation, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponentsLocation, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bSaveComponentsLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSaveComponentsLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponentsLocation, UCGDAutoSaveAndLoadComponent), 0x0040000001000001, CPP_BOOL_PROPERTY_BITMASK(bSaveComponentsLocation, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSaveComponents, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bSaveComponents = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSaveComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSaveComponents, UCGDAutoSaveAndLoadComponent), 0x0040000001000001, CPP_BOOL_PROPERTY_BITMASK(bSaveComponents, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLoadActorWithRandomIDName, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bLoadActorWithRandomIDName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLoadActorWithRandomIDName"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLoadActorWithRandomIDName, UCGDAutoSaveAndLoadComponent), 0x0040000001000001, CPP_BOOL_PROPERTY_BITMASK(bLoadActorWithRandomIDName, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDestroyActorOnLoadGameIfWasNotSaved, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bDestroyActorOnLoadGameIfWasNotSaved = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDestroyActorOnLoadGameIfWasNotSaved"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDestroyActorOnLoadGameIfWasNotSaved, UCGDAutoSaveAndLoadComponent), 0x0040000001000001, CPP_BOOL_PROPERTY_BITMASK(bDestroyActorOnLoadGameIfWasNotSaved, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWasSaved, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bWasSaved = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bWasSaved"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWasSaved, UCGDAutoSaveAndLoadComponent), 0x0040000001000000, CPP_BOOL_PROPERTY_BITMASK(bWasSaved, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnablePlugin, UCGDAutoSaveAndLoadComponent, bool);
				UProperty* NewProp_bEnablePlugin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnablePlugin"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnablePlugin, UCGDAutoSaveAndLoadComponent), 0x0040000001000001, CPP_BOOL_PROPERTY_BITMASK(bEnablePlugin, UCGDAutoSaveAndLoadComponent), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetComponentOptions(), "GetComponentOptions"); // 2085021272
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetDestroyActorOnLoadGameIfWasNotSaved(), "GetDestroyActorOnLoadGameIfWasNotSaved"); // 2961218088
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetEnablePlugin(), "GetEnablePlugin"); // 216308310
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetLoadActorWithRandomIDName(), "GetLoadActorWithRandomIDName"); // 164196103
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponents(), "GetSaveComponents"); // 2816259155
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsAngularVelocity(), "GetSaveComponentsAngularVelocity"); // 3373491571
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsLinearVelocity(), "GetSaveComponentsLinearVelocity"); // 1484035390
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsLocation(), "GetSaveComponentsLocation"); // 740472923
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsRotation(), "GetSaveComponentsRotation"); // 328310749
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSaveComponentsScale(), "GetSaveComponentsScale"); // 384937019
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedBooleans(), "GetSavedBooleans"); // 3089419437
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedFloats(), "GetSavedFloats"); // 2325821362
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedNames(), "GetSavedNames"); // 2561649586
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedNumbers(), "GetSavedNumbers"); // 1636372163
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedRotators(), "GetSavedRotators"); // 1485029336
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedStrings(), "GetSavedStrings"); // 3111724996
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetSavedVectors(), "GetSavedVectors"); // 1584960301
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_GetWasSaved(), "GetWasSaved"); // 2726411503
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnBeginDestroyUnsavedActor(), "OnBeginDestroyUnsavedActor"); // 1722201700
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnLoadEnd(), "OnLoadEnd"); // 3104710706
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnLoadStart(), "OnLoadStart"); // 2236774424
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnSaveEnd(), "OnSaveEnd"); // 2031818174
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnSaveStart(), "OnSaveStart"); // 2831337494
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_OnUnchangedActor(), "OnUnchangedActor"); // 633213581
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetComponentOptions(), "SetComponentOptions"); // 3949670284
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetDestroyActorOnLoadGameIfWasNotSaved(), "SetDestroyActorOnLoadGameIfWasNotSaved"); // 916907755
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetEnablePlugin(), "SetEnablePlugin"); // 3460837924
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetLoadActorWithRandomIDName(), "SetLoadActorWithRandomIDName"); // 3100937222
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponents(), "SetSaveComponents"); // 3250418326
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsAngularVelocity(), "SetSaveComponentsAngularVelocity"); // 1422459015
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsLinearVelocity(), "SetSaveComponentsLinearVelocity"); // 2136907681
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsLocation(), "SetSaveComponentsLocation"); // 2861901558
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsRotation(), "SetSaveComponentsRotation"); // 3943276427
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSaveComponentsScale(), "SetSaveComponentsScale"); // 1921308698
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedBooleans(), "SetSavedBooleans"); // 512397812
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedFloats(), "SetSavedFloats"); // 3235975337
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedNames(), "SetSavedNames"); // 15976160
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedNumbers(), "SetSavedNumbers"); // 682620924
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedRotators(), "SetSavedRotators"); // 2034530245
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedStrings(), "SetSavedStrings"); // 3449864606
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetSavedVectors(), "SetSavedVectors"); // 4224922813
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCGDAutoSaveAndLoadComponent_SetWasSaved(), "SetWasSaved"); // 1618956172
				static TCppClassTypeInfo<TCppClassTypeTraits<UCGDAutoSaveAndLoadComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_EventUnchangedOnLoad, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Event"));
				MetaData->SetValue(NewProp_EventUnchangedOnLoad, TEXT("DisplayName"), TEXT("CGD::Event On Actor Unchanged After Load"));
				MetaData->SetValue(NewProp_EventUnchangedOnLoad, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_EventUnchangedOnLoad, TEXT("ToolTip"), TEXT("Event Triggered when loading the game and the actor wasn't loaded (because it wasn't saved) and if bDestroyActorOnLoadGameIfWasNotSaved property was set to FALSE\nUse this event at your convenience =)"));
				MetaData->SetValue(NewProp_EventBeginDestroyOnLoad, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Event"));
				MetaData->SetValue(NewProp_EventBeginDestroyOnLoad, TEXT("DisplayName"), TEXT("CGD::Event On Begin Destroy On Load If Actor Wasn't Saved"));
				MetaData->SetValue(NewProp_EventBeginDestroyOnLoad, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_EventBeginDestroyOnLoad, TEXT("ToolTip"), TEXT("Event Triggered when loading the game and the actor wasn't loaded (because it wasn't saved) and if bDestroyActorOnLoadGameIfWasNotSaved property was set to TRUE\nYou can use this event to abort the destruction of this actor if you set bDestroyActorOnLoadGameIfWasNotSaved back to FALSE"));
				MetaData->SetValue(NewProp_EventOnLoadEnd, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Event"));
				MetaData->SetValue(NewProp_EventOnLoadEnd, TEXT("DisplayName"), TEXT("CGD::Event On Load End"));
				MetaData->SetValue(NewProp_EventOnLoadEnd, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_EventOnLoadEnd, TEXT("ToolTip"), TEXT("Event Triggered At the End of Loading\nAt this moment, the actor does have the updated values and the load is Completed"));
				MetaData->SetValue(NewProp_EventOnLoadStart, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Event"));
				MetaData->SetValue(NewProp_EventOnLoadStart, TEXT("DisplayName"), TEXT("CGD::Event On Load Start"));
				MetaData->SetValue(NewProp_EventOnLoadStart, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_EventOnLoadStart, TEXT("ToolTip"), TEXT("Event Triggered At the Start of Loading (SaveGame variables and components doesn't have updated values).\nAt this moment, the actor doesn't have the updated values yet"));
				MetaData->SetValue(NewProp_EventOnSaveEnd, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Event"));
				MetaData->SetValue(NewProp_EventOnSaveEnd, TEXT("DisplayName"), TEXT("CGD::Event On Save End"));
				MetaData->SetValue(NewProp_EventOnSaveEnd, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_EventOnSaveEnd, TEXT("ToolTip"), TEXT("Event Triggered At the End of Saving (After Serializing all the actors data)\nChanges in the actor will NOT BE saved if done in this event"));
				MetaData->SetValue(NewProp_EventOnSaveStart, TEXT("Category"), TEXT("CGD|AutoSaveAndLoadSystem::Event"));
				MetaData->SetValue(NewProp_EventOnSaveStart, TEXT("DisplayName"), TEXT("CGD::Event On Save Start"));
				MetaData->SetValue(NewProp_EventOnSaveStart, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_EventOnSaveStart, TEXT("ToolTip"), TEXT("Event Triggered At the Start of Saving (The Moment When AutoSaveGameToSlot() is called) for every actor that have this component\nChanges in the actor will BE saved if done in this event"));
				MetaData->SetValue(NewProp_Rotators, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_Vectors, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_Booleans, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_Numbers, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_Values, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_Strings, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_Names, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_ComponentOptions, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Custom Components"));
				MetaData->SetValue(NewProp_ComponentOptions, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_ComponentOptions, TEXT("ToolTip"), TEXT("Custom Options for an specific component of this actor"));
				MetaData->SetValue(NewProp_bSaveComponentsAngularVelocity, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Default Components"));
				MetaData->SetValue(NewProp_bSaveComponentsAngularVelocity, TEXT("EditCondition"), TEXT("bSaveComponents"));
				MetaData->SetValue(NewProp_bSaveComponentsAngularVelocity, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bSaveComponentsAngularVelocity, TEXT("ToolTip"), TEXT("If checked this actor will auto save and load the Angular Velocity for all it's PrimitiveComponents"));
				MetaData->SetValue(NewProp_bSaveComponentsLinearVelocity, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Default Components"));
				MetaData->SetValue(NewProp_bSaveComponentsLinearVelocity, TEXT("EditCondition"), TEXT("bSaveComponents"));
				MetaData->SetValue(NewProp_bSaveComponentsLinearVelocity, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bSaveComponentsLinearVelocity, TEXT("ToolTip"), TEXT("If checked this actor will auto save and load the Linear Velocity for all it's PrimitiveComponents"));
				MetaData->SetValue(NewProp_bSaveComponentsScale, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Default Components"));
				MetaData->SetValue(NewProp_bSaveComponentsScale, TEXT("EditCondition"), TEXT("bSaveComponents"));
				MetaData->SetValue(NewProp_bSaveComponentsScale, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bSaveComponentsScale, TEXT("ToolTip"), TEXT("If checked this actor will auto save and load the Scale3D Data for all it's SceneComponents\nDefault Scale value is (1,1,1) in case this is unchecked"));
				MetaData->SetValue(NewProp_bSaveComponentsRotation, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Default Components"));
				MetaData->SetValue(NewProp_bSaveComponentsRotation, TEXT("EditCondition"), TEXT("bSaveComponents"));
				MetaData->SetValue(NewProp_bSaveComponentsRotation, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bSaveComponentsRotation, TEXT("ToolTip"), TEXT("If checked this actor will auto save and load the Rotation Data for all it's SceneComponents\nDefault Rotation value is (0,0,0) in case this is unchecked"));
				MetaData->SetValue(NewProp_bSaveComponentsLocation, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Default Components"));
				MetaData->SetValue(NewProp_bSaveComponentsLocation, TEXT("EditCondition"), TEXT("bSaveComponents"));
				MetaData->SetValue(NewProp_bSaveComponentsLocation, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bSaveComponentsLocation, TEXT("ToolTip"), TEXT("If checked this actor will auto save and load the Location Data for all it's SceneComponents\nDefault Location value is (0,0,0) in case this is unchecked"));
				MetaData->SetValue(NewProp_bSaveComponents, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Default Components"));
				MetaData->SetValue(NewProp_bSaveComponents, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bSaveComponents, TEXT("ToolTip"), TEXT("If checked, the components of this actor will be saved by default"));
				MetaData->SetValue(NewProp_bLoadActorWithRandomIDName, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Actor"));
				MetaData->SetValue(NewProp_bLoadActorWithRandomIDName, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bLoadActorWithRandomIDName, TEXT("ToolTip"), TEXT("If checked this actor will load with a random ID Name ONLY if there are not actors in the world that match it's IDName (use it with caution)\nIn case this actors loads and there is an actor that match it's ID, this option will do nothing as the actor that match the ID will be updated\nUseful for loading actors that were destroyed and if UE4 Garbage Collector isn't doing the job removing it completely."));
				MetaData->SetValue(NewProp_bDestroyActorOnLoadGameIfWasNotSaved, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Actor"));
				MetaData->SetValue(NewProp_bDestroyActorOnLoadGameIfWasNotSaved, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bDestroyActorOnLoadGameIfWasNotSaved, TEXT("ToolTip"), TEXT("Destroy this actor on LoadGame if it wasn't saved into a SaveFile\nFor actors that we're spawned in the world and weren't saved\nBy default the actors will not be destroyed!"));
				MetaData->SetValue(NewProp_bWasSaved, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bWasSaved, TEXT("ToolTip"), TEXT("When the actor is serialized into a file this will be true"));
				MetaData->SetValue(NewProp_bEnablePlugin, TEXT("Category"), TEXT("CGDAutoSaveAndLoadSystem::Global"));
				MetaData->SetValue(NewProp_bEnablePlugin, TEXT("DisplayName"), TEXT("Enable Component"));
				MetaData->SetValue(NewProp_bEnablePlugin, TEXT("ModuleRelativePath"), TEXT("Public/ActorComponent/CGDAutoSaveAndLoadComponent.h"));
				MetaData->SetValue(NewProp_bEnablePlugin, TEXT("ToolTip"), TEXT("If unchecked, this actor will not be saved or loaded."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCGDAutoSaveAndLoadComponent, 1172270808);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCGDAutoSaveAndLoadComponent(Z_Construct_UClass_UCGDAutoSaveAndLoadComponent, &UCGDAutoSaveAndLoadComponent::StaticClass, TEXT("/Script/CGDAutoSaveAndLoadSystem"), TEXT("UCGDAutoSaveAndLoadComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCGDAutoSaveAndLoadComponent);
	void UCGDDummyObject::StaticRegisterNativesUCGDDummyObject()
	{
	}
	UClass* Z_Construct_UClass_UCGDDummyObject_NoRegister()
	{
		return UCGDDummyObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UCGDDummyObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USaveGame();
			Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem();
			OuterClass = UCGDDummyObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000280;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MapRecordsArrayOfBytes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MapRecordsArrayOfBytes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(MapRecordsArrayOfBytes, UCGDDummyObject), 0x0010000001000000);
				UProperty* NewProp_MapRecordsArrayOfBytes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_MapRecordsArrayOfBytes, TEXT("MapRecordsArrayOfBytes"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UCGDDummyObject> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SaveGame/CGD_AutoSaveLoad_TempObject.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("false"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SaveGame/CGD_AutoSaveLoad_TempObject.h"));
				MetaData->SetValue(OuterClass, TEXT("NotBlueprintType"), TEXT("true"));
				MetaData->SetValue(NewProp_MapRecordsArrayOfBytes, TEXT("ModuleRelativePath"), TEXT("Public/SaveGame/CGD_AutoSaveLoad_TempObject.h"));
				MetaData->SetValue(NewProp_MapRecordsArrayOfBytes, TEXT("ToolTip"), TEXT("Not supposed to be exposed to BP.\nIt is used in the process of Compression/Decompression a SaveGameObject"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCGDDummyObject, 2302123215);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCGDDummyObject(Z_Construct_UClass_UCGDDummyObject, &UCGDDummyObject::StaticClass, TEXT("/Script/CGDAutoSaveAndLoadSystem"), TEXT("UCGDDummyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCGDDummyObject);
	UPackage* Z_Construct_UPackage__Script_CGDAutoSaveAndLoadSystem()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/CGDAutoSaveAndLoadSystem")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x4520D121;
			Guid.B = 0x5B0A0A62;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnSaveStart__DelegateSignature();
			Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnSaveEnd__DelegateSignature();
			Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadStart__DelegateSignature();
			Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadEnd__DelegateSignature();
			Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadBeginDestroy__DelegateSignature();
			Z_Construct_UDelegateFunction_CGDAutoSaveAndLoadSystem_CGDOnLoadUnchanged__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
