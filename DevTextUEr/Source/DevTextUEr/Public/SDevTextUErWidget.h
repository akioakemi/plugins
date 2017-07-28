// DevTextUEr
// (c) 2017 Turfster
// This code is ugly and unoptimised as all hell

#pragma once
#include "UnrealEd.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "DevTextUErStyle.h"
#include "SColorPicker.h"
#include "AssetRegistryModule.h"
#include "ImageUtils.h"
#include "DlgPickPath.h"

enum ERadioChoice
{
	None,
	Corners,
	Full,
	GradLtoR, 
	GradRtoL,
	GradTtoB,
	GradBtoT
};

class SDevTextUErWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SDevTextUErWidget) {}

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

protected:
	TArray<uint8> textureArray;
	TSharedPtr<SImage> myImage;
	TSharedPtr<FSlateDynamicImageBrush> textureBrush;

	FVector2D textureSize = FVector2D(256, 256);

	FColor lineColor = FColor::White;
	FColor mainColor = FColor::FromHex("F39C12FF"); 
	FColor gridColor = FColor::FromHex("744A08FF"); 

	TArray<TSharedPtr<FString>> sizesList;
	TSharedPtr<FString> initialSizeSelected;
	int selectedSize;

	bool drawGridOverlay = false;
	bool autoGenerateGridColor = false;
	int gridSubdivisions = 8;

	bool drawSteps = false;
	bool drawStepsRtoL = false;
	bool drawStepsOutline = false;

	ERadioChoice outlineChoice = ERadioChoice::None;

	bool drawGradient = false;
	ERadioChoice gradientChoice = ERadioChoice::GradLtoR;

	FString textureName = "DevTexture";
	FString textureDirectory = "";

	bool drawLabels = false;
	bool drawLabelsShadow = true;
	bool drawLabelsPixels = false;
	bool drawLabelsName = false;
	bool drawLabelsSize = false;
	bool drawLabelsTopLeft = false;
	bool drawLabelsBottomLeft = false;

	TArray<FVector2D> sizesVectorsList = {
		FVector2D(32,32),
		FVector2D(32,64),
		FVector2D(32,128),
		FVector2D(32,256),
		FVector2D(32,512),
		FVector2D(64,32),
		FVector2D(64,64),
		FVector2D(64,128),
		FVector2D(64,256),
		FVector2D(64,512),
		FVector2D(128,32),
		FVector2D(128,64),
		FVector2D(128,128),
		FVector2D(128,256),
		FVector2D(128,512),
		FVector2D(256,32),
		FVector2D(256,64),
		FVector2D(256,128),
		FVector2D(256,256),
		FVector2D(256,512),
		FVector2D(512,32),
		FVector2D(512,64),
		FVector2D(512,128),
		FVector2D(512,256),
		FVector2D(512,512),
		FVector2D(1024,1024),
		FVector2D(2048,2048),
		FVector2D(4096,4096)
	};

	unsigned char bitmapLetters[95][13] = {
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },// space :32
		{ 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },// ! :33
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x36, 0x36, 0x36 },
		{ 0x00, 0x00, 0x00, 0x66, 0x66, 0xff, 0x66, 0x66, 0xff, 0x66, 0x66, 0x00, 0x00 },
		{ 0x00, 0x00, 0x18, 0x7e, 0xff, 0x1b, 0x1f, 0x7e, 0xf8, 0xd8, 0xff, 0x7e, 0x18 },
		{ 0x00, 0x00, 0x0e, 0x1b, 0xdb, 0x6e, 0x30, 0x18, 0x0c, 0x76, 0xdb, 0xd8, 0x70 },
		{ 0x00, 0x00, 0x7f, 0xc6, 0xcf, 0xd8, 0x70, 0x70, 0xd8, 0xcc, 0xcc, 0x6c, 0x38 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1c, 0x0c, 0x0e },
		{ 0x00, 0x00, 0x0c, 0x18, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x18, 0x0c },
		{ 0x00, 0x00, 0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x18, 0x30 },
		{ 0x00, 0x00, 0x00, 0x00, 0x99, 0x5a, 0x3c, 0xff, 0x3c, 0x5a, 0x99, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 0x00, 0x00 },
		{ 0x00, 0x00, 0x30, 0x18, 0x1c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x60, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x06, 0x06, 0x03, 0x03 },
		{ 0x00, 0x00, 0x3c, 0x66, 0xc3, 0xe3, 0xf3, 0xdb, 0xcf, 0xc7, 0xc3, 0x66, 0x3c },
		{ 0x00, 0x00, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x38, 0x18 },
		{ 0x00, 0x00, 0xff, 0xc0, 0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0xe7, 0x7e },
		{ 0x00, 0x00, 0x7e, 0xe7, 0x03, 0x03, 0x07, 0x7e, 0x07, 0x03, 0x03, 0xe7, 0x7e },
		{ 0x00, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0xff, 0xcc, 0x6c, 0x3c, 0x1c, 0x0c },
		{ 0x00, 0x00, 0x7e, 0xe7, 0x03, 0x03, 0x07, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xff },
		{ 0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xc7, 0xfe, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e },
		{ 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x03, 0x03, 0xff },
		{ 0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xe7, 0x7e, 0xe7, 0xc3, 0xc3, 0xe7, 0x7e },
		{ 0x00, 0x00, 0x7e, 0xe7, 0x03, 0x03, 0x03, 0x7f, 0xe7, 0xc3, 0xc3, 0xe7, 0x7e },
		{ 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, 0x00, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x30, 0x18, 0x1c, 0x1c, 0x00, 0x00, 0x1c, 0x1c, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06 },
		{ 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60 },
		{ 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x18, 0x0c, 0x06, 0x03, 0xc3, 0xc3, 0x7e },
		{ 0x00, 0x00, 0x3f, 0x60, 0xcf, 0xdb, 0xd3, 0xdd, 0xc3, 0x7e, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3, 0xc3, 0x66, 0x3c, 0x18 },
		{ 0x00, 0x00, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe },
		{ 0x00, 0x00, 0x7e, 0xe7, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e },
		{ 0x00, 0x00, 0xfc, 0xce, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7, 0xce, 0xfc },
		{ 0x00, 0x00, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0, 0xc0, 0xff },
		{ 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0, 0xff },
		{ 0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xcf, 0xc0, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e },
		{ 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3 },
		{ 0x00, 0x00, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7e },
		{ 0x00, 0x00, 0x7c, 0xee, 0xc6, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06 },
		{ 0x00, 0x00, 0xc3, 0xc6, 0xcc, 0xd8, 0xf0, 0xe0, 0xf0, 0xd8, 0xcc, 0xc6, 0xc3 },
		{ 0x00, 0x00, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0 },
		{ 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xdb, 0xff, 0xff, 0xe7, 0xc3 },
		{ 0x00, 0x00, 0xc7, 0xc7, 0xcf, 0xcf, 0xdf, 0xdb, 0xfb, 0xf3, 0xf3, 0xe3, 0xe3 },
		{ 0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e },
		{ 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe },
		{ 0x00, 0x00, 0x3f, 0x6e, 0xdf, 0xdb, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c },
		{ 0x00, 0x00, 0xc3, 0xc6, 0xcc, 0xd8, 0xf0, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe },
		{ 0x00, 0x00, 0x7e, 0xe7, 0x03, 0x03, 0x07, 0x7e, 0xe0, 0xc0, 0xc0, 0xe7, 0x7e },
		{ 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff },
		{ 0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3 },
		{ 0x00, 0x00, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3 },
		{ 0x00, 0x00, 0xc3, 0xe7, 0xff, 0xff, 0xdb, 0xdb, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3 },
		{ 0x00, 0x00, 0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3 },
		{ 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3 },
		{ 0x00, 0x00, 0xff, 0xc0, 0xc0, 0x60, 0x30, 0x7e, 0x0c, 0x06, 0x03, 0x03, 0xff },
		{ 0x00, 0x00, 0x3c, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3c },
		{ 0x00, 0x03, 0x03, 0x06, 0x06, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60 },
		{ 0x00, 0x00, 0x3c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x3c },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x66, 0x3c, 0x18 },
		{ 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 0x30, 0x70 },
		{ 0x00, 0x00, 0x7f, 0xc3, 0xc3, 0x7f, 0x03, 0xc3, 0x7e, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xfe, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0 },
		{ 0x00, 0x00, 0x7e, 0xc3, 0xc0, 0xc0, 0xc0, 0xc3, 0x7e, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x7f, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f, 0x03, 0x03, 0x03, 0x03, 0x03 },
		{ 0x00, 0x00, 0x7f, 0xc0, 0xc0, 0xfe, 0xc3, 0xc3, 0x7e, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0xfc, 0x30, 0x30, 0x30, 0x33, 0x1e },
		{ 0x7e, 0xc3, 0x03, 0x03, 0x7f, 0xc3, 0xc3, 0xc3, 0x7e, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0 },
		{ 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00 },
		{ 0x38, 0x6c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x0c, 0x00 },
		{ 0x00, 0x00, 0xc6, 0xcc, 0xf8, 0xf0, 0xd8, 0xcc, 0xc6, 0xc0, 0xc0, 0xc0, 0xc0 },
		{ 0x00, 0x00, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78 },
		{ 0x00, 0x00, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xfe, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xfc, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },
		{ 0xc0, 0xc0, 0xc0, 0xfe, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0x00, 0x00, 0x00, 0x00 },
		{ 0x03, 0x03, 0x03, 0x7f, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xfe, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xfe, 0x03, 0x03, 0x7e, 0xc0, 0xc0, 0x7f, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x1c, 0x36, 0x30, 0x30, 0x30, 0x30, 0xfc, 0x30, 0x30, 0x30, 0x00 },
		{ 0x00, 0x00, 0x7e, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3, 0xc3, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xc3, 0xe7, 0xff, 0xdb, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xc3, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0xc3, 0x00, 0x00, 0x00, 0x00 },
		{ 0xc0, 0x60, 0x60, 0x30, 0x18, 0x3c, 0x66, 0x66, 0xc3, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xff, 0x60, 0x30, 0x18, 0x0c, 0x06, 0xff, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x0f, 0x18, 0x18, 0x18, 0x38, 0xf0, 0x38, 0x18, 0x18, 0x18, 0x0f },
		{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },
		{ 0x00, 0x00, 0xf0, 0x18, 0x18, 0x18, 0x1c, 0x0f, 0x1c, 0x18, 0x18, 0x18, 0xf0 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x8f, 0xf1, 0x60, 0x00, 0x00, 0x00 } }; //126

