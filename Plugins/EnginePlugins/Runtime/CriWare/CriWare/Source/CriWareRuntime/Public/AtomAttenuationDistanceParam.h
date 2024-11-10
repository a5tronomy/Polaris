#pragma once
#include "CoreMinimal.h"
#include "AtomAttenuationDistanceParam.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomAttenuationDistanceParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    FAtomAttenuationDistanceParam();
};

