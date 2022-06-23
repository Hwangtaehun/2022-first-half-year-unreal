// Copyright Epic Games, Inc. All Rights Reserved.

#include "DesertSenceGameMode.h"
#include "DesertSenceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADesertSenceGameMode::ADesertSenceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
