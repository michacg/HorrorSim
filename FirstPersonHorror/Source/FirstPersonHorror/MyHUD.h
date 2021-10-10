// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONHORROR_API AMyHUD : public AHUD
{
	GENERATED_BODY()

	
public:
	AMyHUD(const FObjectInitializer& ObjectInitializer);

	UPROPERTY()
		UFont* HUDFont;
	virtual void DrawHUD() override;

private:
	UTexture2D* CrosshairTex;
};
