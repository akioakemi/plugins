// Copyright Cronofear Softworks 2017

#pragma once

#include "GameFramework/SaveGame.h"
#include "../Field/Struct/CGD_AutoSaveLoad_Struct.h"
#include "CGD_AutoSaveLoad_Object.generated.h"
/**
 * 
 */
UCLASS()
class CGDAUTOSAVEANDLOADSYSTEM_API UCGD_AutoSaveLoad_Object : public USaveGame
{
	GENERATED_BODY()

public:
	/**
	* Array of Map records that contain each Map actor records (Each map contains an array of actor records)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "CGD|AutoSaveAndLoadSystem")
		TArray<FCGDMapRecord> MapRecordsArray;
};