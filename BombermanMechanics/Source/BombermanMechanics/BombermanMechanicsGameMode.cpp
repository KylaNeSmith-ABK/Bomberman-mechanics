// Copyright Epic Games, Inc. All Rights Reserved.

#include "BombermanMechanicsGameMode.h"
#include "BombermanMechanicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABombermanMechanicsGameMode::ABombermanMechanicsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
