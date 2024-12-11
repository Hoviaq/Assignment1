// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UBaseGameInstance.generated.h"

/**
 * 
 */
USTRUCT()
class BIRDOFPREY_API UUBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
   
    AUBaseGameInstance();

    // Functions
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetPlayerAgentInfoFor();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    UObject* GetPlayerAgentInfoFor() const;

    // Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TMap<FString, UObject*> PlayerAgentInfo;

    // Event Dispatchers
    UPROPERTY(BlueprintAssignable, Category = "BirdOfPrey")
    FOnAgentInfoChange OnAgentInfoChange;
};
