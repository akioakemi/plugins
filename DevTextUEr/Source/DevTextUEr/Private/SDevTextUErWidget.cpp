// DevTextUEr
// (c) 2017 Turfster
// This code is ugly and unoptimised as all hell

#include "DevTextUEr.h"
#include "SDevTextUErWidget.h"
#include "SlateOptMacros.h"

#define LOCTEXT_NAMESPACE "SDevTextUErWidget"
void SDevTextUErWidget::Construct(const FArguments& InArgs)
{
	sizesList.Empty();
	for (int i = 0; i < sizesVectorsList.Num(); i++)
		sizesList.Add(MakeShareable(new FString(FString::FromInt(sizesVectorsList[i].X) + "x" + FString::FromInt(sizesVectorsList[i].Y))));

	selectedSize = sizesVectorsList.IndexOfByKey(FVector2D(256,256));
	initialSizeSelected = sizesList[selectedSize];

	textureArray.AddZeroed(256 * 256 * 4);
	textureBrush = FSlateDynamicImageBrush::CreateWithImageData(FName("devTexture"), textureSize, textureArray);

	RebuildTexture();
	RedrawTexture();

	int firstColumnWidth = 130;
	int secondColumnWidth = 170;

	ChildSlot
	[
		SNew(SHorizontalBox)
		+SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(3.f, 1.f)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHeader)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("previewHeader", "Preview"))
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SBox)
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				.WidthOverride(512)
				.HeightOverride(512)
				[
					SNew(SBox)
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					.WidthOverride(this, &SDevTextUErWidget::CalculateWidth)
					.HeightOverride(this, &SDevTextUErWidget::CalculateHeight)
					[
						SAssignNew(myImage, SImage)
						.Image(this, &SDevTextUErWidget::GetTextureImage)
					]
				]
			]
		]
		+SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(3.f, 1.f)
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHeader)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("settingsHeader", "Settings"))
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("size","Texture size: "))
					]
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)

					[
						SNew(SComboBox<TSharedPtr<FString>>)
						.OptionsSource(&sizesList)
						.InitiallySelectedItem(initialSizeSelected)
						.OnSelectionChanged(this, &SDevTextUErWidget::HandleSizeSelectionChanged)
						.OnGenerateWidget(this, &SDevTextUErWidget::HandleComboGenerateWidget)
						[
							SNew(STextBlock)
							.Text(this, &SDevTextUErWidget::HandleSizeText)
						]
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 5.f)
			[
				SNew(SSpacer)
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("grid", "Generate grid: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SCheckBox)
						.IsChecked(this, &SDevTextUErWidget::GetMakeGrid)
						.OnCheckStateChanged(this, &SDevTextUErWidget::GetMakeGridChanged)
						.ToolTipText(LOCTEXT("gridTooltip", "Generate checkerboard grid"))
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("gridSize", "Grid size: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SSpinBox<int32>)
						.ContentPadding(2.0f)
						.MinValue(2)
						.MaxValue(this, &SDevTextUErWidget::GetMaxColumns)//2048)
						.Value(this, &SDevTextUErWidget::GetGridColumns)
						.OnValueChanged(this, &SDevTextUErWidget::SetGridColumns)
						.ToolTipText(LOCTEXT("gridSizeTooltip", "How many grid subdivisions there should be\r\n(Note that sliding this can take ages on larger sizes)"))
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("gridAutoColor", "Auto-generate color: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SCheckBox)
						.IsChecked(this, &SDevTextUErWidget::GetMakeAutoGridColor)
						.OnCheckStateChanged(this, &SDevTextUErWidget::GetMakeAutoGridColorChanged)
						.ToolTipText(LOCTEXT("gridAutoColorTooltip", "Turn on automatic generation of complementary grid color"))
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 5.f)
			[
				SNew(SSpacer)
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("steps", "Generate steps: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SCheckBox)
						.IsChecked(this, &SDevTextUErWidget::GetMakeSteps)
						.OnCheckStateChanged(this, &SDevTextUErWidget::GetMakeStepsChanged)
						.ToolTipText(LOCTEXT("stepsTooltip", "Generate <grid size> steps"))
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("stepsRtoL", "Generate right to left: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SCheckBox)
						.IsChecked(this, &SDevTextUErWidget::GetMakeStepsRtoL)
						.OnCheckStateChanged(this, &SDevTextUErWidget::GetMakeStepsRtoLChanged)
						.ToolTipText(LOCTEXT("stepsRtoLTooltip", "Generate steps from right to left if checked, left to right if unchecked"))
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("stepsOutline", "Draw step outline: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SCheckBox)
						.IsChecked(this, &SDevTextUErWidget::GetMakeStepsOutline)
						.OnCheckStateChanged(this, &SDevTextUErWidget::GetMakeStepsOutlineChanged)
						.ToolTipText(LOCTEXT("stepsOutlineTooltip", "Generate an outline around the steps"))
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 5.f)
			[
				SNew(SSpacer)
			] 
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("corners", "Outline: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.MaxWidth(50)
						[
							CreateRadioButton(LOCTEXT("None", "None"), LOCTEXT("None_tooltip", "Draw no outline"), ERadioChoice::None)
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							CreateRadioButton(LOCTEXT("Corner", "Corners"), LOCTEXT("Corner_tooltip", "Only draw corners"), ERadioChoice::Corners)
						]
						+ SHorizontalBox::Slot()
						.MaxWidth(40)
						[
							CreateRadioButton(LOCTEXT("Full", "Full"), LOCTEXT("Full_tooltip", "Draw full outline"), ERadioChoice::Full)
						]
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 5.f)
			[
				SNew(SSpacer)
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("gradient", "Draw gradient: "))
					]
				]	
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SCheckBox)
						.IsChecked(this, &SDevTextUErWidget::GetMakeGradient)
						.OnCheckStateChanged(this, &SDevTextUErWidget::GetMakeGradientChanged)
						.ToolTipText(LOCTEXT("gradientTooltip", "Create a gradient"))
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("gradDir", "Directions: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							CreateRadioButton(LOCTEXT("LtoR", "L>R"), LOCTEXT("LtoR_tooltip", "Gradient Left to Right"), ERadioChoice::GradLtoR)
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							CreateRadioButton(LOCTEXT("RtoL", "R>L"), LOCTEXT("RtoL_tooltip", "Gradient Right to Left"), ERadioChoice::GradRtoL)
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							CreateRadioButton(LOCTEXT("TtoB", "T>B"), LOCTEXT("TtoB_tooltip", "Gradient Top to Bottom"), ERadioChoice::GradTtoB)
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							CreateRadioButton(LOCTEXT("BtoT", "B>T"), LOCTEXT("BtoT_tooltip", "Gradient Bottom to Top"), ERadioChoice::GradBtoT)
						]
					]
				]
			]
			+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(3.f, 5.f)
				[
					SNew(SSpacer)
				]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("drawName", "Label texture: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[	
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						[
							SNew(SBox)
							.WidthOverride(60)
							[
								SNew(SCheckBox)
								.IsChecked(this, &SDevTextUErWidget::GetLabelCenter)
								.OnCheckStateChanged(this, &SDevTextUErWidget::GetLabelCenterChanged)
								.IsEnabled(this, &SDevTextUErWidget::LabelCornersEnabled)
								.ToolTipText(LOCTEXT("labelNameTooltip", "Add the texture name to the texture"))
							]
						]
						+SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						[
							SNew(SBox)
							.WidthOverride(secondColumnWidth-60)
							[
								SNew(SHorizontalBox)
								+SHorizontalBox::Slot()
								.AutoWidth()
								.VAlign(VAlign_Center)
								[
									SNew(SBox)
									.WidthOverride(secondColumnWidth-80)
									[
										SNew(STextBlock)
										.Text(LOCTEXT("labelTopLeft", "Top left: "))
									]
								]	
								+ SHorizontalBox::Slot()
								.AutoWidth()
								.VAlign(VAlign_Center)
								[
									SNew(SBox)
									.WidthOverride(20)
									[
										SNew(SCheckBox)
										.IsChecked(this, &SDevTextUErWidget::GetLabelTopLeft)
										.OnCheckStateChanged(this, &SDevTextUErWidget::GetLabelTopLeftChanged)
										.IsEnabled(this, &SDevTextUErWidget::LabelCornersEnabled)
										.ToolTipText(LOCTEXT("labelTopLeftTooltip", "Move the label to the top left instead of the center"))
									]
								]
							]
						]
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("drawSize", "Label texture size: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SCheckBox)
						.IsChecked(this, &SDevTextUErWidget::GetLabelSize)
						.OnCheckStateChanged(this, &SDevTextUErWidget::GetLabelSizeChanged)
						.IsEnabled(this, &SDevTextUErWidget::LabelCornersEnabled)
						.ToolTipText(LOCTEXT("labelSizeTooltip", "Add the texture size to the texture"))
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("drawLocations", "Label corners: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						[
							SNew(SBox)
							.WidthOverride(60)
							[
								SNew(SCheckBox)
								.IsChecked(this, &SDevTextUErWidget::GetLabelCorners)
								.OnCheckStateChanged(this, &SDevTextUErWidget::GetLabelCornersChanged)
								.IsEnabled(this, &SDevTextUErWidget::LabelCornersEnabled)
								.ToolTipText(LOCTEXT("labelCornerTooltip","Enable UV labeling in corners (only for textures larger than 64x64)"))
							]
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						[
							SNew(SBox)
							.WidthOverride(secondColumnWidth-60)
							[
								SNew(SHorizontalBox)
								+SHorizontalBox::Slot()
								.AutoWidth()
								.VAlign(VAlign_Center)
								[
									SNew(SBox)
									.WidthOverride(secondColumnWidth-80)
									[
										SNew(STextBlock)
										.Text(LOCTEXT("drawLocationsPixels", "In pixels: "))
									]
								]
								+SHorizontalBox::Slot()
								.AutoWidth()
								.VAlign(VAlign_Center)
								[
									SNew(SBox)
									.WidthOverride(20)
									[
										SNew(SCheckBox)
										.IsChecked(this, &SDevTextUErWidget::GetLabelCornersPixels)
										.OnCheckStateChanged(this, &SDevTextUErWidget::GetLabelCornersPixelsChanged)
										.IsEnabled(this, &SDevTextUErWidget::LabelCornersEnabled)
										.ToolTipText(LOCTEXT("labelCornerPXTooltip", "Use pixel sizes instead of 0, 1 values"))
									]
								]
							]
						]
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("drawLocationsBottomLeft", "0,0 is bottom left: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SCheckBox)
						.IsChecked(this, &SDevTextUErWidget::GetLabelBottomLeft)
						.OnCheckStateChanged(this, &SDevTextUErWidget::GetLabelBottomLeftChanged)
						.IsEnabled(this, &SDevTextUErWidget::LabelCornersEnabled)
						.ToolTipText(LOCTEXT("labelBottomLeftTooltip", "0,0 starts in the bottom left"))
					]
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHeader)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("colorsHeader", "Colors"))
				]

			]
			+SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("mainColor","Primary: "))
					]
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Fill)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SColorBlock)
						.Color(this, &SDevTextUErWidget::GetMainColor)
						.Size(FVector2D(16.f, 16.f))
						.OnMouseButtonDown(this, &SDevTextUErWidget::GetColorForMainBlock)
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.VAlign(VAlign_Center)
				.AutoWidth()
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("gridColor", "Secondary: "))
					]
				]
				+ SHorizontalBox::Slot()
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Fill)
				.AutoWidth()
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SColorBlock)
						.Color(this, &SDevTextUErWidget::GetGridColor)
						.Size(FVector2D(16.f, 16.f))
						.OnMouseButtonDown(this, &SDevTextUErWidget::GetColorForGridBlock)
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.VAlign(VAlign_Center)
				.AutoWidth()
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("lineColor", "Outline & text: "))
					]
				]
				+ SHorizontalBox::Slot()
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Fill)
				.AutoWidth()
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SColorBlock)
						.Color(this, &SDevTextUErWidget::GetLineColor)
						.Size(FVector2D(16.f, 16.f))
						.OnMouseButtonDown(this, &SDevTextUErWidget::GetColorForLineBlock)
					]
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHeader)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("saveHeader","Save"))
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("textureName", "Texture name: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SEditableTextBox)
						.BackgroundColor(FSlateColor(FLinearColor(FColor::White)))
						.OnTextChanged(this, &SDevTextUErWidget::OnFilenameChanged)
						.Text(this, &SDevTextUErWidget::GetFilename)
						.ToolTipText(LOCTEXT("textureNameTooltip", "Name of the texture (T_ will be added on write to keep with Epic's rules)"))
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("textureDir", "Texture directory: "))
					]
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SBox)
							.WidthOverride(secondColumnWidth-25)
							[
								SNew(SEditableTextBox)
								.BackgroundColor(FSlateColor(FLinearColor(FColor::White)))
								.OnTextChanged(this, &SDevTextUErWidget::OnDirectoryChanged)
								.Text(this, &SDevTextUErWidget::GetDirectory)
								.ToolTipText(LOCTEXT("textureDirectoryTooltip", "Location to save the generated textures in"))
							]
						]
						+SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SBox)
							.WidthOverride(25)
							[
								SNew(SButton)
								.OnClicked(this, &SDevTextUErWidget::GetDirectoryButton)
								.IsEnabled(true)
								.HAlign(HAlign_Center)
								.VAlign(VAlign_Center)
								.Text(LOCTEXT("ImportButtonText", "..."))
								.ToolTipText(LOCTEXT("textureDirectoryButtonTooltip", "Choose a location to save the generated textures in"))
							]
						]
					]
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3.f, 1.f)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SBox)
					.WidthOverride(firstColumnWidth)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("empty"," "))
					]
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Fill)
				[
					SNew(SBox)
					.WidthOverride(secondColumnWidth)
					[
						SNew(SButton)
						.HAlign(HAlign_Center)
						.Text(LOCTEXT("saveButton","Save texture"))
						.OnClicked(this, &SDevTextUErWidget::SaveTexture)
					]
				]
			]
		]
	];
}


#undef LOCTEXT_NAMESPACE