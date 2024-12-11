// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ABaseEnemyShip.generated.h"

UCLASS()
class BIRDOFPREY_API AABaseEnemyShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AABaseEnemyShip();

	// Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Reset();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UObject* ShipAIController;
	UFUNCTION()
	void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
	void Died();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
