#pragma once
#include "CoreMinimal.h"
#include "AtomAisacControlWithVelocityParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomAisacControlWithVelocityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AisacControlName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVelocity;
    
    CRIWARERUNTIME_API FAtomAisacControlWithVelocityParam();
};

