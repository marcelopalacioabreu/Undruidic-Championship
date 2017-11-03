// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UCGameMode.h"
#include "UCHUD.h"
#include "UCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUCGameMode::AUCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/BP_FPSCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUCHUD::StaticClass();
}
