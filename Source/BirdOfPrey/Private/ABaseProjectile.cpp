// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseProjectile.h"

// Sets default values
AABaseProjectile::AABaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AABaseProjectile::InitialiseProjectile()
{
   
}

void AABaseProjectile::DealDamageTo()
{
  
}

void AABaseProjectile::OnHit()
{
   
}

FName AABaseProjectile::GetInstigatorCollisionChannel() const
{

}

bool AABaseProjectile::CheckForGroundUnitTarget() const
{
    
}

bool AABaseProjectile::ShouldCheckForGroundTarget() const
{
    

}

void AABaseProjectile::AdjustToTarget()
{

}

bool AABaseProjectile::IsEnemyProjectile() const
{
    
}

void AABaseProjectile::AdjustToDesiredZ()
{
 
}

void AABaseProjectile::Reset()
{
}