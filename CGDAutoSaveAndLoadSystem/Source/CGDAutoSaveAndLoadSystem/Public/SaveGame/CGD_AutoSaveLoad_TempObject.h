// Copyright Cronofear Softworks 2017

#pragma once

#include "GameFramework/SaveGame.h"
#include "CGD_AutoSaveLoad_TempObject.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintType, NotBlueprintable, notplaceable)
class UCGDDummyObject : public USaveGame
{
	GENERATED_BODY()

public:
	/**
	* Not supposed to be exposed to BP.
	* It is used in the process of Compression/Decompression a SaveGameObject
	*/
	UPROPERTY(SaveGame)
		TArray<uint8> MapRecordsArrayOfBytes;
};