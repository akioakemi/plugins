// DevTextUEr
// (c) 2017 Turfster
// This code is ugly and unoptimised as all hell


#include "DevTextUEr.h"

#include "SlateBasics.h"
#include "SlateExtras.h"

#include "DevTextUErStyle.h"
#include "DevTextUErCommands.h"

#include "LevelEditor.h"

#include "SDevTextUErWidget.h"

static const FName DevTextUErTabName("DevTextUEr");

#define LOCTEXT_NAMESPACE "FDevTextUErModule"

void FDevTextUErModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FDevTextUErStyle::Initialize();
	FDevTextUErStyle::ReloadTextures();

	FDevTextUErCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FDevTextUErCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FDevTextUErModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FDevTextUErModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FDevTextUErModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(DevTextUErTabName, FOnSpawnTab::CreateRaw(this, &FDevTextUErModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FDevTextUErTabTitle", "DevTextUEr"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FDevTextUErModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FDevTextUErStyle::Shutdown();

	FDevTextUErCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(DevTextUErTabName);
}

TSharedRef<SDockTab> FDevTextUErModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(SDevTextUErWidget)
			]
		];
}

void FDevTextUErModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->InvokeTab(DevTextUErTabName);
}

void FDevTextUErModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FDevTextUErCommands::Get().OpenPluginWindow);
}

void FDevTextUErModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FDevTextUErCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDevTextUErModule, DevTextUEr)