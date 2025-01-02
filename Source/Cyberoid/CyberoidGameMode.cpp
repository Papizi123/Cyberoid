// Copyright Epic Games, Inc. All Rights Reserved.

#include "CyberoidGameMode.h"
#include "CyberoidCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACyberoidGameMode::ACyberoidGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
