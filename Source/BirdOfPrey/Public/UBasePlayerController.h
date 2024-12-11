// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UBasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
    AUBasePlayerController();

    // Functions
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CalcScreenDimensions();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDeath();

    // Interface Implementation
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

protected:

    // Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bDiedWhileFiring;

   
    virtual void BeginPlay() override;
};
