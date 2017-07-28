// DevTextUEr
// (c) 2017 Turfster
// This code is ugly and unoptimised as all hell

#pragma once

#include "SlateBasics.h"
#include "DevTextUErStyle.h"

class FDevTextUErCommands : public TCommands<FDevTextUErCommands>
{
public:

	FDevTextUErCommands()
		: TCommands<FDevTextUErCommands>(TEXT("DevTextUEr"), NSLOCTEXT("Contexts", "DevTextUEr", "DevTextUEr Plugin"), NAME_None, FDevTextUErStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};