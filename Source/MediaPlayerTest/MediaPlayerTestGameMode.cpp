// Copyright Epic Games, Inc. All Rights Reserved.

#include "MediaPlayerTestGameMode.h"
#include "MediaPlayerTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMediaPlayerTestGameMode::AMediaPlayerTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
