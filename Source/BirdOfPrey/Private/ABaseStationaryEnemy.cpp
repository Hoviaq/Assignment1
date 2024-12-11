// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseStationaryEnemy.h"

// Sets default values
AABaseStationaryEnemy::AABaseStationaryEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseStationaryEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseStationaryEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABaseStationaryEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AABaseStationaryEnemy::Reset()
{

}