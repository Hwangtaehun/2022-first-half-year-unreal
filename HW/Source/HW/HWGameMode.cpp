// Copyright Epic Games, Inc. All Rights Reserved.

#include "HWGameMode.h"
#include "HWCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHWGameMode::AHWGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
