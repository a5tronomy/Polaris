#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisStageSpawnEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageSpawnEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Offset;
    
    POLARIS_API FPolarisStageSpawnEffect();
};

