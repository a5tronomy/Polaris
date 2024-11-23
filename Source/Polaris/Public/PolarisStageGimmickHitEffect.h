#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGimmickHitEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageGimmickHitEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickHitEffect")
    UNiagaraSystem* EffectAsset;
    
    POLARIS_API FPolarisStageGimmickHitEffect();
};

