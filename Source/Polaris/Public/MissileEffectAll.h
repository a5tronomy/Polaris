#pragma once
#include "CoreMinimal.h"
#include "MissileEffect.h"
#include "MissileFrameEffect.h"
#include "MissileEffectAll.generated.h"

USTRUCT(BlueprintType)
struct FMissileEffectAll {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMissileEffect> StartEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<FMissileEffect> EndEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<FMissileFrameEffect> FrameEffects;
    
    POLARIS_API FMissileEffectAll();
};

