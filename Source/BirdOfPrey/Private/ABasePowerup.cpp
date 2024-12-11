// Fill out your copyright notice in the Description page of Project Settings.


#include "ABasePowerup.h"

// Sets default values
AABasePowerup::AABasePowerup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	PickUpSoundCue = nullptr;
	PickUpParticleSystem = nullptr;

}

// Called when the game starts or when spawned
void AABasePowerup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABasePowerup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AABasePowerup::Apply()
{
	
}

void AABasePowerup::PlayEffects()
{
	
}

void AABasePowerup::Reset()
{
	
}