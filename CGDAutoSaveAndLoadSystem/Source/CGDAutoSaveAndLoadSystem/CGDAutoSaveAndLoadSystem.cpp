// Copyright Cronofear Softworks 2017

/**
* USE THIS IF YOU ARE USING THIS AS A PLUGIN
*/

#include "CGDAutoSaveAndLoadSystem.h"

DEFINE_LOG_CATEGORY(CGDAutoSaveAndLoadSystem);

#define LOCTEXT_NAMESPACE "FCGDAutoSaveAndLoadSystem"

void FCGDAutoSaveAndLoadSystem::StartupModule()
{
	UE_LOG(CGDAutoSaveAndLoadSystem, Warning, TEXT("FCGDAutoSaveAndLoadSystem module has started!"));
}

void FCGDAutoSaveAndLoadSystem::ShutdownModule()
{
	UE_LOG(CGDAutoSaveAndLoadSystem, Warning, TEXT("FCGDAutoSaveAndLoadSystem module has shut down"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FCGDAutoSaveAndLoadSystem, CGDAutoSaveAndLoadSystem)



/**
* USE THIS IF YOU ARE DEVELOPING THIS PLUGIN AS A GAME MODULE
*/

//#include "CGDAutoSaveAndLoadSystem.h"
//
//IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, CGDAutoSaveAndLoadSystem, "CGDAutoSaveAndLoadSystem");
