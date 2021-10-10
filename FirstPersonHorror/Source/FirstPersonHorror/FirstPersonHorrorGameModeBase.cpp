// Copyright Epic Games, Inc. All Rights Reserved.


#include "FirstPersonHorrorGameModeBase.h"
#include "MyHUD.h"
#include "CharacterController.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"
#include "GameFramework/GameMode.h"

AFirstPersonHorrorGameModeBase::AFirstPersonHorrorGameModeBase()
	: Super()
{
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("Class/Script/FirstPersonHorror.CharacterController"));
	DefaultPawnClass = ACharacterController::StaticClass();
	HUDClass = AMyHUD::StaticClass();
}

void AFirstPersonHorrorGameModeBase::StartPlay()
{
    Super::StartPlay();

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
    }
}