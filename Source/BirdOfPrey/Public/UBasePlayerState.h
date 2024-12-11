// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "UBasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBasePlayerState : public APlayerState
{
	GENERATED_BODY()
public:
    AUBasePlayerState();

    // functions
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AddScore();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ConsumeLife();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasRemainingLives() const;

    // interface implementation
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

protected:
    // variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float PlayerScore;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    int32 RemainingLives;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float TimeOfLastDeath;

    
    virtual void BeginPlay() override;
};
