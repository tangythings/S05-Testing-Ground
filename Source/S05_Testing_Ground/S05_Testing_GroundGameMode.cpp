// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "S05_Testing_GroundGameMode.h"
#include "S05_Testing_GroundHUD.h"
#include "S05_Testing_GroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS05_Testing_GroundGameMode::AS05_Testing_GroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_Testing_GroundHUD::StaticClass();
}
