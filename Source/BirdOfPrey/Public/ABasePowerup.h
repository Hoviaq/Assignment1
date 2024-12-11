// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABasePowerup.generated.h"

UCLASS()
class BIRDOFPREY_API AABasePowerup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABasePowerup();
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();

	// Interface
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Reset();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* PickUpSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* PickUpParticleSystem;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
