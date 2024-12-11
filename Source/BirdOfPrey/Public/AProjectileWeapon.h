// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AProjectileWeapon.generated.h"

UCLASS()
class BIRDOFPREY_API AAProjectileWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAProjectileWeapon();
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsFiring() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UObject* ProjectileType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	int32 NumShots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
