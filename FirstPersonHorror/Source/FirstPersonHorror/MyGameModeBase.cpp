// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyHUD.h"
#include "CharacterController.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"
#include "GameFramework/GameMode.h"

AMyGameModeBase::AMyGameModeBase()
	: Super()
{
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("Class/Script/FirstPersonHorror.CharacterController"));
	DefaultPawnClass = ACharacterController::StaticClass();
	HUDClass = AMyHUD::StaticClass();
}

void AMyGameModeBase::StartPlay()
{
    Super::StartPlay();

    //StartMatch();

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
    }
}