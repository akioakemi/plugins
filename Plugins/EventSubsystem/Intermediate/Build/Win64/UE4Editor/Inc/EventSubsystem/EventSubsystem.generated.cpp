// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/EventSubsystemPrivatePCH.h"
#include "EventSubsystem.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1EventSubsystem() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AController_NoRegister();

	EVENTSUBSYSTEM_API class UEnum* Z_Construct_UEnum_EventSubsystem_EListenerPriority();
	EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEventBase();
	EVENTSUBSYSTEM_API class UEnum* Z_Construct_UEnum_EventSubsystem_EEventRegistrationResult();
	EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEventSection();
	EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FDummy();
	EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEventHandler();
	EVENTSUBSYSTEM_API class UFunction* Z_Construct_UFunction_UEventManager_CallEvent();
	EVENTSUBSYSTEM_API class UFunction* Z_Construct_UFunction_UEventManager_CallEventSafely();
	EVENTSUBSYSTEM_API class UFunction* Z_Construct_UFunction_UEventManager_GetInstance();
	EVENTSUBSYSTEM_API class UFunction* Z_Construct_UFunction_UEventManager_RegisterEvents();
	EVENTSUBSYSTEM_API class UFunction* Z_Construct_UFunction_UEventManager_RegisterSingleEvent();
	EVENTSUBSYSTEM_API class UFunction* Z_Construct_UFunction_UEventManager_UnregisterEvents();
	EVENTSUBSYSTEM_API class UFunction* Z_Construct_UFunction_UEventManager_UnregisterSingleEvent();
	EVENTSUBSYSTEM_API class UClass* Z_Construct_UClass_UEventManager_NoRegister();
	EVENTSUBSYSTEM_API class UClass* Z_Construct_UClass_UEventManager();
	EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEntityDeathEvent();
	EVENTSUBSYSTEM_API class UPackage* Z_Construct_UPackage__Script_EventSubsystem();
