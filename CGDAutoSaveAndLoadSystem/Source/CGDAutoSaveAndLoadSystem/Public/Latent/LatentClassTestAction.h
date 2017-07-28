// Copyright Cronofear Softworks 2017
#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakObjectPtr.h"
#include "AsyncWork.h"

/**
* 
*/

class FAutoFillSaveGameObjectAsyncTask : public FNonAbandonableTask
{
	friend class FAsyncTask<FAutoFillSaveGameObjectAsyncTask>;

public:
	FAutoFillSaveGameObjectAsyncTask(const UWorld* World, const TArray<AActor *> ActorsToSave, const TArray<UActorComponent *> AutoSaveAndLoadComponents,  UCGD_AutoSaveLoad_Object* AutoSaveGameObject) :
		LocalWorld(World),
		LocalActorsToSave(ActorsToSave),
		LocalAutoSaveAndLoadComponents(AutoSaveAndLoadComponents),
		LocalAutoSaveGameObject(AutoSaveGameObject)
	{}

protected:
	const UWorld* LocalWorld;
	const TArray<AActor *> LocalActorsToSave;
	const TArray<UActorComponent *> LocalAutoSaveAndLoadComponents;
	UCGD_AutoSaveLoad_Object* LocalAutoSaveGameObject;

	void DoWork()
	{
		UCGD_AutoSaveLoad_BPLibrary::AutoFillSaveGameObject_Internal(LocalWorld, LocalActorsToSave, LocalAutoSaveAndLoadComponents, LocalAutoSaveGameObject);
	}

	/// This next section of code needs to be here.  Not important as to why.

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FAutoFillSaveGameObjectAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}
};

/**
* 
*/
class FSaveGameToSlotAsyncTask : public FNonAbandonableTask
{
	friend class FAutoDeleteAsyncTask<FSaveGameToSlotAsyncTask>;

public:
	FSaveGameToSlotAsyncTask(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex, const bool bCompressSave) :
		LocalSaveGameObject(SaveGameObject),
		LocalSlotName(SlotName),
		LocalUserIndex(UserIndex),
		LocalbCompressSave(bCompressSave)
	{}

protected:
	USaveGame* LocalSaveGameObject;
	const FString LocalSlotName;
	const int32 LocalUserIndex;
	const bool LocalbCompressSave;

	void DoWork()
	{
		if (LocalbCompressSave)
		{
			UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot_Compressed(LocalSaveGameObject, LocalSlotName, LocalUserIndex);
		}
		else
		{
			UCGD_AutoSaveLoad_BPLibrary::SaveGameToSlot(LocalSaveGameObject, LocalSlotName, LocalUserIndex);
		}
		
	}

	/// This next section of code needs to be here.  Not important as to why.

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FSaveGameToSlotAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}
};

