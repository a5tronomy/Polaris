#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisStageNiagaraSystem.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageNiagaraSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform SpawnLocation;
    
    POLARIS_API FPolarisStageNiagaraSystem();
};

