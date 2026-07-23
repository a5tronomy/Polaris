#pragma once
#include "CoreMinimal.h"
#include "ItemAddHitEffect.h"
#include "ItemAddHitEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemAddHitEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int32, FItemAddHitEffect> ItemAddHitEffect;
    
    POLARIS_API FItemAddHitEffectInfo();
};

