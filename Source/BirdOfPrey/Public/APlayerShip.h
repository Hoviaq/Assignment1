// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "APlayerShip.generated.h"

UCLASS()
class BIRDOFPREY_API AAPlayerShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAPlayerShip();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector GetShipConstantVelocity() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ClampToCameraBounds();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector GetShipAxisAdjustment() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector CalcOutOfBoundsAdjustment() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    UObject* GetPlayerAgentInfo() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldSpawnAIController() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateHoverPitch();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasDiedRecently() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void TakeDamage();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UObject* BasePlayerController;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float InvulnerabilityTime;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
