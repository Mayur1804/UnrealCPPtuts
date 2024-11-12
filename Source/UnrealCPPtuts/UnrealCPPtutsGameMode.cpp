// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCPPtutsGameMode.h"
#include "UnrealCPPtutsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCPPtutsGameMode::AUnrealCPPtutsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
