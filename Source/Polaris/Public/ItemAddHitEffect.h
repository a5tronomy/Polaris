#pragma once
#include "CoreMinimal.h"
#include "ItemAddHitEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct POLARIS_API FItemAddHitEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* AddHitEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SortPriority;
    
    FItemAddHitEffect();
};

