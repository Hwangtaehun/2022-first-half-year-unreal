// Copyright Epic Games, Inc. All Rights Reserved.

#include "class2GameMode.h"
#include "class2HUD.h"
#include "class2Character.h"
#include "UObject/ConstructorHelpers.h"

Aclass2GameMode::Aclass2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Aclass2HUD::StaticClass();
}
