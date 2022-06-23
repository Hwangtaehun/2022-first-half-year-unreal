// Copyright Epic Games, Inc. All Rights Reserved.

#include "SnowSenceGameMode.h"
#include "SnowSenceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASnowSenceGameMode::ASnowSenceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
