// Copyright Cronofear Softworks 2017

/**
* USE THIS IF YOU ARE USING THIS AS A PLUGIN
*/

#pragma once

#include "ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(CGDAutoSaveAndLoadSystem, All, All);

class FCGDAutoSaveAndLoadSystem : public IModuleInterface
{
public:

	/* This will get called when the editor loads the module */
	virtual void StartupModule() override;

	/* This will get called when the editor unloads the module */
	virtual void ShutdownModule() override;
};




/**
* USE THIS IF YOU ARE DEVELOPING THIS PLUGIN AS A GAME MODULE
*/
//
//#pragma once
//
//#include "ModuleManager.h"
