// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize10;
struct FVector_NetQuantize100;
class UPrimitiveComponent;
#ifdef VREXPANSIONPLUGIN_VRCharacterMovementComponent_generated_h
#error "VRCharacterMovementComponent.generated.h already included, missing '#pragma once' in VRCharacterMovementComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRCharacterMovementComponent_generated_h

#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_RPC_WRAPPERS \
	virtual bool ServerMoveVRDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , uint8 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , uint8 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVector_NetQuantize100 rOldRequestedVelocity, FVector_NetQuantize100 OldLFDiff, FVector_NetQuantize100 OldCustVRInputVector, uint8 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVector_NetQuantize100 rRequestedVelocity, FVector_NetQuantize100 LFDiff, FVector_NetQuantize100 CustVRInputVector, uint8 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , uint8 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , uint8 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVector_NetQuantize100 rOldRequestedVelocity, FVector_NetQuantize100 OldLFDiff, FVector_NetQuantize100 OldCustVRInputVector, uint8 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVector_NetQuantize100 rRequestedVelocity, FVector_NetQuantize100 LFDiff, FVector_NetQuantize100 CustVRInputVector, uint8 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVR_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVector_NetQuantize100 , uint8 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVR_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVector_NetQuantize100 rRequestedVelocity, FVector_NetQuantize100 LFDiff, FVector_NetQuantize100 CustVRInputVector, uint8 CapsuleYaw, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rOldRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_rOldRequestedVelocity,Z_Param_OldLFDiff,Z_Param_OldCustVRInputVector,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_rOldRequestedVelocity,Z_Param_OldLFDiff,Z_Param_OldCustVRInputVector,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rOldRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_rOldRequestedVelocity,Z_Param_OldLFDiff,Z_Param_OldCustVRInputVector,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual_Validate")); \
			return; \
		} \
		this->ServerMoveVRDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_rOldRequestedVelocity,Z_Param_OldLFDiff,Z_Param_OldCustVRInputVector,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVR_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR_Validate")); \
			return; \
		} \
		this->ServerMoveVR_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rOldRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_rOldRequestedVelocity,Z_Param_OldLFDiff,Z_Param_OldCustVRInputVector,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_rOldRequestedVelocity,Z_Param_OldLFDiff,Z_Param_OldCustVRInputVector,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rOldRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_rOldRequestedVelocity,Z_Param_OldLFDiff,Z_Param_OldCustVRInputVector,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual_Validate")); \
			return; \
		} \
		this->ServerMoveVRDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_rOldRequestedVelocity,Z_Param_OldLFDiff,Z_Param_OldCustVRInputVector,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_rRequestedVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CustVRInputVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVR_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR_Validate")); \
			return; \
		} \
		this->ServerMoveVR_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_rRequestedVelocity,Z_Param_LFDiff,Z_Param_CustVRInputVector,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_EVENT_PARMS \
	struct VRCharacterMovementComponent_eventServerMoveVR_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVector_NetQuantize100 rRequestedVelocity; \
		FVector_NetQuantize100 LFDiff; \
		FVector_NetQuantize100 CustVRInputVector; \
		uint8 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVector_NetQuantize100 rOldRequestedVelocity; \
		FVector_NetQuantize100 OldLFDiff; \
		FVector_NetQuantize100 OldCustVRInputVector; \
		uint8 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVector_NetQuantize100 rRequestedVelocity; \
		FVector_NetQuantize100 LFDiff; \
		FVector_NetQuantize100 CustVRInputVector; \
		uint8 CapsuleYaw; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVector_NetQuantize100 rOldRequestedVelocity; \
		FVector_NetQuantize100 OldLFDiff; \
		FVector_NetQuantize100 OldCustVRInputVector; \
		uint8 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVector_NetQuantize100 rRequestedVelocity; \
		FVector_NetQuantize100 LFDiff; \
		FVector_NetQuantize100 CustVRInputVector; \
		uint8 CapsuleYaw; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	};


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_CALLBACK_WRAPPERS
#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRCharacterMovementComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRCharacterMovementComponent(); \
public: \
	DECLARE_CLASS(UVRCharacterMovementComponent, UVRBaseCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRCharacterMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUVRCharacterMovementComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRCharacterMovementComponent(); \
public: \
	DECLARE_CLASS(UVRCharacterMovementComponent, UVRBaseCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRCharacterMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRCharacterMovementComponent(UVRCharacterMovementComponent&&); \
	NO_API UVRCharacterMovementComponent(const UVRCharacterMovementComponent&); \
public:


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRCharacterMovementComponent(UVRCharacterMovementComponent&&); \
	NO_API UVRCharacterMovementComponent(const UVRCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRCharacterMovementComponent)


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_PRIVATE_PROPERTY_OFFSET
#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_69_PROLOG \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_EVENT_PARMS


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_RPC_WRAPPERS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_CALLBACK_WRAPPERS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_INCLASS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_CALLBACK_WRAPPERS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_INCLASS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZAR_4_16_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
