// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseEnemyShip.h"

// Sets default values
AABaseEnemyShip::AABaseEnemyShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseEnemyShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseEnemyShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABaseEnemyShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AABaseEnemyShip::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	
}

void AABaseEnemyShip::Died()
{
	
}

void AABaseEnemyShip::Reset()
{
	
}

void AABaseEnemyShip::Move()
{
	
}