// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
struct FCGDAutoSaveAndLoadComponentOption;
#ifdef CGDAUTOSAVEANDLOADSYSTEM_CGDAutoSaveAndLoadComponent_generated_h
#error "CGDAutoSaveAndLoadComponent.generated.h already included, missing '#pragma once' in CGDAutoSaveAndLoadComponent.h"
#endif
#define CGDAUTOSAVEANDLOADSYSTEM_CGDAutoSaveAndLoadComponent_generated_h

#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_14_DELEGATE \
static inline void FCGDOnLoadUnchanged_DelegateWrapper(const FMulticastScriptDelegate& CGDOnLoadUnchanged) \
{ \
	CGDOnLoadUnchanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_13_DELEGATE \
static inline void FCGDOnLoadBeginDestroy_DelegateWrapper(const FMulticastScriptDelegate& CGDOnLoadBeginDestroy) \
{ \
	CGDOnLoadBeginDestroy.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_12_DELEGATE \
static inline void FCGDOnLoadEnd_DelegateWrapper(const FMulticastScriptDelegate& CGDOnLoadEnd) \
{ \
	CGDOnLoadEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_11_DELEGATE \
static inline void FCGDOnLoadStart_DelegateWrapper(const FMulticastScriptDelegate& CGDOnLoadStart) \
{ \
	CGDOnLoadStart.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_10_DELEGATE \
static inline void FCGDOnSaveEnd_DelegateWrapper(const FMulticastScriptDelegate& CGDOnSaveEnd) \
{ \
	CGDOnSaveEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_9_DELEGATE \
static inline void FCGDOnSaveStart_DelegateWrapper(const FMulticastScriptDelegate& CGDOnSaveStart) \
{ \
	CGDOnSaveStart.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSavedRotators) \
	{ \
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_RotatorsToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedRotators(Z_Param_Out_RotatorsToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedVectors) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VectorsToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedVectors(Z_Param_Out_VectorsToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedBooleans) \
	{ \
		P_GET_TARRAY_REF(bool,Z_Param_Out_BooleansToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedBooleans(Z_Param_Out_BooleansToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedNumbers) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_NumbersToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedNumbers(Z_Param_Out_NumbersToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedFloats) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatsToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedFloats(Z_Param_Out_FloatsToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedStrings) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringToSaves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedStrings(Z_Param_Out_StringToSaves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_NamesToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedNames(Z_Param_Out_NamesToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedRotators) \
	{ \
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_SavedRotators); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedRotators(Z_Param_Out_SavedRotators); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedVectors) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_SavedVectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedVectors(Z_Param_Out_SavedVectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedBooleans) \
	{ \
		P_GET_TARRAY_REF(bool,Z_Param_Out_SavedBooleans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedBooleans(Z_Param_Out_SavedBooleans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedNumbers) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_SavedNumbers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedNumbers(Z_Param_Out_SavedNumbers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedFloats) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_SavedFloats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedFloats(Z_Param_Out_SavedFloats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedStrings) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_SavedStrings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedStrings(Z_Param_Out_SavedStrings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_SavedNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedNames(Z_Param_Out_SavedNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentOptions) \
	{ \
		P_GET_TARRAY(FCGDAutoSaveAndLoadComponentOption,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetComponentOptions(Z_Param_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCGDAutoSaveAndLoadComponentOption>*)Z_Param__Result=this->GetComponentOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponents) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponents(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDestroyActorOnLoadGameIfWasNotSaved) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDestroyActorOnLoadGameIfWasNotSaved(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestroyActorOnLoadGameIfWasNotSaved) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetDestroyActorOnLoadGameIfWasNotSaved(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoadActorWithRandomIDName) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLoadActorWithRandomIDName(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadActorWithRandomIDName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetLoadActorWithRandomIDName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsScale) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsScale(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsRotation) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsRotation(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsLocation) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsLocation(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsAngularVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsAngularVelocity(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsAngularVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsAngularVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsLinearVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsLinearVelocity(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsLinearVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsLinearVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWasSaved) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWasSaved(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWasSaved) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetWasSaved(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnablePlugin) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnablePlugin(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnablePlugin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetEnablePlugin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUnchangedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnUnchangedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginDestroyUnsavedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginDestroyUnsavedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoadEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLoadEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoadStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLoadStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSaveEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSaveEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSaveStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSaveStart(); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSavedRotators) \
	{ \
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_RotatorsToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedRotators(Z_Param_Out_RotatorsToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedVectors) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VectorsToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedVectors(Z_Param_Out_VectorsToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedBooleans) \
	{ \
		P_GET_TARRAY_REF(bool,Z_Param_Out_BooleansToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedBooleans(Z_Param_Out_BooleansToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedNumbers) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_NumbersToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedNumbers(Z_Param_Out_NumbersToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedFloats) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatsToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedFloats(Z_Param_Out_FloatsToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedStrings) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringToSaves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedStrings(Z_Param_Out_StringToSaves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSavedNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_NamesToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSavedNames(Z_Param_Out_NamesToSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedRotators) \
	{ \
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_SavedRotators); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedRotators(Z_Param_Out_SavedRotators); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedVectors) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_SavedVectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedVectors(Z_Param_Out_SavedVectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedBooleans) \
	{ \
		P_GET_TARRAY_REF(bool,Z_Param_Out_SavedBooleans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedBooleans(Z_Param_Out_SavedBooleans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedNumbers) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_SavedNumbers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedNumbers(Z_Param_Out_SavedNumbers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedFloats) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_SavedFloats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedFloats(Z_Param_Out_SavedFloats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedStrings) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_SavedStrings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedStrings(Z_Param_Out_SavedStrings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSavedNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_SavedNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSavedNames(Z_Param_Out_SavedNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentOptions) \
	{ \
		P_GET_TARRAY(FCGDAutoSaveAndLoadComponentOption,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetComponentOptions(Z_Param_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCGDAutoSaveAndLoadComponentOption>*)Z_Param__Result=this->GetComponentOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponents) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponents(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDestroyActorOnLoadGameIfWasNotSaved) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDestroyActorOnLoadGameIfWasNotSaved(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestroyActorOnLoadGameIfWasNotSaved) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetDestroyActorOnLoadGameIfWasNotSaved(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoadActorWithRandomIDName) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLoadActorWithRandomIDName(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadActorWithRandomIDName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetLoadActorWithRandomIDName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsScale) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsScale(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsRotation) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsRotation(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsLocation) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsLocation(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsAngularVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsAngularVelocity(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsAngularVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsAngularVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveComponentsLinearVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSaveComponentsLinearVelocity(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveComponentsLinearVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetSaveComponentsLinearVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWasSaved) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWasSaved(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWasSaved) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetWasSaved(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnablePlugin) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnablePlugin(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnablePlugin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetEnablePlugin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUnchangedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnUnchangedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginDestroyUnsavedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginDestroyUnsavedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoadEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLoadEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoadStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLoadStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSaveEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSaveEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSaveStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSaveStart(); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCGDAutoSaveAndLoadComponent(); \
	friend CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGDAutoSaveAndLoadComponent(); \
public: \
	DECLARE_CLASS(UCGDAutoSaveAndLoadComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CGDAutoSaveAndLoadSystem"), NO_API) \
	DECLARE_SERIALIZER(UCGDAutoSaveAndLoadComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCGDAutoSaveAndLoadComponent(); \
	friend CGDAUTOSAVEANDLOADSYSTEM_API class UClass* Z_Construct_UClass_UCGDAutoSaveAndLoadComponent(); \
public: \
	DECLARE_CLASS(UCGDAutoSaveAndLoadComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CGDAutoSaveAndLoadSystem"), NO_API) \
	DECLARE_SERIALIZER(UCGDAutoSaveAndLoadComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCGDAutoSaveAndLoadComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCGDAutoSaveAndLoadComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCGDAutoSaveAndLoadComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCGDAutoSaveAndLoadComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCGDAutoSaveAndLoadComponent(UCGDAutoSaveAndLoadComponent&&); \
	NO_API UCGDAutoSaveAndLoadComponent(const UCGDAutoSaveAndLoadComponent&); \
public:


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCGDAutoSaveAndLoadComponent(UCGDAutoSaveAndLoadComponent&&); \
	NO_API UCGDAutoSaveAndLoadComponent(const UCGDAutoSaveAndLoadComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCGDAutoSaveAndLoadComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCGDAutoSaveAndLoadComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCGDAutoSaveAndLoadComponent)


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnablePlugin() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bEnablePlugin); } \
	FORCEINLINE static uint32 __PPO__bWasSaved() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bWasSaved); } \
	FORCEINLINE static uint32 __PPO__bDestroyActorOnLoadGameIfWasNotSaved() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bDestroyActorOnLoadGameIfWasNotSaved); } \
	FORCEINLINE static uint32 __PPO__bLoadActorWithRandomIDName() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bLoadActorWithRandomIDName); } \
	FORCEINLINE static uint32 __PPO__bSaveComponents() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bSaveComponents); } \
	FORCEINLINE static uint32 __PPO__bSaveComponentsLocation() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bSaveComponentsLocation); } \
	FORCEINLINE static uint32 __PPO__bSaveComponentsRotation() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bSaveComponentsRotation); } \
	FORCEINLINE static uint32 __PPO__bSaveComponentsScale() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bSaveComponentsScale); } \
	FORCEINLINE static uint32 __PPO__bSaveComponentsLinearVelocity() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bSaveComponentsLinearVelocity); } \
	FORCEINLINE static uint32 __PPO__bSaveComponentsAngularVelocity() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, bSaveComponentsAngularVelocity); } \
	FORCEINLINE static uint32 __PPO__ComponentOptions() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, ComponentOptions); } \
	FORCEINLINE static uint32 __PPO__Names() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, Names); } \
	FORCEINLINE static uint32 __PPO__Strings() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, Strings); } \
	FORCEINLINE static uint32 __PPO__Values() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, Values); } \
	FORCEINLINE static uint32 __PPO__Numbers() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, Numbers); } \
	FORCEINLINE static uint32 __PPO__Booleans() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, Booleans); } \
	FORCEINLINE static uint32 __PPO__Vectors() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, Vectors); } \
	FORCEINLINE static uint32 __PPO__Rotators() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, Rotators); } \
	FORCEINLINE static uint32 __PPO__EventOnSaveStart() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, EventOnSaveStart); } \
	FORCEINLINE static uint32 __PPO__EventOnSaveEnd() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, EventOnSaveEnd); } \
	FORCEINLINE static uint32 __PPO__EventOnLoadStart() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, EventOnLoadStart); } \
	FORCEINLINE static uint32 __PPO__EventOnLoadEnd() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, EventOnLoadEnd); } \
	FORCEINLINE static uint32 __PPO__EventBeginDestroyOnLoad() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, EventBeginDestroyOnLoad); } \
	FORCEINLINE static uint32 __PPO__EventUnchangedOnLoad() { return STRUCT_OFFSET(UCGDAutoSaveAndLoadComponent, EventUnchangedOnLoad); }


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_16_PROLOG
#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_RPC_WRAPPERS \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_INCLASS \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_INCLASS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZAR_4_16_Plugins_CGDAutoSaveAndLoadSystem_Source_CGDAutoSaveAndLoadSystem_Public_ActorComponent_CGDAutoSaveAndLoadComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