private:

	FOptionalSize CalculateWidth() const
	{
		if (textureSize.X >= textureSize.Y)
			return FOptionalSize(512.f);
		return FOptionalSize((512.f / textureSize.Y)*textureSize.X);
	}


	FOptionalSize CalculateHeight() const
	{
		if (textureSize.X>=textureSize.Y)
			return FOptionalSize((512.f/textureSize.X)*textureSize.Y);
		return FOptionalSize(512.f);
	}

	void OnFilenameChanged(const FText& inLabel)
	{
		if (!inLabel.IsEmptyOrWhitespace())
		{
			textureName = inLabel.ToString();
			RebuildTexture();
		}
	}

	FText GetFilename() const
	{
		return FText::FromString(textureName);
	}

	void OnDirectoryChanged(const FText& inLabel)
	{
		if (!inLabel.IsEmptyOrWhitespace())
			textureDirectory = inLabel.ToString();
	}

	FText GetDirectory() const
	{
		return FText::FromString(textureDirectory);
	}

	FReply GetDirectoryButton()
	{
		TSharedPtr<SDlgPickPath> PickAssetPathWidget =
			SNew(SDlgPickPath)
			.Title(FText::FromString("Select directory to save textures in"));

		if (EAppReturnType::Ok == PickAssetPathWidget->ShowModal())
		{
			textureDirectory = PickAssetPathWidget->GetPath().ToString();
			textureDirectory.RemoveFromStart("/Game/");
		}
		
		return FReply::Handled();
	}

	int32 GetGridColumns() const
	{
		return gridSubdivisions;
	}

	TOptional<int32> GetMaxColumns() const
	{
		return FMath::Min(textureSize.X, textureSize.Y) / 2;
	}

	void SetGridColumns(const int32 newValue)
	{
		int oldGS = gridSubdivisions;
		gridSubdivisions = newValue;
		if (!((gridSubdivisions & (gridSubdivisions - 1)) == 0))
			gridSubdivisions = pow(2, ceil(log(gridSubdivisions) / log(2)));

		if (newValue > FMath::Min(textureSize.X / 2, textureSize.Y / 2))
			gridSubdivisions = FMath::Min(textureSize.X / 2, textureSize.Y / 2);
		//	if (gridSubdivisions!=oldGS)
		RebuildTexture();
	}


	void CreateTexture(int32 width, int32 height, const TArray<FColor>& colorArray, FString& ObjectName, FString& importDirectory, bool hasAlpha, TEnumAsByte<enum TextureGroup> lodGroup, FString oldPackageName)
	{
		// last minute sanitizing, just in case we missed one
		ObjectName = ObjectName.Replace(TEXT("*"), TEXT("X"));
		ObjectName = ObjectName.Replace(TEXT("?"), TEXT("Q"));
		ObjectName = ObjectName.Replace(TEXT("!"), TEXT("I"));
		ObjectName = ObjectName.Replace(TEXT("."), TEXT("-"));
		ObjectName = ObjectName.Replace(TEXT("&"), TEXT("_"));
		ObjectName = ObjectName.Replace(TEXT(" "), TEXT("_"));

		FString NewPackageName = oldPackageName;
		importDirectory.RemoveFromStart("/Game"); // in case someone set the main dir
		if (!importDirectory.EndsWith("/"))
			importDirectory += "/";
		if (importDirectory == "/") // in case someone forgot to set the texture directory
			importDirectory = "";
		if (oldPackageName == "")
			NewPackageName = TEXT("/Game/") + importDirectory + ObjectName;
		else
		{
			int position = NewPackageName.Find(".", ESearchCase::IgnoreCase, ESearchDir::FromEnd);
			NewPackageName.RemoveAt(position, NewPackageName.Len() - position);
		}
		UPackage* Package = CreatePackage(NULL, *NewPackageName);
		Package->FullyLoad();
		Package->Modify();

		FCreateTexture2DParameters FCT;
		FCT.bUseAlpha = hasAlpha;

		FString TextureName = ObjectName;
		if (TextureName.Contains("/"))
			TextureName = TextureName.Mid(TextureName.Find("/", ESearchCase::IgnoreCase, ESearchDir::FromEnd) + 1);

		if (!TextureName.StartsWith("T_"))
			TextureName = "T_" + TextureName;

		UTexture2D* basetexture = FImageUtils::CreateTexture2D(width, height, colorArray, Package, *TextureName, RF_Public | RF_Standalone, FCT);

		basetexture->LODGroup = lodGroup;

		FAssetRegistryModule::AssetCreated(basetexture);
		basetexture->PostEditChange();

		FString PackageFileName = FPackageName::LongPackageNameToFilename(NewPackageName, FPackageName::GetAssetPackageExtension());
		try
		{
			if (GEditor->SavePackage(Package, basetexture, RF_Public | RF_Standalone, *PackageFileName, GError, nullptr, false, true, SAVE_None))
			{
				Package->PostEditChange();
				FAssetRegistryModule::AssetCreated(basetexture);
			}
			else
				UE_LOG(LogTemp, Error, TEXT("Could not save package %s"), *PackageFileName);
		}
		catch (...)
		{
			UE_LOG(LogTemp, Error, TEXT("Something went catastrophically wrong trying to save an unreal package for %s. In unreal code."), *ObjectName);
		}
	}


	FReply SaveTexture()
	{
		TArray<FColor> tempArray;
		for (unsigned int i = 0; i < textureSize.X*textureSize.Y; i++)
			tempArray.Add(FColor(textureArray[i * 4 + 2], textureArray[i * 4 + 1], textureArray[i * 4], textureArray[i * 4 + 3]));

		CreateTexture(textureSize.X, textureSize.Y, tempArray, textureName, textureDirectory, true, TextureGroup::TEXTUREGROUP_World, "");

		return FReply::Handled();
	}

	void WriteStringToTexture(FString inputString, FIntPoint location, FColor writeColor, bool centered = false, bool doVertical = false, bool doShadows = false)
	{
		if (!(location.X > -1 && location.X < textureSize.X - 10 && location.Y>15 && location.Y < textureSize.Y))
			return;
		FIntPoint workLocation = location;

		bool drawingNumbers = false;
		
		FColor shadowColor = FColor(255 - writeColor.R, 255 - writeColor.G, 255 - writeColor.B, 255);

		if (centered)
			workLocation.X = (textureSize.X / 2) - (inputString.Len() * 9) / 2;

		if (doVertical)
		{
			workLocation.Y = (textureSize.Y / 2) - ((inputString.Len() - 1) * 15) / 2;
			if (((int)inputString[0] > 47) && ((int)inputString[0] < 58)) // it's a size thing
			{
				drawingNumbers = true;
				if (drawLabelsName)
					workLocation.X = textureSize.X - 12;
				else
					workLocation.X = textureSize.X / 2 - 4;
				int totalChars = 0;
				for (int i = 0; i < inputString.Len(); i++)
					if (inputString[i] != ' ')
						totalChars++;
				workLocation.Y = (textureSize.Y / 2) - ((totalChars - 1) * 15) / 2;
			}
			else
			{
				if (drawLabelsSize)
					workLocation.X = 3;
				else
					workLocation.X = textureSize.X / 2 - 4;
			}
		}

		int oldWorkX = workLocation.X;
		int oldWorkY = workLocation.Y;
		int index = 0;
		int workOffset = (workLocation.X + workLocation.Y*textureSize.Y) * 4;
		int xLocation = 0;
		if (doShadows)
		{
			for (int i = 0; i < inputString.Len(); i++)
			{
				index = ((int)inputString[i]) - 32;
				if (index < 95) // do we know this character?
				{
					for (int j = 0; j < 13; j++)
					{
						for (int k = 0; k < 8; k++)
						{
							if (bitmapLetters[index][j] & 1 << k)
							{
								xLocation = workLocation.X + 1 + (8 - k);
								if (xLocation >= 0 && xLocation < textureSize.X)
								{
									workOffset = (xLocation + (workLocation.Y + 1 - j)*textureSize.X) * 4;
									if (workOffset > 0 && workOffset < textureArray.Num())
									{
										textureArray[workOffset] = shadowColor.B;
										textureArray[workOffset + 1] = shadowColor.G;
										textureArray[workOffset + 2] = shadowColor.R;
										textureArray[workOffset + 3] = shadowColor.A;
									}
								}
							}
						}
					}
				}
				if (doVertical)
				{
					workLocation.Y += 15;
					if (drawingNumbers && inputString[i] == ' ')
						workLocation.Y -= 15;
				}
				else
					workLocation.X += 9; // char written
			}

		}
		
		workLocation.X = oldWorkX; // reset
		workLocation.Y = oldWorkY;

		for (int i = 0; i < inputString.Len(); i++)
		{
			index = ((int)inputString[i]) - 32;
			if (index < 95) // do we know this character?
			{
				for (int j = 0; j < 13; j++)
				{
					for (int k = 0; k < 8; k++)
					{
						if (bitmapLetters[index][j] & 1 << k)
						{
							xLocation = workLocation.X + (8 - k);
							if (xLocation >=0 && xLocation < textureSize.X)
							{
								workOffset = (xLocation + (workLocation.Y - j)*textureSize.X) * 4;
								if (workOffset > 0 && workOffset < textureArray.Num())
								{
									textureArray[workOffset] = writeColor.B;
									textureArray[workOffset + 1] = writeColor.G;
									textureArray[workOffset + 2] = writeColor.R;
									textureArray[workOffset + 3] = writeColor.A;
								}
							}
						}
					}
				}
			}
			if (doVertical)
			{
				workLocation.Y += 15;
				if (drawingNumbers && inputString[i] == ' ')
					workLocation.Y -= 15;
			}
			else
				workLocation.X += 9; // char written
		}

	}

	void ClearTexture()
	{
		textureArray.Empty();
		textureArray.AddZeroed(round(textureSize.X) * round(textureSize.Y) * 4);
		for (int i = 0; i < round(textureSize.X) * round(textureSize.Y); i++)
		{
			textureArray[i * 4] = mainColor.B; // Yes, this makes no sense.
			textureArray[i * 4 + 1] = mainColor.G;
			textureArray[i * 4 + 2] = mainColor.R;
			textureArray[i * 4 + 3] = mainColor.A;
		}
	}

	void RebuildTexture()
	{
		ClearTexture();

		int blockSize = FMath::Min(textureSize.X, textureSize.Y) / gridSubdivisions; 
		int lineWidth = FMath::Clamp((int)FMath::Min(textureSize.X, textureSize.Y) / 256, 1, 16);
		int offset = 0;

		// build grid
		if (drawGridOverlay)
		{
			for (int baseY = 0; baseY < textureSize.Y; baseY += blockSize)
				for (int y = 0; y < blockSize; y++)
					for (int baseX = 0; baseX < textureSize.X; baseX += blockSize)
						for (int x = 0; x < blockSize; x++)
						{
							if (((baseX + baseY) / blockSize) % 2 == 1)
							{
								offset = ((baseX + x) + (baseY + y)*textureSize.X) * 4;
								textureArray[offset] = gridColor.B;
								textureArray[offset + 1] = gridColor.G;
								textureArray[offset + 2] = gridColor.R;
								textureArray[offset + 3] = gridColor.A;
							}
						}
		}
		// build gradient
		if (drawGradient)
		{
			int diffR = mainColor.R - gridColor.R;
			int diffG = mainColor.G - gridColor.G;
			int diffB = mainColor.B - gridColor.B;
			FColor startCol = FColor::White;
			switch (gradientChoice)
			{
			case ERadioChoice::GradTtoB:
			case ERadioChoice::GradLtoR:
				startCol = mainColor;
				break;
			case ERadioChoice::GradBtoT:
			case ERadioChoice::GradRtoL:
				startCol = gridColor;
				diffR = -diffR;
				diffG = -diffG;
				diffB = -diffB;
				break;
			}
			if ((int)gradientChoice < 5)
				blockSize = textureSize.X / gridSubdivisions;
			else
				blockSize = textureSize.Y / gridSubdivisions;

			diffR /= gridSubdivisions - 1;
			diffG /= gridSubdivisions - 1;
			diffB /= gridSubdivisions - 1;

			FColor thisBlockColor = FColor::White;

			for (int counter = 0; counter < gridSubdivisions; counter++)
			{
				thisBlockColor = FColor(startCol.R - counter*diffR, startCol.G - counter*diffG, startCol.B - counter*diffB, 255);
				if ((int)gradientChoice < 5)
				{
					for (int x = 0; x < blockSize; x++)
						for (int y = 0; y < textureSize.Y; y++)
						{
							offset = ((counter *blockSize) + x + y * textureSize.X) * 4;
							textureArray[offset] = thisBlockColor.B;
							textureArray[offset + 1] = thisBlockColor.G;
							textureArray[offset + 2] = thisBlockColor.R;
							textureArray[offset + 3] = thisBlockColor.A;
						}
				}
				else
				{
					for (int y = 0; y < blockSize; y++)
						for (int x = 0; x < textureSize.X; x++)
						{
							offset = (x + ((counter *blockSize) + y) * textureSize.X) * 4;
							textureArray[offset] = thisBlockColor.B;
							textureArray[offset + 1] = thisBlockColor.G;
							textureArray[offset + 2] = thisBlockColor.R;
							textureArray[offset + 3] = thisBlockColor.A;
						}
				}
			}
		}
		// build steps
		if (drawSteps)
		{
			blockSize = textureSize.Y / gridSubdivisions;
			int stepLength = textureSize.X / gridSubdivisions;
			for (int counter = 0; counter < gridSubdivisions; counter++)
			{
				int baseY = counter * blockSize;
				for (int y = 0; y < blockSize; y++)
				{
					for (int x = 0; x < textureSize.X - ((counter + 1) * stepLength); x++)
					{
						if (drawStepsRtoL)
							offset = (textureSize.X - 1 - x + (baseY + y) * textureSize.X) * 4;
						else
							offset = (x + (baseY + y) * textureSize.X) * 4;
						textureArray[offset] = gridColor.B;
						textureArray[offset + 1] = gridColor.G;
						textureArray[offset + 2] = gridColor.R;
						textureArray[offset + 3] = gridColor.A;
					}
					if (drawStepsOutline)
					{
						for (int x = 0; x < FMath::Clamp(lineWidth, 0, stepLength - 1); x++)
						{
							if (drawStepsRtoL)
								offset = (textureSize.X - 1 - (x + textureSize.X - ((counter + 1)*stepLength)) + (baseY + y) * textureSize.X) * 4;
							else
								offset = ((x + textureSize.X - ((counter + 1)*stepLength)) + (baseY + y) * textureSize.X) * 4;
							textureArray[offset] = lineColor.B;
							textureArray[offset + 1] = lineColor.G;
							textureArray[offset + 2] = lineColor.R;
							textureArray[offset + 3] = lineColor.A;
						}
					}
				}
				if (drawStepsOutline)
				{
					for (int y = 0; y< FMath::Clamp(lineWidth, 1, blockSize); y++)
					{
						for (int x = 0; x < (counter==0? stepLength:stepLength+FMath::Clamp(lineWidth, 0, stepLength-1)); x++)
						{
							if (drawStepsRtoL)
								offset = (textureSize.X - 1 - (x + textureSize.X - ((counter + 1)*stepLength)) + (baseY + y) * textureSize.X) * 4;
							else
								offset = ((x + textureSize.X - ((counter + 1)*stepLength)) + (baseY + y) * textureSize.X) * 4;
							textureArray[offset] = lineColor.B;
							textureArray[offset + 1] = lineColor.G;
							textureArray[offset + 2] = lineColor.R;
							textureArray[offset + 3] = lineColor.A;
						}
					}
				}
			}
		}

		blockSize = FMath::Min(textureSize.X, textureSize.Y) / 8;
		// build corners
		switch (outlineChoice)
		{
			case ERadioChoice::Corners:
				for (int y = 0; y < blockSize; y++)
					for (int w = 0; w < lineWidth; w++)
					{
						offset = (w + y*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;
						offset = (textureSize.X - 1 - w + y*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;

						offset = (w + (textureSize.Y - 1 - y)*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;
						offset = (textureSize.X - 1 - w + (textureSize.Y - 1 - y)*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;

					}

				for (int x = 0; x < blockSize; x++)
					for (int w = 0; w < lineWidth; w++)
					{
						offset = (x + w*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;
						offset = (x + (textureSize.Y - 1 - w)*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;

						offset = (textureSize.X - 1 - x + w*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;
						offset = (textureSize.X - 1 - x + (textureSize.Y - 1 - w)*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;
					}
				break;
			case ERadioChoice::Full:
				for (int y = 0; y < textureSize.Y; y++)
					for (int w = 0; w < lineWidth; w++)
					{
						offset = (w + y*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;
						offset = (textureSize.X-1-w + y*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;
					}

				for (int x = 0; x < textureSize.X; x++)
					for (int w = 0; w < lineWidth; w++)
					{
						offset = (x + w*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;
						offset = (x + (textureSize.Y-1-w)*textureSize.X) * 4;
						textureArray[offset] = lineColor.B;
						textureArray[offset + 1] = lineColor.G;
						textureArray[offset + 2] = lineColor.R;
						textureArray[offset + 3] = lineColor.A;
					}
				break;
		}
		// text stuff?
		if (FMath::Min(textureSize.X, textureSize.Y) >= 32)
		{
			if (drawLabels)
			{
				FString zeroString = "0";
				FString widthString = drawLabelsPixels? FString::FromInt(textureSize.X):"1";
				FString heightString = drawLabelsPixels? FString::FromInt(textureSize.Y):"1";
				if (drawLabelsBottomLeft)
				{
					if (!(drawLabelsTopLeft && (drawLabelsName || drawLabelsSize))) // don't draw top left corner if we put the label there
						WriteStringToTexture(zeroString + "," + heightString, FIntPoint(lineWidth + 4, lineWidth + 16), lineColor, false, false, drawLabelsShadow);
					WriteStringToTexture(widthString + "," + zeroString, FIntPoint(textureSize.X - ((widthString.Len() + zeroString.Len()) * 9 + 16) - lineWidth, textureSize.Y - 4 - lineWidth), lineColor, false, false, drawLabelsShadow);
					WriteStringToTexture(zeroString + "," + zeroString, FIntPoint(lineWidth + 4, textureSize.Y - 4 - lineWidth), lineColor, false, false, drawLabelsShadow);
					WriteStringToTexture(widthString + "," + heightString, FIntPoint(textureSize.X - ((widthString.Len() + heightString.Len()) * 9 + 16) - lineWidth, lineWidth + 16), lineColor, false, false, drawLabelsShadow);
				}
				else
				{
					if (!(drawLabelsTopLeft && (drawLabelsName || drawLabelsSize)))
						WriteStringToTexture(zeroString+","+zeroString, FIntPoint(lineWidth + 4, lineWidth + 16), lineColor, false, false, drawLabelsShadow);
					WriteStringToTexture(widthString + ",0", FIntPoint(textureSize.X - ((widthString.Len() + zeroString.Len()) * 9 + 16) - lineWidth, lineWidth + 16), lineColor, false, false, drawLabelsShadow);
					WriteStringToTexture("0," + heightString, FIntPoint(lineWidth + 4, textureSize.Y - 4 - lineWidth), lineColor, false, false, drawLabelsShadow);
					WriteStringToTexture(widthString + "," + heightString, FIntPoint(textureSize.X - ((widthString.Len() + heightString.Len()) * 9 + 16) - lineWidth, textureSize.Y - 4 - lineWidth), lineColor, false, false, drawLabelsShadow);
				}
			}
			if (drawLabelsName)
				if (drawLabelsTopLeft)
					WriteStringToTexture(textureName, FIntPoint(lineWidth + 4, lineWidth + 16), lineColor, false, textureSize.X < textureSize.Y, drawLabelsShadow);
				else
					WriteStringToTexture(textureName, FIntPoint(0, drawLabelsSize ? (textureSize.Y / 2) /*- /*2 1 */: (textureSize.Y / 2) + 7), lineColor, true, textureSize.X < textureSize.Y, drawLabelsShadow);

			if (drawLabelsSize)
				if (drawLabelsTopLeft)
					WriteStringToTexture(FString::FromInt(textureSize.X) + " x " + FString::FromInt(textureSize.Y), FIntPoint(lineWidth + 4, drawLabelsName ? lineWidth + 16 + 16 : lineWidth + 16), lineColor, false, textureSize.X < textureSize.Y, drawLabelsShadow);
				else
					WriteStringToTexture(FString::FromInt(textureSize.X) + " x " + FString::FromInt(textureSize.Y), FIntPoint(0, drawLabelsName ? (textureSize.Y / 2) + /*16*/15 : (textureSize.Y / 2) + 7), lineColor, true, textureSize.X < textureSize.Y, drawLabelsShadow);
		}
		RedrawTexture();
	}

	void RedrawTexture()
	{
		FSlateApplication::Get().GetRenderer()->ReleaseDynamicResource(*textureBrush.Get());
		textureBrush.Reset();
		textureBrush = FSlateDynamicImageBrush::CreateWithImageData(FName("devTexture"), textureSize, textureArray);
	}

	const FSlateBrush* GetTextureImage() const
	{
	//	RedrawTexture();
		return (textureBrush.IsValid()) ? textureBrush.Get() : FDevTextUErStyle::Get().GetBrush("DevTextUErStyle.OpenPluginWindow");
	}



	void HandleRadioButtonCheckStateChanged(ECheckBoxState NewRadioState, ERadioChoice RadioThatChanged)
	{
		if (NewRadioState == ECheckBoxState::Checked)
		{
			if ((int)RadioThatChanged < 3)
				outlineChoice = RadioThatChanged;
			else
				gradientChoice = RadioThatChanged;
			RebuildTexture();
		}
	}

	ECheckBoxState HandleRadioButtonIsChecked(ERadioChoice ButtonId) const
	{
		if ((int)ButtonId > 2)
		{
			return (gradientChoice == ButtonId)
			? ECheckBoxState::Checked
			: ECheckBoxState::Unchecked;
		}
		return (outlineChoice == ButtonId)
		? ECheckBoxState::Checked
		: ECheckBoxState::Unchecked;
	}

	TSharedRef<SWidget> CreateRadioButton(const FText& RadioText, const FText& RadioTextTooltip, ERadioChoice RadioButtonChoice)
	{
		return SNew(SCheckBox)
			.Style(FCoreStyle::Get(), "RadioButton")
			.ToolTipText(RadioTextTooltip)
			.IsChecked(this, &SDevTextUErWidget::HandleRadioButtonIsChecked, RadioButtonChoice)
			.OnCheckStateChanged(this, &SDevTextUErWidget::HandleRadioButtonCheckStateChanged, RadioButtonChoice)
			[
				SNew(STextBlock)
				.Text(RadioText)
			.ToolTipText(RadioTextTooltip)
			];
	}



	void CreateGridColor()
	{
		gridColor.R = mainColor.R / 2;
		gridColor.G = mainColor.G / 2;
		gridColor.B = mainColor.B / 2;
		gridColor.A = mainColor.A;
	}


	ECheckBoxState GetMakeGradient() const
	{
		return drawGradient ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetMakeGradientChanged(ECheckBoxState newState)
	{
		drawGradient = (newState == ECheckBoxState::Checked);
		if (drawGradient)
		{
			drawSteps = !drawGradient;
			drawGridOverlay = !drawGradient;
		}
		RebuildTexture();
	}

	ECheckBoxState GetMakeGrid() const
	{
		return drawGridOverlay ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetMakeGridChanged(ECheckBoxState newState)
	{
		drawGridOverlay = (newState == ECheckBoxState::Checked);
		if (drawGridOverlay)
		{
			drawGradient = !drawGridOverlay;
			drawSteps = !drawGridOverlay;
		}
		RebuildTexture();
	}

	ECheckBoxState GetMakeSteps() const
	{
		return drawSteps ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetMakeStepsChanged(ECheckBoxState newState)
	{
		drawSteps = (newState == ECheckBoxState::Checked);
		if (drawSteps)
		{
			drawGridOverlay = !drawSteps;
			drawGradient = !drawSteps;
		}
		RebuildTexture();
	}

	ECheckBoxState GetMakeStepsOutline() const
	{
		return drawStepsOutline ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetMakeStepsOutlineChanged(ECheckBoxState newState)
	{
		drawStepsOutline = (newState == ECheckBoxState::Checked);
		RebuildTexture();
	}

	ECheckBoxState GetMakeStepsRtoL() const
	{
		return drawStepsRtoL ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetMakeStepsRtoLChanged(ECheckBoxState newState)
	{
		drawStepsRtoL = (newState == ECheckBoxState::Checked);
		RebuildTexture();
	}


	ECheckBoxState GetMakeAutoGridColor() const
	{
		return autoGenerateGridColor ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetMakeAutoGridColorChanged(ECheckBoxState newState)
	{
		autoGenerateGridColor = (newState == ECheckBoxState::Checked);
		if (autoGenerateGridColor)
			CreateGridColor();
		RebuildTexture();
	}

	ECheckBoxState GetLabelCorners() const
	{
		return drawLabels ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetLabelCornersChanged(ECheckBoxState newState)
	{
		drawLabels = (newState == ECheckBoxState::Checked);
		RebuildTexture();
	}

	ECheckBoxState GetLabelCornersPixels() const
	{
		return drawLabelsPixels ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetLabelCornersPixelsChanged(ECheckBoxState newState)
	{
		drawLabelsPixels = (newState == ECheckBoxState::Checked);
		RebuildTexture();
	}

	bool LabelCornersEnabled() const
	{
		return (FMath::Min(textureSize.X, textureSize.Y) >= 32); // don't really need this one any more, but just in case
	}

	ECheckBoxState GetLabelBottomLeft() const
	{
		return drawLabelsBottomLeft ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetLabelBottomLeftChanged(ECheckBoxState newState)
	{
		drawLabelsBottomLeft = (newState == ECheckBoxState::Checked);
		RebuildTexture();
	}
	
	ECheckBoxState GetLabelCenter() const
	{
		return drawLabelsName ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetLabelCenterChanged(ECheckBoxState newState)
	{
		drawLabelsName = (newState == ECheckBoxState::Checked);
		RebuildTexture();
	}

	ECheckBoxState GetLabelTopLeft() const
	{
		return drawLabelsTopLeft ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetLabelTopLeftChanged(ECheckBoxState newState)
	{
		drawLabelsTopLeft = (newState == ECheckBoxState::Checked);
		RebuildTexture();
	}

	ECheckBoxState GetLabelSize() const
	{
		return drawLabelsSize ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	void GetLabelSizeChanged(ECheckBoxState newState)
	{
		drawLabelsSize = (newState == ECheckBoxState::Checked);
		RebuildTexture();
	}
	


	FLinearColor GetMainColor() const
	{
		return (FLinearColor)mainColor;
	}

	FLinearColor GetGridColor() const
	{
		return (FLinearColor)gridColor;
	}

	FLinearColor GetLineColor() const
	{
		return (FLinearColor)lineColor;
	}

	FReply GetColorForLineBlock(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
	{
		if (MouseEvent.GetEffectingButton() != EKeys::LeftMouseButton)
		{
			return FReply::Unhandled();
		}

		TArray<FColor*> FColorArray;
		FColorArray.Add(&lineColor);
		FColorPickerArgs PickerArgs;
		PickerArgs.bIsModal = true;
		PickerArgs.bUseAlpha = true;
		PickerArgs.sRGBOverride = false;
		PickerArgs.DisplayGamma = TAttribute<float>::Create(TAttribute<float>::FGetter::CreateUObject(GEngine, &UEngine::GetDisplayGamma));
		PickerArgs.ColorArray = &FColorArray;

		OpenColorPicker(PickerArgs);

		RebuildTexture();
		return FReply::Handled();
	}

	FReply GetColorForMainBlock(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
	{
		if (MouseEvent.GetEffectingButton() != EKeys::LeftMouseButton)
		{
			return FReply::Unhandled();
		}

		TArray<FColor*> FColorArray;
		FColorArray.Add(&mainColor);
		FColorPickerArgs PickerArgs;
		PickerArgs.bIsModal = true;
		PickerArgs.bUseAlpha = true;
		PickerArgs.sRGBOverride = false;
		PickerArgs.DisplayGamma = TAttribute<float>::Create(TAttribute<float>::FGetter::CreateUObject(GEngine, &UEngine::GetDisplayGamma));
		PickerArgs.ColorArray = &FColorArray;

		OpenColorPicker(PickerArgs);

		if (autoGenerateGridColor)
			CreateGridColor();

		RebuildTexture();
		return FReply::Handled();
	}

	FReply GetColorForGridBlock(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
	{
		if (MouseEvent.GetEffectingButton() != EKeys::LeftMouseButton)
		{
			return FReply::Unhandled();
		}

		TArray<FColor*> FColorArray;
		FColorArray.Add(&gridColor);
		FColorPickerArgs PickerArgs;
		PickerArgs.bIsModal = true;
		PickerArgs.bUseAlpha = true;
		PickerArgs.sRGBOverride = false;
		PickerArgs.DisplayGamma = TAttribute<float>::Create(TAttribute<float>::FGetter::CreateUObject(GEngine, &UEngine::GetDisplayGamma));
		PickerArgs.ColorArray = &FColorArray;

		OpenColorPicker(PickerArgs);

		RebuildTexture();
		return FReply::Handled();
	}


	TSharedRef<SWidget> HandleComboGenerateWidget(TSharedPtr<FString> inItem)
	{
		return SNew(STextBlock)
			.Text(FText::FromString(*inItem));
	}

	FText HandleSizeText() const
	{
		return FText::FromString(*sizesList[selectedSize]);
	}

	void HandleSizeSelectionChanged(TSharedPtr<FString> inSelection, ESelectInfo::Type selectInfo)
	{
		if (inSelection.IsValid())
		{
			selectedSize = sizesList.IndexOfByKey(inSelection);
			textureSize = sizesVectorsList[selectedSize];
		
			if (gridSubdivisions >= textureSize.X)
				gridSubdivisions = textureSize.X / 2;

			RebuildTexture();
		}
	}

};