// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UBaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBaseGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
    AUBaseGameMode();

    // Functions
    virtual void BeginPlay() override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void EndGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ResetGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void RespawnPlayer();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDied();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnEnemyDied();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnEnemyFrom();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void TrySpawnPowerUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetWorldScrollVelocity() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    AActor* GetWorldCameraActor() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetDistanceTravelled() const;

protected:
    virtual void BeginPlay() override;
    // Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float WorldScrollSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FVector2D MaxRelativePlayerOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    AActor* WorldCameraActor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UDataTable* PlayerAgentInfoTable;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float RespawnDelay;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float SpawnOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FTimerHandle StationarySpawnTimer;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FTimerHandle ShipSpawnTimer;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<UObject*> PowerUpList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float PickUpSpawnPercent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool IsGameOverScreen;
};
