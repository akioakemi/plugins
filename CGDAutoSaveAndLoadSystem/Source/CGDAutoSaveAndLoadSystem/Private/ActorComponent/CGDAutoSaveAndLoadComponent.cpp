// Copyright Cronofear Softworks 2017

#include "CGDAutoSaveAndLoadComponent.h"


// Sets default values for this component's properties
UCGDAutoSaveAndLoadComponent::UCGDAutoSaveAndLoadComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

// Called when the game starts
void UCGDAutoSaveAndLoadComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...
}

void UCGDAutoSaveAndLoadComponent::OnSaveStart()
{
	SetWasSaved(true);
	EventOnSaveStart.Broadcast();
}

void UCGDAutoSaveAndLoadComponent::OnSaveEnd()
{
	EventOnSaveEnd.Broadcast();
}

void UCGDAutoSaveAndLoadComponent::OnLoadStart()
{
	EventOnLoadStart.Broadcast();
}

void UCGDAutoSaveAndLoadComponent::OnLoadEnd()
{

	EventOnLoadEnd.Broadcast();
}

void UCGDAutoSaveAndLoadComponent::OnBeginDestroyUnsavedActor()
{
	EventBeginDestroyOnLoad.Broadcast();
}

void UCGDAutoSaveAndLoadComponent::OnUnchangedActor()
{
	EventUnchangedOnLoad.Broadcast();
}

void UCGDAutoSaveAndLoadComponent::GetSavedNames(TArray<FName>& SavedNames)
{
	SavedNames = Names;
}

void UCGDAutoSaveAndLoadComponent::GetSavedStrings(TArray<FString>& SavedStrings)
{
	SavedStrings = Strings;
}

void UCGDAutoSaveAndLoadComponent::GetSavedFloats(TArray<float>& SavedFloats)
{
	SavedFloats = Values;
}

void UCGDAutoSaveAndLoadComponent::GetSavedNumbers(TArray<int32>& SavedNumbers)
{
	SavedNumbers = Numbers;
}

void UCGDAutoSaveAndLoadComponent::GetSavedBooleans(TArray<bool>& SavedBooleans)
{
	SavedBooleans = Booleans;
}

void UCGDAutoSaveAndLoadComponent::GetSavedVectors(TArray<FVector>& SavedVectors)
{
	SavedVectors = Vectors;
}

void UCGDAutoSaveAndLoadComponent::GetSavedRotators(TArray<FRotator>& SavedRotators)
{
	SavedRotators = Rotators;
}

void UCGDAutoSaveAndLoadComponent::SetSavedNames(const TArray<FName>& NamesToSave)
{
	Names = NamesToSave;
}

void UCGDAutoSaveAndLoadComponent::SetSavedStrings(const TArray<FString>& StringToSaves)
{
	Strings = StringToSaves;
}

void UCGDAutoSaveAndLoadComponent::SetSavedFloats(const TArray<float>& FloatsToSave)
{
	Values = FloatsToSave;
}

void UCGDAutoSaveAndLoadComponent::SetSavedNumbers(const TArray<int32>& NumbersToSave)
{
	Numbers = NumbersToSave;
}

void UCGDAutoSaveAndLoadComponent::SetSavedBooleans(const TArray<bool>& BooleansToSave)
{
	Booleans = BooleansToSave;
}

void UCGDAutoSaveAndLoadComponent::SetSavedVectors(const TArray<FVector>& VectorsToSave)
{
	Vectors = VectorsToSave;
}

void UCGDAutoSaveAndLoadComponent::SetSavedRotators(const TArray<FRotator>& RotatorsToSave)
{
	Rotators = RotatorsToSave;
}