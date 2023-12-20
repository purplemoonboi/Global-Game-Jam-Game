// Copyright Epic Games, Inc. All Rights Reserved.

#include "GlobalGameJam24GameMode.h"
#include "GlobalGameJam24Character.h"
#include "UObject/ConstructorHelpers.h"

AGlobalGameJam24GameMode::AGlobalGameJam24GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
