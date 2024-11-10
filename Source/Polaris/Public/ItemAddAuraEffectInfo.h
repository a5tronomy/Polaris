#pragma once
#include "CoreMinimal.h"
#include "ItemAddAuraEffect.h"
#include "ItemAddAuraEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemAddAuraEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int32, FItemAddAuraEffect> ItemAddAuraEffect;
    
    POLARIS_API FItemAddAuraEffectInfo();
};

