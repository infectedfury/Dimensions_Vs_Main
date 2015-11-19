// Fill out your copyright notice in the Description page of Project Settings.

#include "Dimensions.h"
#include "Graphics.h"


void UGraphics::SetGraphics()
{

	GEngine->GameUserSettings->ScalabilityQuality.AntiAliasingQuality = 6;
	GEngine->GameUserSettings->ScalabilityQuality.EffectsQuality = 4;
	GEngine->GameUserSettings->ScalabilityQuality.PostProcessQuality = 4;
	GEngine->GameUserSettings->ScalabilityQuality.ResolutionQuality = -1;
	GEngine->GameUserSettings->ScalabilityQuality.ShadowQuality = 4;
	GEngine->GameUserSettings->ScalabilityQuality.TextureQuality = 4;
	GEngine->GameUserSettings->ScalabilityQuality.ViewDistanceQuality = 1;
}