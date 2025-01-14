// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RF_PlayModeController.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EPlayMode : uint8
{
	PawnInteraction		UMETA(DisplayName = "Pawn Interaction"),
	WorldInteraction	UMETA(DisplayName = "World Interaction"),
	UIInteraction		UMETA(DisplayName = "UI Interaction"),
};

class REACTIVEFRAMEWORK_API RF_PlayModeController
{
public:
	RF_PlayModeController();
	~RF_PlayModeController();
};
