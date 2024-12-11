// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABaseProjectile.generated.h"

UCLASS()
class BIRDOFPREY_API AABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABaseProjectile();
 

    // Functions
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void InitialiseProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void DealDamageTo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnHit();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FName GetInstigatorCollisionChannel() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool CheckForGroundUnitTarget() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldCheckForGroundTarget() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsEnemyProjectile() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToDesiredZ();

    // Interface Implementation
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    // Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float ProjectileSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Damage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* DetonationEmitter;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckDistance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckAngle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    AActor* GroundTarget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float DesiredZ;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* ImpactSound;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
