// Fill out your copyright notice in the Description page of Project Settings.



#include "CharacterController.h"

// Sets default values
ACharacterController::ACharacterController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Allow Player to rotate
	bUseControllerRotationYaw = false;

	// Camera set up: Center of player, move along with player first-person
	cam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	cam->AttachTo(RootComponent);
	cam->SetRelativeLocation(FVector(0, 0, 40));
}

// Called when the game starts or when spawned
void ACharacterController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Horizontal", this, &ACharacterController::MoveX);
	InputComponent->BindAxis("Vertical", this, &ACharacterController::MoveZ);
	InputComponent->BindAxis("HorizontalRot", this, &ACharacterController::RotX);
	InputComponent->BindAxis("VerticalRot", this, &ACharacterController::RotY);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacterController::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacterController::StopJump);
}

void ACharacterController::MoveX(float xVal)
{
	if (xVal)
	{
		AddMovementInput(GetActorRightVector(), xVal);
	}
}

void ACharacterController::MoveZ(float zVal)
{
	if (zVal)
	{
		AddMovementInput(GetActorForwardVector(), zVal);
	}
}

void ACharacterController::RotX(float xRot)
{
	if (xRot)
	{
		AddActorLocalRotation(FRotator(0, xRot, 0));
	}
}

void ACharacterController::RotY(float yRot)
{
	if (yRot)
	{
		float current = cam->GetRelativeRotation().Pitch + yRot;

		if (current < 70 && current > -70)
		{
			cam->AddLocalRotation(FRotator(yRot, 0, 0));
		}

	}
}

void ACharacterController::StartJump()
{
	bPressedJump = true;
}

void ACharacterController::StopJump()
{
	bPressedJump = false;
}
