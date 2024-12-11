// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "FSAgentInfo.generated.h"

/**
 * 
 */
USTRUCT()
struct BIRDOFPREY_API FFSAgentInfo : public FTableRowBase
{
    GENERATED_BODY()

public:
    // Variables
    FFSAgentInfo();
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FText Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UObject* WeaponType; // Use the appropriate class for BaseWeapon if available

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    USkeletalMesh* SkeletalMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UAnimInstance* AnimInstance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UTexture2D* Image;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Speed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float MeshScale;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FLinearColor Colour;
};
