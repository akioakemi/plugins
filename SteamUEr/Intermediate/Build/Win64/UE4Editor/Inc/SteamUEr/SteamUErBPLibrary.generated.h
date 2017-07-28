// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
class UTexture2D;
class UObject;
struct FSteamUErLeaderboardData;
enum class ESteamUErScoreTypeEnum : uint8;
struct FSteamUErLeaderboardCreationData;
#ifdef STEAMUER_SteamUErBPLibrary_generated_h
#error "SteamUErBPLibrary.generated.h already included, missing '#pragma once' in SteamUErBPLibrary.h"
#endif
#define STEAMUER_SteamUErBPLibrary_generated_h

#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSteamUErGetGlobalStatFloatBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetGlobalStatFloatBool(Z_Param_statName,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetGlobalStatIntBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetGlobalStatIntBool(Z_Param_statName,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErInvalidateGlobalStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamUErBPLibrary::SteamUErInvalidateGlobalStats(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGlobalStatsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGlobalStatsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErCurrentPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USteamUErBPLibrary::SteamUErCurrentPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErCurrentPlayersReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErCurrentPlayersReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestCurrentPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestCurrentPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestGlobalStats) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numDays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestGlobalStats(Z_Param_numDays); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetStatFloatBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetStatFloatBool(Z_Param_statName,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetStatFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetStatFloat(Z_Param_statName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetStatIntBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetStatIntBool(Z_Param_statName,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetStatInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetStatInt(Z_Param_statName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErSetStatFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErSetStatFloat(Z_Param_statName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErSetStatInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErSetStatInt(Z_Param_statName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErResetAllStats) \
	{ \
		P_GET_UBOOL(Z_Param_achievementsToo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErResetAllStats(Z_Param_achievementsToo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievementName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_achievementNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievementName(Z_Param_achievementNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErNumAchievements) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USteamUErBPLibrary::SteamUErNumAchievements(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErClearAchievement) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErClearAchievement(Z_Param_achievementName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievement) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievement(Z_Param_achievementName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErSetAchievement) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErSetAchievement(Z_Param_achievementName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievementUnLockedTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_GET_UBOOL_REF(Z_Param_Out_unlockStatus); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_unlockTimestamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievementUnLockedTime(Z_Param_achievementName,Z_Param_Out_unlockStatus,Z_Param_Out_unlockTimestamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievementDisplayAttribute) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_localisedName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_localisedDescription); \
		P_GET_UBOOL_REF(Z_Param_Out_isHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievementDisplayAttribute(Z_Param_achievementName,Z_Param_Out_localisedName,Z_Param_Out_localisedDescription,Z_Param_Out_isHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievementIcon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievementIcon(Z_Param_achievementName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetPlayerAvatar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=USteamUErBPLibrary::SteamUErGetPlayerAvatar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetPlayMode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetPlayMode(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErConvertDateTimeToString) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_unlockTimestamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USteamUErBPLibrary::SteamUErConvertDateTimeToString(Z_Param_unlockTimestamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErIsSteamConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErIsSteamConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestPlayerFromLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestPlayerFromLeaderboard(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetUserLeaderboardData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_TARRAY_REF(FSteamUErLeaderboardData,Z_Param_Out_leaderboardData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetUserLeaderboardData(Z_Param_leaderboardName,Z_Param_Out_leaderboardData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErUserLeaderboardDataReady) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErUserLeaderboardDataReady(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestLeaderboardFromLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_userNameSourceLeaderboard); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestLeaderboardFromLeaderboard(Z_Param_leaderboardName,Z_Param_userNameSourceLeaderboard); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numScores); \
		P_GET_ENUM(ESteamUErScoreTypeEnum,Z_Param_leaderboardType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestLeaderboard(Z_Param_leaderboardName,Z_Param_numScores,ESteamUErScoreTypeEnum(Z_Param_leaderboardType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetLeaderboardAvatars) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UTexture2D*>*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetLeaderboardAvatars(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_TARRAY_REF(FSteamUErLeaderboardData,Z_Param_Out_leaderboardData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetLeaderboard(Z_Param_leaderboardName,Z_Param_Out_leaderboardData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetLeaderboardReady) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetLeaderboardReady(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErUploadScoreToLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErUploadScoreToLeaderboard(Z_Param_leaderboardName,Z_Param_score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErPingAsynchronous) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_scoreSetWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_leaderboardGetWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_userLeaderboardGetWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_globalStatsWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_globalPlayerCountWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_globalAchievementPercentagesWaiting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErPingAsynchronous(Z_Param_Out_scoreSetWaiting,Z_Param_Out_leaderboardGetWaiting,Z_Param_Out_userLeaderboardGetWaiting,Z_Param_Out_globalStatsWaiting,Z_Param_Out_globalPlayerCountWaiting,Z_Param_Out_globalAchievementPercentagesWaiting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetLeaderboardInited) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetLeaderboardInited(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErCloseLeaderboards) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErCloseLeaderboards(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErInitOrCreateLeaderboards) \
	{ \
		P_GET_TARRAY(FSteamUErLeaderboardCreationData,Z_Param_leaderboardCreationList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErInitOrCreateLeaderboards(Z_Param_leaderboardCreationList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErInitLeaderboards) \
	{ \
		P_GET_TARRAY(FString,Z_Param_leaderboardNames); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numLeaderboardItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErInitLeaderboards(Z_Param_leaderboardNames,Z_Param_numLeaderboardItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErInitLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numLeaderboardItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErInitLeaderboard(Z_Param_leaderboardName,Z_Param_numLeaderboardItems); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSteamUErGetGlobalStatFloatBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetGlobalStatFloatBool(Z_Param_statName,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetGlobalStatIntBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetGlobalStatIntBool(Z_Param_statName,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErInvalidateGlobalStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamUErBPLibrary::SteamUErInvalidateGlobalStats(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGlobalStatsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGlobalStatsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErCurrentPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USteamUErBPLibrary::SteamUErCurrentPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErCurrentPlayersReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErCurrentPlayersReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestCurrentPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestCurrentPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestGlobalStats) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numDays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestGlobalStats(Z_Param_numDays); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetStatFloatBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetStatFloatBool(Z_Param_statName,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetStatFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetStatFloat(Z_Param_statName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetStatIntBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetStatIntBool(Z_Param_statName,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetStatInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetStatInt(Z_Param_statName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErSetStatFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErSetStatFloat(Z_Param_statName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErSetStatInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_statName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErSetStatInt(Z_Param_statName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErResetAllStats) \
	{ \
		P_GET_UBOOL(Z_Param_achievementsToo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErResetAllStats(Z_Param_achievementsToo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievementName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_achievementNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievementName(Z_Param_achievementNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErNumAchievements) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USteamUErBPLibrary::SteamUErNumAchievements(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErClearAchievement) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErClearAchievement(Z_Param_achievementName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievement) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievement(Z_Param_achievementName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErSetAchievement) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErSetAchievement(Z_Param_achievementName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievementUnLockedTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_GET_UBOOL_REF(Z_Param_Out_unlockStatus); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_unlockTimestamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievementUnLockedTime(Z_Param_achievementName,Z_Param_Out_unlockStatus,Z_Param_Out_unlockTimestamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievementDisplayAttribute) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_localisedName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_localisedDescription); \
		P_GET_UBOOL_REF(Z_Param_Out_isHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievementDisplayAttribute(Z_Param_achievementName,Z_Param_Out_localisedName,Z_Param_Out_localisedDescription,Z_Param_Out_isHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetAchievementIcon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_achievementName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=USteamUErBPLibrary::SteamUErGetAchievementIcon(Z_Param_achievementName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetPlayerAvatar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=USteamUErBPLibrary::SteamUErGetPlayerAvatar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetPlayMode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetPlayMode(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErConvertDateTimeToString) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_unlockTimestamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USteamUErBPLibrary::SteamUErConvertDateTimeToString(Z_Param_unlockTimestamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErIsSteamConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErIsSteamConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestPlayerFromLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestPlayerFromLeaderboard(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetUserLeaderboardData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_TARRAY_REF(FSteamUErLeaderboardData,Z_Param_Out_leaderboardData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetUserLeaderboardData(Z_Param_leaderboardName,Z_Param_Out_leaderboardData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErUserLeaderboardDataReady) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErUserLeaderboardDataReady(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestLeaderboardFromLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_userNameSourceLeaderboard); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestLeaderboardFromLeaderboard(Z_Param_leaderboardName,Z_Param_userNameSourceLeaderboard); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErRequestLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numScores); \
		P_GET_ENUM(ESteamUErScoreTypeEnum,Z_Param_leaderboardType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErRequestLeaderboard(Z_Param_leaderboardName,Z_Param_numScores,ESteamUErScoreTypeEnum(Z_Param_leaderboardType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetLeaderboardAvatars) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UTexture2D*>*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetLeaderboardAvatars(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_TARRAY_REF(FSteamUErLeaderboardData,Z_Param_Out_leaderboardData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetLeaderboard(Z_Param_leaderboardName,Z_Param_Out_leaderboardData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetLeaderboardReady) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetLeaderboardReady(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErUploadScoreToLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErUploadScoreToLeaderboard(Z_Param_leaderboardName,Z_Param_score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErPingAsynchronous) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_scoreSetWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_leaderboardGetWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_userLeaderboardGetWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_globalStatsWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_globalPlayerCountWaiting); \
		P_GET_UBOOL_REF(Z_Param_Out_globalAchievementPercentagesWaiting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErPingAsynchronous(Z_Param_Out_scoreSetWaiting,Z_Param_Out_leaderboardGetWaiting,Z_Param_Out_userLeaderboardGetWaiting,Z_Param_Out_globalStatsWaiting,Z_Param_Out_globalPlayerCountWaiting,Z_Param_Out_globalAchievementPercentagesWaiting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErGetLeaderboardInited) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErGetLeaderboardInited(Z_Param_leaderboardName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErCloseLeaderboards) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErCloseLeaderboards(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErInitOrCreateLeaderboards) \
	{ \
		P_GET_TARRAY(FSteamUErLeaderboardCreationData,Z_Param_leaderboardCreationList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErInitOrCreateLeaderboards(Z_Param_leaderboardCreationList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErInitLeaderboards) \
	{ \
		P_GET_TARRAY(FString,Z_Param_leaderboardNames); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numLeaderboardItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErInitLeaderboards(Z_Param_leaderboardNames,Z_Param_numLeaderboardItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamUErInitLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numLeaderboardItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamUErBPLibrary::SteamUErInitLeaderboard(Z_Param_leaderboardName,Z_Param_numLeaderboardItems); \
		P_NATIVE_END; \
	}


#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamUErBPLibrary(); \
	friend STEAMUER_API class UClass* Z_Construct_UClass_USteamUErBPLibrary(); \
public: \
	DECLARE_CLASS(USteamUErBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SteamUEr"), NO_API) \
	DECLARE_SERIALIZER(USteamUErBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSteamUErBPLibrary(); \
	friend STEAMUER_API class UClass* Z_Construct_UClass_USteamUErBPLibrary(); \
public: \
	DECLARE_CLASS(USteamUErBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SteamUEr"), NO_API) \
	DECLARE_SERIALIZER(USteamUErBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamUErBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamUErBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamUErBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamUErBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamUErBPLibrary(USteamUErBPLibrary&&); \
	NO_API USteamUErBPLibrary(const USteamUErBPLibrary&); \
public:


#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamUErBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamUErBPLibrary(USteamUErBPLibrary&&); \
	NO_API USteamUErBPLibrary(const USteamUErBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamUErBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamUErBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamUErBPLibrary)


#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_15_PROLOG
#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_RPC_WRAPPERS \
	ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_INCLASS \
	ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SteamUErBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZAR_4_16_Plugins_SteamUEr_Source_SteamUEr_Public_SteamUErBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
