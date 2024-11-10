#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CatwalkClothSettings.generated.h"

UCLASS(DefaultConfig, Config=CatwalkCloth)
class CATWALKCLOTH_API UCatwalkClothSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float MaxAdaptiveIterationRatio;
    
    UPROPERTY(Config)
    uint16 MaxAbsoluteAdaptiveIterations;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxSimulationDeltaTime;
    
    UPROPERTY(Config, EditAnywhere)
    float SubstepThreshold;
    
    UCatwalkClothSettings();

};

