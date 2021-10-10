// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "CharacterController.generated.h"

UCLASS()
class FIRSTPERSONHORROR_API ACharacterController : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ACharacterController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	void MoveX(float xVal);
	void MoveZ(float zVal);
	void RotX(float xRot);
	void RotY(float yRot);

	UFUNCTION()
	void StartJump();

	UFUNCTION()
	void StopJump();

	UPROPERTY(EditAnywhere, Category = "Camera")
		UCameraComponent* cam;

};
