// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Graphics.generated.h"

/**
 * 
 */
UCLASS()
class  DIMENSIONS_API UGraphics : public UBlueprintFunctionLibrary
{
public:

	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = Grahpics)
	static void SetGraphics();


	
	
};
