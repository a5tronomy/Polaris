#pragma once
#include "CoreMinimal.h"
#include "PolarisStageNiagaraSystem.h"
#include "PolarisStageNiagaraSystemArray.generated.h"

USTRUCT(BlueprintType)
struct FPolarisStageNiagaraSystemArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageNiagaraSystem> Effects;
    
    POLARIS_API FPolarisStageNiagaraSystemArray();
};

