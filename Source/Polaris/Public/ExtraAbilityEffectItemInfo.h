#pragma once
#include "CoreMinimal.h"
#include "ItemEffect.h"
#include "ExtraAbilityEffectItemInfo.generated.h"

USTRUCT()
struct FExtraAbilityEffectItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FItemEffect> ItemEffect;
    
    POLARIS_API FExtraAbilityEffectItemInfo();
};

