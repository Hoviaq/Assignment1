// Fill out your copyright notice in the Description page of Project Settings.


#include "AProjectileWeapon.h"

// Sets default values
AAProjectileWeapon::AAProjectileWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAProjectileWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAProjectileWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAProjectileWeapon::SpawnProjectile()
{
  
}

FTransform AAProjectileWeapon::GetProjectileSpawnTransform() const
{
    
    return FTransform();
}

bool AAProjectileWeapon::ReadyToFire() const
{
y
    return false;
}

bool AAProjectileWeapon::IsFiring() const
{
    
    return false;
}
