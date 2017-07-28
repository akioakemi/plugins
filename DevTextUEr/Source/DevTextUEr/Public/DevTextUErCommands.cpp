// DevTextUEr
// (c) 2017 Turfster
// This code is ugly and unoptimised as all hell

#include "DevTextUEr.h"
#include "DevTextUErCommands.h"

#define LOCTEXT_NAMESPACE "FDevTextUErModule"

void FDevTextUErCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "DevTextUEr", "Bring up DevTextUEr window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
