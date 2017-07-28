// DevTextUEr
// (c) 2017 Turfster
// This code is ugly and unoptimised as all hell

#pragma once

#include "SlateBasics.h"

/**  */
class FDevTextUErStyle
{
public:

	static void Initialize();

	static void Shutdown();

	/** reloads textures used by slate renderer */
	static void ReloadTextures();

	/** @return The Slate style set for the Shooter game */
	static const ISlateStyle& Get();

	static FName GetStyleSetName();

private:

	static TSharedRef< class FSlateStyleSet > Create();

private:

	static TSharedPtr< class FSlateStyleSet > StyleInstance;
};