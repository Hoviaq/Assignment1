// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "UBaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBaseAIController : public AAIController
{
	GENERATED_BODY()

public:
    // Constructor
    AUBaseAIController();

    // Functions
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SelectTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateAim();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStartFire() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStopFire() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldUpdateAim() const;

protected:
    // Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UObject* Target;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UObject* ControlledAgent;

    
    virtual void BeginPlay() override;
	
};
