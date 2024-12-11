// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ABaseGameAgent.generated.h"

UCLASS()
class BIRDOFPREY_API AABaseGameAgent : public APawn
{
	GENERATED_BODY()

   

public:
	// Sets default values for this pawn's properties
	AABaseGameAgent();
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ChangeWeaponType();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FTransform GetWeaponSpawnTransform() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnDefaultWeapon();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void TakeDamage();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsAlive() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Died();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayHitEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CleanUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ApplyAgentInfo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayDeathEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForOutOfBounds();

    // Interface Implementation
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float MoveSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UObject* Weapon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UObject* DefaultWeaponType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UObject* AgentInfo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Points;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bCheckForOutOfBounds;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float OutOfBoundsCheckTolerance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FName WeaponSocketName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TEnumAsByte<EAttachmentRule> WeaponAttachRule;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FVector TargetLocation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
