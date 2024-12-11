// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseShip.h"

// Sets default values
AABaseShip::AABaseShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABaseShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AABaseShip::Reset()
{
	
}

void AABaseShip::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	
}

