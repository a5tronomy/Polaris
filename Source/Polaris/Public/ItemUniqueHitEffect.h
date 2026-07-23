#pragma once
#include "CoreMinimal.h"
#include "ItemUniqueHitEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct POLARIS_API FItemUniqueHitEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* UniqueHitEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SortPriority;
    
    FItemUniqueHitEffect();
};

