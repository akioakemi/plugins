// Copyright Cronofear Softworks 2017

#pragma once

#include "Components/ActorComponent.h"
#include "CGD_AutoSaveLoad_Struct.h"
#include "CGDAutoSaveAndLoadComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCGDOnSaveStart);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCGDOnSaveEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCGDOnLoadStart);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCGDOnLoadEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCGDOnLoadBeginDestroy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCGDOnLoadUnchanged);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CGDAUTOSAVEANDLOADSYSTEM_API UCGDAutoSaveAndLoadComponent : public UActorComponent
{
	GENERATED_BODY()
#pragma region BaseFunctions
protected:
	// Sets default values for this component's properties
	UCGDAutoSaveAndLoadComponent();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
#pragma endregion 

#pragma region CustomFunction
public:
	/**
	* Call the Event OnSaveStart that can be triggered in the actor owner of this component
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Function", meta = (DisplayName = "CGD::Call On Save Start Event"))
		void OnSaveStart();

	/**
	* Call the Event OnSaveEnd that can be triggered in the actor owner of this component
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Function", meta = (DisplayName = "CGD::Call On Save End Event"))
		void OnSaveEnd();

	/**
	* Call the Event OnLoadStart that can be triggered in the actor owner of this component
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Function", meta = (DisplayName = "CGD::Call On Load Start Event"))
		void OnLoadStart();

	/**
	* Call the Event OnLoadEnd that can be triggered in the actor owner of this component
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Function", meta = (DisplayName = "CGD::Call On Load End Event"))
		void OnLoadEnd();

	/**
	* Call the Event BeginDestroyOnLoad that can be triggered in the actor owner of this component
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Function", meta = (DisplayName = "CGD::Call On Begin Destroy Unsaved Actor Event"))
		void OnBeginDestroyUnsavedActor();

	/**
	* Call the Event UnchangedOnLoad that can be triggered in the actor owner of this component
	*/
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Function", meta = (DisplayName = "CGD::Call On Unchanged Actor Event"))
		void OnUnchangedActor();

#pragma endregion

#pragma region Variables
private:
	/**
	* If unchecked, this actor will not be saved or loaded.
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Global", meta = (DisplayName = "Enable Component") )
		bool bEnablePlugin = true;
	/**
	* When the actor is serialized into a file this will be true
	*/
	UPROPERTY(SaveGame)
		bool bWasSaved = false;
	/**
	*	Destroy this actor on LoadGame if it wasn't saved into a SaveFile
	*	For actors that we're spawned in the world and weren't saved
	*	By default the actors will not be destroyed!
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Actor")
		bool bDestroyActorOnLoadGameIfWasNotSaved = false;
	/**
	* If checked this actor will load with a random ID Name ONLY if there are not actors in the world that match it's IDName (use it with caution)
	* In case this actors loads and there is an actor that match it's ID, this option will do nothing as the actor that match the ID will be updated
	* Useful for loading actors that were destroyed and if UE4 Garbage Collector isn't doing the job removing it completely.
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Actor")
		bool bLoadActorWithRandomIDName = false;


	/**
	* If checked, the components of this actor will be saved by default
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Default Components")
		bool bSaveComponents = true;
	/**
	* If checked this actor will auto save and load the Location Data for all it's SceneComponents
	* Default Location value is (0,0,0) in case this is unchecked
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Default Components", meta = (EditCondition = "bSaveComponents"))
		bool bSaveComponentsLocation = true;
	/**
	* If checked this actor will auto save and load the Rotation Data for all it's SceneComponents
	* Default Rotation value is (0,0,0) in case this is unchecked
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Default Components", meta = (EditCondition = "bSaveComponents"))
		bool bSaveComponentsRotation = true;
	/**
	* If checked this actor will auto save and load the Scale3D Data for all it's SceneComponents
	* Default Scale value is (1,1,1) in case this is unchecked
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Default Components", meta = (EditCondition = "bSaveComponents"))
		bool bSaveComponentsScale = true;
	/**
	* If checked this actor will auto save and load the Linear Velocity for all it's PrimitiveComponents
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Default Components", meta = (EditCondition = "bSaveComponents"))
		bool bSaveComponentsLinearVelocity = true;
	/**
	* If checked this actor will auto save and load the Angular Velocity for all it's PrimitiveComponents
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Default Components", meta = (EditCondition = "bSaveComponents"))
		bool bSaveComponentsAngularVelocity = true;

	/**
	* Custom Options for an specific component of this actor
	*/
	UPROPERTY(EditAnywhere, SaveGame, Category = "CGDAutoSaveAndLoadSystem::Custom Components")
		TArray<FCGDAutoSaveAndLoadComponentOption> ComponentOptions;

	UPROPERTY(SaveGame)
		TArray<FName> Names;

	UPROPERTY(SaveGame)
		TArray<FString> Strings;

	UPROPERTY(SaveGame)
		TArray<float> Values;

	UPROPERTY(SaveGame)
		TArray<int32> Numbers;

	UPROPERTY(SaveGame)
		TArray<bool> Booleans;

	UPROPERTY(SaveGame)
		TArray<FVector> Vectors;

	UPROPERTY(SaveGame)
		TArray<FRotator> Rotators;

public:
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component", meta = (DisplayName = "GetEnableComponent"))
		bool GetEnablePlugin() const { return bEnablePlugin; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component", meta = (DisplayName = "SetEnableComponent"))
		void SetEnablePlugin(bool bValue) { bEnablePlugin = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		bool GetWasSaved() const { return bWasSaved; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetWasSaved(bool bValue) { bWasSaved = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		bool GetSaveComponentsLinearVelocity() const { return bSaveComponentsLinearVelocity; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetSaveComponentsLinearVelocity(bool bValue) { bSaveComponentsLinearVelocity = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		bool GetSaveComponentsAngularVelocity() const { return bSaveComponentsAngularVelocity; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetSaveComponentsAngularVelocity(bool bValue) { bSaveComponentsAngularVelocity = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		bool GetSaveComponentsLocation() const { return bSaveComponentsLocation; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetSaveComponentsLocation(bool bValue) { bSaveComponentsLocation = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		bool GetSaveComponentsRotation() const { return bSaveComponentsRotation; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetSaveComponentsRotation(bool bValue) { bSaveComponentsRotation = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		bool GetSaveComponentsScale() const { return bSaveComponentsScale; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetSaveComponentsScale(bool bValue) { bSaveComponentsScale = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		bool GetLoadActorWithRandomIDName() const { return bLoadActorWithRandomIDName; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetLoadActorWithRandomIDName(bool bValue) { bLoadActorWithRandomIDName = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		bool GetDestroyActorOnLoadGameIfWasNotSaved() const { return bDestroyActorOnLoadGameIfWasNotSaved; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetDestroyActorOnLoadGameIfWasNotSaved(bool bValue) { bDestroyActorOnLoadGameIfWasNotSaved = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		bool GetSaveComponents() const { return bSaveComponents; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetSaveComponents(bool bValue) { bSaveComponents = bValue; }

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		TArray<FCGDAutoSaveAndLoadComponentOption> GetComponentOptions() const { return ComponentOptions; }
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void SetComponentOptions(TArray<FCGDAutoSaveAndLoadComponentOption> Options) { ComponentOptions = Options; }

	///#CronofearTODO New changes, explain
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void GetSavedNames(TArray<FName>& SavedNames);
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void GetSavedStrings(TArray<FString>& SavedStrings);
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void GetSavedFloats(TArray<float>& SavedFloats);
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void GetSavedNumbers(TArray<int32>& SavedNumbers);
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void GetSavedBooleans(TArray<bool>& SavedBooleans);
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void GetSavedVectors(TArray<FVector>& SavedVectors);
	UFUNCTION(BlueprintPure, Category = "CGD|AutoSaveAndLoadSystem::Component")
		void GetSavedRotators(TArray<FRotator>& SavedRotators);

	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component", meta = (AutoCreateRefTerm = "NamesToSave"))
		void SetSavedNames(const TArray<FName>& NamesToSave);
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component", meta = (AutoCreateRefTerm = "StringToSaves"))
		void SetSavedStrings(const TArray<FString>& StringToSaves);
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component", meta = (AutoCreateRefTerm = "FloatsToSave"))
		void SetSavedFloats(const TArray<float>& FloatsToSave);
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component", meta = (AutoCreateRefTerm = "NumbersToSave"))
		void SetSavedNumbers(const TArray<int32>& NumbersToSave);
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component", meta = (AutoCreateRefTerm = "BooleansToSave"))
		void SetSavedBooleans(const TArray<bool>& BooleansToSave);
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component", meta = (AutoCreateRefTerm = "VectorsToSave"))
		void SetSavedVectors(const TArray<FVector>& VectorsToSave);
	UFUNCTION(BlueprintCallable, Category = "CGD|AutoSaveAndLoadSystem::Component", meta = (AutoCreateRefTerm = "RotatorsToSave"))
		void SetSavedRotators(const TArray<FRotator>& RotatorsToSave);
#pragma endregion


#pragma region Enums|Structs|Events|Others
protected:
	/**
	* Event Triggered At the Start of Saving (The Moment When AutoSaveGameToSlot() is called) for every actor that have this component
	* Changes in the actor will BE saved if done in this event
	*/
	UPROPERTY(BlueprintAssignable, Category = "CGD|AutoSaveAndLoadSystem::Event", meta = (DisplayName = "CGD::Event On Save Start"))
		FCGDOnSaveStart EventOnSaveStart;

	/**
	* Event Triggered At the End of Saving (After Serializing all the actors data)
	* Changes in the actor will NOT BE saved if done in this event
	*/
	UPROPERTY(BlueprintAssignable, Category = "CGD|AutoSaveAndLoadSystem::Event", meta = (DisplayName = "CGD::Event On Save End"))
		FCGDOnSaveEnd EventOnSaveEnd;

	/**
	* Event Triggered At the Start of Loading (SaveGame variables and components doesn't have updated values).
	* At this moment, the actor doesn't have the updated values yet
	*/
	UPROPERTY(BlueprintAssignable, Category = "CGD|AutoSaveAndLoadSystem::Event", meta = (DisplayName = "CGD::Event On Load Start"))
		FCGDOnLoadStart EventOnLoadStart;

	/**
	* Event Triggered At the End of Loading
	* At this moment, the actor does have the updated values and the load is Completed
	*/
	UPROPERTY(BlueprintAssignable, Category = "CGD|AutoSaveAndLoadSystem::Event", meta = (DisplayName = "CGD::Event On Load End"))
		FCGDOnLoadEnd EventOnLoadEnd;

	/**
	* Event Triggered when loading the game and the actor wasn't loaded (because it wasn't saved) and if bDestroyActorOnLoadGameIfWasNotSaved property was set to TRUE 
	* You can use this event to abort the destruction of this actor if you set bDestroyActorOnLoadGameIfWasNotSaved back to FALSE
	*/
	UPROPERTY(BlueprintAssignable, Category = "CGD|AutoSaveAndLoadSystem::Event", meta = (DisplayName = "CGD::Event On Begin Destroy On Load If Actor Wasn't Saved"))
		FCGDOnLoadBeginDestroy EventBeginDestroyOnLoad;

	/**
	* Event Triggered when loading the game and the actor wasn't loaded (because it wasn't saved) and if bDestroyActorOnLoadGameIfWasNotSaved property was set to FALSE
	* Use this event at your convenience =)
	*/
	UPROPERTY(BlueprintAssignable, Category = "CGD|AutoSaveAndLoadSystem::Event", meta = (DisplayName = "CGD::Event On Actor Unchanged After Load"))
		FCGDOnLoadBeginDestroy EventUnchangedOnLoad;
#pragma endregion
};
