#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Subsystems/WorldSubsystem.h"
#include "PolarisLightSubsystem.generated.h"

class AActor;
class APolarisCharacterLightBase;

UCLASS(BlueprintType)
class POLARIS_API UPolarisLightSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    TArray<AActor*> CustomLight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    TArray<APolarisCharacterLightBase*> CharacterLightList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    AActor* DefaultCharacterLight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    float CurrentStageBaseExposure;
    
    UPolarisLightSubsystem();

    UFUNCTION(BlueprintPure)
    AActor* GetCharacterActor();
    
};

