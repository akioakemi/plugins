// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FBPActorGripInformation;
class UGripMotionControllerComponent;
struct FVector;
struct FBPInteractionSettings;
struct FTransform;
struct FBPAdvGripPhysicsSettings;
enum class EGripLateUpdateSettings : uint8;
enum class EGripMovementReplicationSettings : uint8;
enum class ESecondaryGripType : uint8;
enum class EGripCollisionType : uint8;
enum class EGripInterfaceTeleportBehavior : uint8;
#ifdef VREXPANSIONPLUGIN_GrippableBoxComponent_generated_h
#error "GrippableBoxComponent.generated.h already included, missing '#pragma once' in GrippableBoxComponent.h"
#endif
#define VREXPANSIONPLUGIN_GrippableBoxComponent_generated_h

#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_RPC_WRAPPERS \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, FVector MControllerLocDelta, float DeltaTime); \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation(); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, bool bIsHeld); \
	virtual void IsHeld_Implementation(UGripMotionControllerComponent*& HoldingController, bool& bIsHeld); \
	virtual bool IsInteractible_Implementation(); \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName OverridePrefix); \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripPhysicsSettings AdvancedPhysicsSettings_Implementation(); \
	virtual float GripDamping_Implementation(); \
	virtual float GripStiffness_Implementation(); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual EGripCollisionType FreeGripType_Implementation(); \
	virtual EGripCollisionType SlotGripType_Implementation(); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execOnEndSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryGripRelease_Implementation(Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGrip) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryGrip_Implementation(Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_STRUCT(FVector,Z_Param_MControllerLocDelta); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_MControllerLocDelta,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPInteractionSettings*)Z_Param__Result=this->GetInteractionSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeld) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_HoldingController); \
		P_GET_UBOOL(Z_Param_bIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeld_Implementation(Z_Param_HoldingController,Z_Param_bIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeld) \
	{ \
		P_GET_OBJECT_REF(UGripMotionControllerComponent,Z_Param_Out_HoldingController); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsHeld_Implementation(Z_Param_Out_HoldingController,Z_Param_Out_bIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInteractible_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPrimarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestPrimarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestSecondarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestSecondarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdvancedPhysicsSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPAdvGripPhysicsSettings*)Z_Param__Result=this->AdvancedPhysicsSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripDamping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripStiffness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripStiffness_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripLateUpdateSettings*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripMovementReplicationSettings*)Z_Param__Result=this->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESecondaryGripType*)Z_Param__Result=this->SecondaryGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=this->FreeGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=this->SlotGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=this->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, FVector MControllerLocDelta, float DeltaTime); \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation(); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, bool bIsHeld); \
	virtual void IsHeld_Implementation(UGripMotionControllerComponent*& HoldingController, bool& bIsHeld); \
	virtual bool IsInteractible_Implementation(); \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName OverridePrefix); \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripPhysicsSettings AdvancedPhysicsSettings_Implementation(); \
	virtual float GripDamping_Implementation(); \
	virtual float GripStiffness_Implementation(); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual EGripCollisionType FreeGripType_Implementation(); \
	virtual EGripCollisionType SlotGripType_Implementation(); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execOnEndSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryGripRelease_Implementation(Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGrip) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryGrip_Implementation(Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_STRUCT(FVector,Z_Param_MControllerLocDelta); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_MControllerLocDelta,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPInteractionSettings*)Z_Param__Result=this->GetInteractionSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeld) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_HoldingController); \
		P_GET_UBOOL(Z_Param_bIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeld_Implementation(Z_Param_HoldingController,Z_Param_bIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeld) \
	{ \
		P_GET_OBJECT_REF(UGripMotionControllerComponent,Z_Param_Out_HoldingController); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsHeld_Implementation(Z_Param_Out_HoldingController,Z_Param_Out_bIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInteractible_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPrimarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestPrimarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestSecondarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestSecondarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdvancedPhysicsSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPAdvGripPhysicsSettings*)Z_Param__Result=this->AdvancedPhysicsSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripDamping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripStiffness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripStiffness_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripLateUpdateSettings*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripMovementReplicationSettings*)Z_Param__Result=this->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESecondaryGripType*)Z_Param__Result=this->SecondaryGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=this->FreeGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=this->SlotGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=this->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_EVENT_PARMS \
	struct GrippableBoxComponent_eventAdvancedPhysicsSettings_Parms \
	{ \
		FBPAdvGripPhysicsSettings ReturnValue; \
	}; \
	struct GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		FName OverridePrefix; \
	}; \
	struct GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		FName OverridePrefix; \
	}; \
	struct GrippableBoxComponent_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventFreeGripType_Parms \
	{ \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventFreeGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGetInteractionSettings_Parms \
	{ \
		FBPInteractionSettings ReturnValue; \
	}; \
	struct GrippableBoxComponent_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGripDamping_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripDamping_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGripLateUpdateSetting_Parms \
	{ \
		EGripLateUpdateSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripLateUpdateSetting_Parms() \
			: ReturnValue((EGripLateUpdateSettings)0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGripMovementReplicationType_Parms \
	{ \
		EGripMovementReplicationSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripMovementReplicationType_Parms() \
			: ReturnValue((EGripMovementReplicationSettings)0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGripStiffness_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripStiffness_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventIsHeld_Parms \
	{ \
		UGripMotionControllerComponent* HoldingController; \
		bool bIsHeld; \
	}; \
	struct GrippableBoxComponent_eventIsInteractible_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventIsInteractible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventOnChildGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableBoxComponent_eventOnChildGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableBoxComponent_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableBoxComponent_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableBoxComponent_eventOnSecondaryGrip_Parms \
	{ \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableBoxComponent_eventOnSecondaryGripRelease_Parms \
	{ \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableBoxComponent_eventSecondaryGripType_Parms \
	{ \
		ESecondaryGripType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventSecondaryGripType_Parms() \
			: ReturnValue((ESecondaryGripType)0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventSetHeld_Parms \
	{ \
		UGripMotionControllerComponent* HoldingController; \
		bool bIsHeld; \
	}; \
	struct GrippableBoxComponent_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventSlotGripType_Parms \
	{ \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventSlotGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventTeleportBehavior_Parms \
	{ \
		EGripInterfaceTeleportBehavior ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventTeleportBehavior_Parms() \
			: ReturnValue((EGripInterfaceTeleportBehavior)0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventTickGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
		FVector MControllerLocDelta; \
		float DeltaTime; \
	};


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_CALLBACK_WRAPPERS
#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrippableBoxComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGrippableBoxComponent(); \
public: \
	DECLARE_CLASS(UGrippableBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableBoxComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableBoxComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGrippableBoxComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGrippableBoxComponent(); \
public: \
	DECLARE_CLASS(UGrippableBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableBoxComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableBoxComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableBoxComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableBoxComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableBoxComponent(UGrippableBoxComponent&&); \
	NO_API UGrippableBoxComponent(const UGrippableBoxComponent&); \
public:


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableBoxComponent(UGrippableBoxComponent&&); \
	NO_API UGrippableBoxComponent(const UGrippableBoxComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableBoxComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableBoxComponent)


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_17_PROLOG \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_EVENT_PARMS


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_RPC_WRAPPERS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_CALLBACK_WRAPPERS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_INCLASS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_CALLBACK_WRAPPERS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_INCLASS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GrippableBoxComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
