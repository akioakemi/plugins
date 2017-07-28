// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEventBase;
class UScriptStruct;
class UObject;
class UEventManager;
#ifdef EVENTSUBSYSTEM_EventManager_generated_h
#error "EventManager.generated.h already included, missing '#pragma once' in EventManager.h"
#endif
#define EVENTSUBSYSTEM_EventManager_generated_h

#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_88_GENERATED_BODY \
	friend EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEventSection(); \
	EVENTSUBSYSTEM_API static class UScriptStruct* StaticStruct();


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_74_GENERATED_BODY \
	friend EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FDummy(); \
	EVENTSUBSYSTEM_API static class UScriptStruct* StaticStruct();


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_42_GENERATED_BODY \
	friend EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEventHandler(); \
	EVENTSUBSYSTEM_API static class UScriptStruct* StaticStruct();


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallEventSafely) \
	{ \
		P_GET_STRUCT_REF(FEventBase,Z_Param_Out_EventToCall); \
		P_GET_OBJECT(UScriptStruct,Z_Param_EventClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEventManager::CallEventSafely(Z_Param_Out_EventToCall,Z_Param_EventClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallEvent) \
	{ \
		P_GET_STRUCT_REF(FEventBase,Z_Param_Out_EventToCall); \
		P_GET_OBJECT(UScriptStruct,Z_Param_EventClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CallEvent(Z_Param_Out_EventToCall,Z_Param_EventClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterSingleEvent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_OBJECT(UScriptStruct,Z_Param_EventClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnregisterSingleEvent(Z_Param_Object,Z_Param_EventClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterEvents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnregisterEvents(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterSingleEvent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_OBJECT(UScriptStruct,Z_Param_EventClass); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EEventRegistrationResult::Type>*)Z_Param__Result=this->RegisterSingleEvent(Z_Param_Object,Z_Param_EventClass,EListenerPriority::Type(Z_Param_Priority)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterEvents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EEventRegistrationResult::Type>*)Z_Param__Result=this->RegisterEvents(Z_Param_Object,EListenerPriority::Type(Z_Param_Priority)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEventManager**)Z_Param__Result=UEventManager::GetInstance(); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallEventSafely) \
	{ \
		P_GET_STRUCT_REF(FEventBase,Z_Param_Out_EventToCall); \
		P_GET_OBJECT(UScriptStruct,Z_Param_EventClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEventManager::CallEventSafely(Z_Param_Out_EventToCall,Z_Param_EventClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallEvent) \
	{ \
		P_GET_STRUCT_REF(FEventBase,Z_Param_Out_EventToCall); \
		P_GET_OBJECT(UScriptStruct,Z_Param_EventClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CallEvent(Z_Param_Out_EventToCall,Z_Param_EventClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterSingleEvent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_OBJECT(UScriptStruct,Z_Param_EventClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnregisterSingleEvent(Z_Param_Object,Z_Param_EventClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterEvents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnregisterEvents(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterSingleEvent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_OBJECT(UScriptStruct,Z_Param_EventClass); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EEventRegistrationResult::Type>*)Z_Param__Result=this->RegisterSingleEvent(Z_Param_Object,Z_Param_EventClass,EListenerPriority::Type(Z_Param_Priority)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterEvents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EEventRegistrationResult::Type>*)Z_Param__Result=this->RegisterEvents(Z_Param_Object,EListenerPriority::Type(Z_Param_Priority)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEventManager**)Z_Param__Result=UEventManager::GetInstance(); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventManager(); \
	friend EVENTSUBSYSTEM_API class UClass* Z_Construct_UClass_UEventManager(); \
public: \
	DECLARE_CLASS(UEventManager, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EventSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UEventManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUEventManager(); \
	friend EVENTSUBSYSTEM_API class UClass* Z_Construct_UClass_UEventManager(); \
public: \
	DECLARE_CLASS(UEventManager, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EventSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UEventManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventManager(UEventManager&&); \
	NO_API UEventManager(const UEventManager&); \
public:


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventManager(UEventManager&&); \
	NO_API UEventManager(const UEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventManager)


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MappedEvents() { return STRUCT_OFFSET(UEventManager, MappedEvents); }


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_108_PROLOG
#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_RPC_WRAPPERS \
	ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_INCLASS \
	ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_INCLASS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZAR_4_16_Plugins_EventSubsystem_Source_EventSubsystem_Public_Communication_EventManager_h


#define FOREACH_ENUM_EEVENTREGISTRATIONRESULT(op) \
	op(EEventRegistrationResult::Success) \
	op(EEventRegistrationResult::AlreadyRegistered) \
	op(EEventRegistrationResult::FailedToFindHandler) \
	op(EEventRegistrationResult::NoHandlersFound) \
	op(EEventRegistrationResult::InvalidInput) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
