// Fill out your copyright notice in the Description page of Project Settings.


#include "APlayerShip.h"

// Sets default values
AAPlayerShip::AAPlayerShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAPlayerShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAPlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FVector AAPlayerShip::GetShipConstantVelocity() const
{
    
    return FVector();
}

void AAPlayerShip::ClampToCameraBounds()
{
    
}

FVector AAPlayerShip::GetShipAxisAdjustment() const
{
    
    return FVector();
}

FVector AAPlayerShip::CalcOutOfBoundsAdjustment() const
{
    
    return FVector();
}

UObject* AAPlayerShip::GetPlayerAgentInfo() const
{
   
    return nullptr;
}

bool AAPlayerShip::ShouldSpawnAIController() const
{
    
    return false;
}

void AAPlayerShip::UpdateHoverPitch()
{
  
}

bool AAPlayerShip::HasDiedRecently() const
{
   
    return false;
}

void AAPlayerShip::TakeDamage()
{
    
}