static UEnum* EListenerPriority_StaticEnum()
{
	extern EVENTSUBSYSTEM_API class UPackage* Z_Construct_UPackage__Script_EventSubsystem();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern EVENTSUBSYSTEM_API class UEnum* Z_Construct_UEnum_EventSubsystem_EListenerPriority();
		Singleton = GetStaticEnum(Z_Construct_UEnum_EventSubsystem_EListenerPriority, Z_Construct_UPackage__Script_EventSubsystem(), TEXT("EListenerPriority"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EListenerPriority(EListenerPriority_StaticEnum, TEXT("/Script/EventSubsystem"), TEXT("EListenerPriority"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_EventSubsystem_EListenerPriority()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_EventSubsystem();
		extern uint32 Get_Z_Construct_UEnum_EventSubsystem_EListenerPriority_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EListenerPriority"), 0, Get_Z_Construct_UEnum_EventSubsystem_EListenerPriority_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EListenerPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EListenerPriority::Lowest"), 0);
			EnumNames.Emplace(TEXT("EListenerPriority::Low"), 1);
			EnumNames.Emplace(TEXT("EListenerPriority::Normal"), 2);
			EnumNames.Emplace(TEXT("EListenerPriority::High"), 3);
			EnumNames.Emplace(TEXT("EListenerPriority::Highest"), 4);
			EnumNames.Emplace(TEXT("EListenerPriority::Monitor"), 5);
			EnumNames.Emplace(TEXT("EListenerPriority::EListenerPriority_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EListenerPriority::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("High.DisplayName"), TEXT("Lowest"));
			MetaData->SetValue(ReturnEnum, TEXT("Highest.DisplayName"), TEXT("Lowest"));
			MetaData->SetValue(ReturnEnum, TEXT("Low.DisplayName"), TEXT("Lowest"));
			MetaData->SetValue(ReturnEnum, TEXT("Lowest.DisplayName"), TEXT("Lowest"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Communication/ListenerPriority.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Monitor.DisplayName"), TEXT("Lowest"));
			MetaData->SetValue(ReturnEnum, TEXT("Monitor.ToolTip"), TEXT("Listeners with the monitor priority may not modify an event's state, it is strictly for monitoring\nan event's outcome."));
			MetaData->SetValue(ReturnEnum, TEXT("Normal.DisplayName"), TEXT("Lowest"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("A listener's priority dictates how important an a listener's modifications to an event are.\nHigher priority listeners get the last say in an event's state."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_EventSubsystem_EListenerPriority_CRC() { return 2789054894U; }
class UScriptStruct* FEventBase::StaticStruct()
{
	extern EVENTSUBSYSTEM_API class UPackage* Z_Construct_UPackage__Script_EventSubsystem();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEventBase();
		extern EVENTSUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FEventBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventBase, Z_Construct_UPackage__Script_EventSubsystem(), TEXT("EventBase"), sizeof(FEventBase), Get_Z_Construct_UScriptStruct_FEventBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventBase(FEventBase::StaticStruct, TEXT("/Script/EventSubsystem"), TEXT("EventBase"), false, nullptr, nullptr);
static struct FScriptStruct_EventSubsystem_StaticRegisterNativesFEventBase
{
	FScriptStruct_EventSubsystem_StaticRegisterNativesFEventBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventBase")),new UScriptStruct::TCppStructOps<FEventBase>);
	}
} ScriptStruct_EventSubsystem_StaticRegisterNativesFEventBase;
	UScriptStruct* Z_Construct_UScriptStruct_FEventBase()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EventSubsystem();
		extern uint32 Get_Z_Construct_UScriptStruct_FEventBase_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventBase"), sizeof(FEventBase), Get_Z_Construct_UScriptStruct_FEventBase_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventBase"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FEventBase>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Events/EventBase.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Base-class for all events.\n\nThere are two types of events: Informing events and cancellable events.\n\nInforming events simply tell an event listener that something has happened, for example a player has just died.\n\nCancellable events are called at points in the game before an action is taken and they can be cancelled:\nFor instance, a PrePlayerDamageEvent is called before damage is applied to a player and if it is cancelled\nno damage will be applied to the player. Events which can be cancelled will have a property bCancelled.\n\nDesign note: It is not possible to have structs implement interfaces; this is the reason why cancellable events do not\nsimply implement an ICancellable interface but in fact must have a bCancelled property. The type of events will always\nbe known both to listeners and callers so this does not pose a problem."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventBase_CRC() { return 2143730336U; }
static UEnum* EEventRegistrationResult_StaticEnum()
{
	extern EVENTSUBSYSTEM_API class UPackage* Z_Construct_UPackage__Script_EventSubsystem();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern EVENTSUBSYSTEM_API class UEnum* Z_Construct_UEnum_EventSubsystem_EEventRegistrationResult();
		Singleton = GetStaticEnum(Z_Construct_UEnum_EventSubsystem_EEventRegistrationResult, Z_Construct_UPackage__Script_EventSubsystem(), TEXT("EEventRegistrationResult"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEventRegistrationResult(EEventRegistrationResult_StaticEnum, TEXT("/Script/EventSubsystem"), TEXT("EEventRegistrationResult"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_EventSubsystem_EEventRegistrationResult()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_EventSubsystem();
		extern uint32 Get_Z_Construct_UEnum_EventSubsystem_EEventRegistrationResult_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEventRegistrationResult"), 0, Get_Z_Construct_UEnum_EventSubsystem_EEventRegistrationResult_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EEventRegistrationResult"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EEventRegistrationResult::Success"), 0);
			EnumNames.Emplace(TEXT("EEventRegistrationResult::AlreadyRegistered"), 1);
			EnumNames.Emplace(TEXT("EEventRegistrationResult::FailedToFindHandler"), 2);
			EnumNames.Emplace(TEXT("EEventRegistrationResult::NoHandlersFound"), 3);
			EnumNames.Emplace(TEXT("EEventRegistrationResult::InvalidInput"), 4);
			EnumNames.Emplace(TEXT("EEventRegistrationResult::EEventRegistrationResult_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EEventRegistrationResult::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("AlreadyRegistered.DisplayName"), TEXT("AlreadyRegistered"));
			MetaData->SetValue(ReturnEnum, TEXT("AlreadyRegistered.ToolTip"), TEXT("Failed to register event because it was already registered."));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("FailedToFindHandler.DisplayName"), TEXT("Failed to find Handler"));
			MetaData->SetValue(ReturnEnum, TEXT("FailedToFindHandler.ToolTip"), TEXT("Failed to register event because no handler function was found (only for RegisterSingleEvent)."));
			MetaData->SetValue(ReturnEnum, TEXT("InvalidInput.DisplayName"), TEXT("Invalid input"));
			MetaData->SetValue(ReturnEnum, TEXT("InvalidInput.ToolTip"), TEXT("The method was called with invalid arguments."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NoHandlersFound.DisplayName"), TEXT("No handlers found"));
			MetaData->SetValue(ReturnEnum, TEXT("NoHandlersFound.ToolTip"), TEXT("Failed to find at least one handler function (only for RegisterEvents)"));
			MetaData->SetValue(ReturnEnum, TEXT("Success.DisplayName"), TEXT("Success"));
			MetaData->SetValue(ReturnEnum, TEXT("Success.ToolTip"), TEXT("Successfully registered event."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_EventSubsystem_EEventRegistrationResult_CRC() { return 812973423U; }
class UScriptStruct* FEventSection::StaticStruct()
{
	extern EVENTSUBSYSTEM_API class UPackage* Z_Construct_UPackage__Script_EventSubsystem();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEventSection();
		extern EVENTSUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FEventSection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventSection, Z_Construct_UPackage__Script_EventSubsystem(), TEXT("EventSection"), sizeof(FEventSection), Get_Z_Construct_UScriptStruct_FEventSection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventSection(FEventSection::StaticStruct, TEXT("/Script/EventSubsystem"), TEXT("EventSection"), false, nullptr, nullptr);
static struct FScriptStruct_EventSubsystem_StaticRegisterNativesFEventSection
{
	FScriptStruct_EventSubsystem_StaticRegisterNativesFEventSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventSection")),new UScriptStruct::TCppStructOps<FEventSection>);
	}
} ScriptStruct_EventSubsystem_StaticRegisterNativesFEventSection;
	UScriptStruct* Z_Construct_UScriptStruct_FEventSection()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EventSubsystem();
		extern uint32 Get_Z_Construct_UScriptStruct_FEventSection_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventSection"), sizeof(FEventSection), Get_Z_Construct_UScriptStruct_FEventSection_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventSection"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FEventSection>, EStructFlags(0x00000001));
			UProperty* NewProp_EventHandlersWithPriorities = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EventHandlersWithPriorities"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventHandlersWithPriorities, FEventSection), 0x0010000000000000);
			UProperty* NewProp_EventHandlersWithPriorities_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventHandlersWithPriorities, TEXT("EventHandlersWithPriorities"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FDummy());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Stores information for event handling and thread-safely adding/removing event handlers."));
			MetaData->SetValue(NewProp_EventHandlersWithPriorities, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(NewProp_EventHandlersWithPriorities, TEXT("ToolTip"), TEXT("Every value of EListenerPriority is a valid index. At each index stores the event handlers,\nwith the priority of the associated index."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventSection_CRC() { return 2994184893U; }
class UScriptStruct* FDummy::StaticStruct()
{
	extern EVENTSUBSYSTEM_API class UPackage* Z_Construct_UPackage__Script_EventSubsystem();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FDummy();
		extern EVENTSUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDummy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDummy, Z_Construct_UPackage__Script_EventSubsystem(), TEXT("Dummy"), sizeof(FDummy), Get_Z_Construct_UScriptStruct_FDummy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDummy(FDummy::StaticStruct, TEXT("/Script/EventSubsystem"), TEXT("Dummy"), false, nullptr, nullptr);
static struct FScriptStruct_EventSubsystem_StaticRegisterNativesFDummy
{
	FScriptStruct_EventSubsystem_StaticRegisterNativesFDummy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Dummy")),new UScriptStruct::TCppStructOps<FDummy>);
	}
} ScriptStruct_EventSubsystem_StaticRegisterNativesFDummy;
	UScriptStruct* Z_Construct_UScriptStruct_FDummy()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EventSubsystem();
		extern uint32 Get_Z_Construct_UScriptStruct_FDummy_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Dummy"), sizeof(FDummy), Get_Z_Construct_UScriptStruct_FDummy_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Dummy"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDummy>, EStructFlags(0x00000001));
			UProperty* NewProp_Dummy = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Dummy"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Dummy, FDummy), 0x0010000000000000);
			UProperty* NewProp_Dummy_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Dummy, TEXT("Dummy"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FEventHandler());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Dummy structure for FEventSection because Unreal Header Tool does not allow TArray<TArray<>>."));
			MetaData->SetValue(NewProp_Dummy, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDummy_CRC() { return 983770870U; }
class UScriptStruct* FEventHandler::StaticStruct()
{
	extern EVENTSUBSYSTEM_API class UPackage* Z_Construct_UPackage__Script_EventSubsystem();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEventHandler();
		extern EVENTSUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FEventHandler_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventHandler, Z_Construct_UPackage__Script_EventSubsystem(), TEXT("EventHandler"), sizeof(FEventHandler), Get_Z_Construct_UScriptStruct_FEventHandler_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventHandler(FEventHandler::StaticStruct, TEXT("/Script/EventSubsystem"), TEXT("EventHandler"), false, nullptr, nullptr);
static struct FScriptStruct_EventSubsystem_StaticRegisterNativesFEventHandler
{
	FScriptStruct_EventSubsystem_StaticRegisterNativesFEventHandler()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventHandler")),new UScriptStruct::TCppStructOps<FEventHandler>);
	}
} ScriptStruct_EventSubsystem_StaticRegisterNativesFEventHandler;
	UScriptStruct* Z_Construct_UScriptStruct_FEventHandler()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EventSubsystem();
		extern uint32 Get_Z_Construct_UScriptStruct_FEventHandler_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventHandler"), sizeof(FEventHandler), Get_Z_Construct_UScriptStruct_FEventHandler_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventHandler"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FEventHandler>, EStructFlags(0x00000001));
			UProperty* NewProp_This = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("This"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(This, FEventHandler), 0x0010000000000000, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_Function = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Function"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Function, FEventHandler), 0x0010000000000000, UFunction::StaticClass());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(NewProp_This, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(NewProp_This, TEXT("ToolTip"), TEXT("The this pointer of the function."));
			MetaData->SetValue(NewProp_Function, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(NewProp_Function, TEXT("ToolTip"), TEXT("The function to call for a certain event."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventHandler_CRC() { return 4171781417U; }
	void UEventManager::StaticRegisterNativesUEventManager()
	{
		UClass* Class = UEventManager::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CallEvent", (Native)&UEventManager::execCallEvent },
			{ "CallEventSafely", (Native)&UEventManager::execCallEventSafely },
			{ "GetInstance", (Native)&UEventManager::execGetInstance },
			{ "RegisterEvents", (Native)&UEventManager::execRegisterEvents },
			{ "RegisterSingleEvent", (Native)&UEventManager::execRegisterSingleEvent },
			{ "UnregisterEvents", (Native)&UEventManager::execUnregisterEvents },
			{ "UnregisterSingleEvent", (Native)&UEventManager::execUnregisterSingleEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 7);
	}
	UFunction* Z_Construct_UFunction_UEventManager_CallEvent()
	{
		struct EventManager_eventCallEvent_Parms
		{
			FEventBase EventToCall;
			UScriptStruct* EventClass;
		};
		UObject* Outer=Z_Construct_UClass_UEventManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CallEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(EventManager_eventCallEvent_Parms));
			UProperty* NewProp_EventClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventClass"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EventClass, EventManager_eventCallEvent_Parms), 0x0010000000000080, UScriptStruct::StaticClass());
			UProperty* NewProp_EventToCall = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventToCall"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventToCall, EventManager_eventCallEvent_Parms), 0x0010000008000180, Z_Construct_UScriptStruct_FEventBase());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Event Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Calls an event.\n\nUseful for determining on how an action should be completed. For instance, if an object wishes to\napply damage to another entity, it could call an event and registered listeners may perform their logic\nand whether to add to the damage to apply. After an event call is complete, the event caller can apply the\nthat is now in the event structure.\n\n@param EventToCall The event to call; it may be modified.\n@param EventClass The result of calling StaticClass() on the type of the event."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEventManager_CallEventSafely()
	{
		struct EventManager_eventCallEventSafely_Parms
		{
			FEventBase EventToCall;
			UScriptStruct* EventClass;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UEventManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CallEventSafely"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14422401, 65535, sizeof(EventManager_eventCallEventSafely_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, EventManager_eventCallEventSafely_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, EventManager_eventCallEventSafely_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, EventManager_eventCallEventSafely_Parms), sizeof(bool), true);
			UProperty* NewProp_EventClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventClass"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EventClass, EventManager_eventCallEventSafely_Parms), 0x0010000000000080, UScriptStruct::StaticClass());
			UProperty* NewProp_EventToCall = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventToCall"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventToCall, EventManager_eventCallEventSafely_Parms), 0x0010000008000180, Z_Construct_UScriptStruct_FEventBase());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Event Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Performs CallEvent only if on the server.\n\n@return True, if the event was called, false, if not.\n\n@see CallEvent"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEventManager_GetInstance()
	{
		struct EventManager_eventGetInstance_Parms
		{
			UEventManager* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UEventManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(EventManager_eventGetInstance_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, EventManager_eventGetInstance_Parms), 0x0010000000000580, Z_Construct_UClass_UEventManager_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Event Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("@return Obtains the run-time event manager instance"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEventManager_RegisterEvents()
	{
		struct EventManager_eventRegisterEvents_Parms
		{
			UObject* Object;
			TEnumAsByte<EListenerPriority::Type> Priority;
			TEnumAsByte<EEventRegistrationResult::Type> ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UEventManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RegisterEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(EventManager_eventRegisterEvents_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ReturnValue, EventManager_eventRegisterEvents_Parms), 0x0010000000000580, Z_Construct_UEnum_EventSubsystem_EEventRegistrationResult());
			UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Priority, EventManager_eventRegisterEvents_Parms), 0x0010000000000080, Z_Construct_UEnum_EventSubsystem_EListenerPriority());
			UProperty* NewProp_Object = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Object"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Object, EventManager_eventRegisterEvents_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Event Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Priority"), TEXT("Normal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Registers the object passed to receive events; all event handling functions will have\nthe same priority as \"Priority\".\n\nThis method is thread-safe. It waits for all events to finish execution and then register\nthe object passed.\n\nThis method will search the object's class for UFunctions whose signatures fulfill:\n                     1. signature is a single parameter\n                     2. the parameter's type derives from FEventBase\n     Additionally the parameter should be reference; if it wishes to modify events, it must be a reference.\n\n@param Object The object which is registering for events.\n@param Priority The priority to register all events with. Higher priority listeners will get a last\n                                     say with what happens to the outcome of an event.\n\n@return The result of the attempted registration."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEventManager_RegisterSingleEvent()
	{
		struct EventManager_eventRegisterSingleEvent_Parms
		{
			UObject* Object;
			UScriptStruct* EventClass;
			TEnumAsByte<EListenerPriority::Type> Priority;
			TEnumAsByte<EEventRegistrationResult::Type> ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UEventManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RegisterSingleEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(EventManager_eventRegisterSingleEvent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ReturnValue, EventManager_eventRegisterSingleEvent_Parms), 0x0010000000000580, Z_Construct_UEnum_EventSubsystem_EEventRegistrationResult());
			UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Priority, EventManager_eventRegisterSingleEvent_Parms), 0x0010000000000080, Z_Construct_UEnum_EventSubsystem_EListenerPriority());
			UProperty* NewProp_EventClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventClass"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EventClass, EventManager_eventRegisterSingleEvent_Parms), 0x0010000000000080, UScriptStruct::StaticClass());
			UProperty* NewProp_Object = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Object"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Object, EventManager_eventRegisterSingleEvent_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Event Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Priority"), TEXT("Normal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Registers the object passed for the event identified by by \"EventClass\"; the event handling function will be given\nthe priority passed.\n\nThis method is thread-safe. It waits for all events to finish execution and then register\nthe object passed.\n\nThis method will search the object's class for the UFunction whose signature fulfills:\n                     1. signature is a single parameter\n                     2. the parameter's type derives from FEventBase\n                     3. the parameter is a reference (const or non-const).\n\n@param Object The object which is registering for events.\n@param EventClass The class of the event to register for as obtained by calling the static function StaticStruct(); the class must match\n                                     exactly the handler function's event type (no sub-classes may be passed).\n@param Priority The priority to register all events with. Higher priority listeners will get a last\n                                     say with what happens to the outcome of an event.\n\n@return The result of the attempted registration."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEventManager_UnregisterEvents()
	{
		struct EventManager_eventUnregisterEvents_Parms
		{
			UObject* Object;
		};
		UObject* Outer=Z_Construct_UClass_UEventManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnregisterEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(EventManager_eventUnregisterEvents_Parms));
			UProperty* NewProp_Object = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Object"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Object, EventManager_eventUnregisterEvents_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Event Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unregisters all event handles associated with the passed object.\n\nThis method is thread-safe. It waits for all events to finish execution and then register\nthe object passed.\n\n@param Object The object to unregister events for."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEventManager_UnregisterSingleEvent()
	{
		struct EventManager_eventUnregisterSingleEvent_Parms
		{
			UObject* Object;
			UScriptStruct* EventClass;
		};
		UObject* Outer=Z_Construct_UClass_UEventManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnregisterSingleEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(EventManager_eventUnregisterSingleEvent_Parms));
			UProperty* NewProp_EventClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventClass"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EventClass, EventManager_eventUnregisterSingleEvent_Parms), 0x0010000000000080, UScriptStruct::StaticClass());
			UProperty* NewProp_Object = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Object"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Object, EventManager_eventUnregisterSingleEvent_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Event Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unregisters the event handler for the passed event class associated with the passed object.\n\nThis method is thread-safe. It waits for all events to finish execution and then register\nthe object passed.\n\n@param Object The object to unregister an event for\n@param EventClass The event to unregister."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventManager_NoRegister()
	{
		return UEventManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UEventManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EventSubsystem();
			OuterClass = UEventManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UEventManager_CallEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_UEventManager_CallEventSafely());
				OuterClass->LinkChild(Z_Construct_UFunction_UEventManager_GetInstance());
				OuterClass->LinkChild(Z_Construct_UFunction_UEventManager_RegisterEvents());
				OuterClass->LinkChild(Z_Construct_UFunction_UEventManager_RegisterSingleEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_UEventManager_UnregisterEvents());
				OuterClass->LinkChild(Z_Construct_UFunction_UEventManager_UnregisterSingleEvent());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MappedEvents = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MappedEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(MappedEvents, UEventManager), 0x0040000000000000);
				UProperty* NewProp_MappedEvents_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_MappedEvents, TEXT("MappedEvents_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, UScriptStruct::StaticClass());
				UProperty* NewProp_MappedEvents_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_MappedEvents, TEXT("MappedEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000, Z_Construct_UScriptStruct_FEventSection());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEventManager_CallEvent(), "CallEvent"); // 751585447
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEventManager_CallEventSafely(), "CallEventSafely"); // 2773856906
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEventManager_GetInstance(), "GetInstance"); // 939628253
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEventManager_RegisterEvents(), "RegisterEvents"); // 3617374344
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEventManager_RegisterSingleEvent(), "RegisterSingleEvent"); // 2435930299
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEventManager_UnregisterEvents(), "UnregisterEvents"); // 2584063700
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEventManager_UnregisterSingleEvent(), "UnregisterSingleEvent"); // 2107439530
				static TCppClassTypeInfo<TCppClassTypeTraits<UEventManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Communication/EventManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Performs event handling and registration.\n\nCompile this code with SUPPORT_MUTLI_THREADING set to 1 in BuildConfiguration.h to allow mutlithreading support (default is 0).\nRegistering / unregistering listeners blocks all events for the duration of modiyfing the listners mapping. There exists a more\nefficient algorithm which will only blocks those events for which an object is registering, however, the trade-off between its\ncomplexity and its efficientcy is very low assuming most objects register while the map is loaded."));
				MetaData->SetValue(NewProp_MappedEvents, TEXT("ModuleRelativePath"), TEXT("Public/Communication/EventManager.h"));
				MetaData->SetValue(NewProp_MappedEvents, TEXT("ToolTip"), TEXT("Binds each event class registered so far to a set of handlers."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventManager, 3260310641);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventManager(Z_Construct_UClass_UEventManager, &UEventManager::StaticClass, TEXT("/Script/EventSubsystem"), TEXT("UEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventManager);
class UScriptStruct* FEntityDeathEvent::StaticStruct()
{
	extern EVENTSUBSYSTEM_API class UPackage* Z_Construct_UPackage__Script_EventSubsystem();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EVENTSUBSYSTEM_API class UScriptStruct* Z_Construct_UScriptStruct_FEntityDeathEvent();
		extern EVENTSUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FEntityDeathEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityDeathEvent, Z_Construct_UPackage__Script_EventSubsystem(), TEXT("EntityDeathEvent"), sizeof(FEntityDeathEvent), Get_Z_Construct_UScriptStruct_FEntityDeathEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEntityDeathEvent(FEntityDeathEvent::StaticStruct, TEXT("/Script/EventSubsystem"), TEXT("EntityDeathEvent"), false, nullptr, nullptr);
static struct FScriptStruct_EventSubsystem_StaticRegisterNativesFEntityDeathEvent
{
	FScriptStruct_EventSubsystem_StaticRegisterNativesFEntityDeathEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EntityDeathEvent")),new UScriptStruct::TCppStructOps<FEntityDeathEvent>);
	}
} ScriptStruct_EventSubsystem_StaticRegisterNativesFEntityDeathEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FEntityDeathEvent()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EventSubsystem();
		extern uint32 Get_Z_Construct_UScriptStruct_FEntityDeathEvent_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EntityDeathEvent"), sizeof(FEntityDeathEvent), Get_Z_Construct_UScriptStruct_FEntityDeathEvent_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EntityDeathEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FEventBase(), new UScriptStruct::TCppStructOps<FEntityDeathEvent>, EStructFlags(0x00000001));
			UProperty* NewProp_DeadPawn = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DeadPawn"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DeadPawn, FEntityDeathEvent), 0x0010000000000014, Z_Construct_UClass_APawn_NoRegister());
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FEntityDeathEvent), 0x0010000000000014, Z_Construct_UClass_AController_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Events/Entity/EntityDeathEvent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Called when an entity (usually player) dies.\n\nInforming event."));
			MetaData->SetValue(NewProp_DeadPawn, TEXT("Category"), TEXT("Entity Death Event"));
			MetaData->SetValue(NewProp_DeadPawn, TEXT("ModuleRelativePath"), TEXT("Public/Events/Entity/EntityDeathEvent.h"));
			MetaData->SetValue(NewProp_DeadPawn, TEXT("ToolTip"), TEXT("The pawn which died."));
			MetaData->SetValue(NewProp_Controller, TEXT("Category"), TEXT("Entity Death Event"));
			MetaData->SetValue(NewProp_Controller, TEXT("ModuleRelativePath"), TEXT("Public/Events/Entity/EntityDeathEvent.h"));
			MetaData->SetValue(NewProp_Controller, TEXT("ToolTip"), TEXT("The controller that owned the now dead pawn."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEntityDeathEvent_CRC() { return 2662468549U; }
	UPackage* Z_Construct_UPackage__Script_EventSubsystem()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/EventSubsystem")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x8405DDF3;
			Guid.B = 0xD7D12C44;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
