// Copyright Epic Games, Inc. All Rights Reserved.


#include "Tests/AutomationTestSettings.h"


UAutomationTestSettings::UAutomationTestSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultScreenshotResolution = FIntPoint(1920, 1080);
}
