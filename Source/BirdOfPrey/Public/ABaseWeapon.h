// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABaseWeapon.generated.h"

UCLASS()
class BIRDOFPREY_API AABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABaseWeapon();
    // Functions
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayFireEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FTransform GetFireEffectSpawnTransform() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasFinishedFiring() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsFiring() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bRequiresAimForAI;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsAutomatic;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
