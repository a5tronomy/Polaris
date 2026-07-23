#pragma once
#include "CoreMinimal.h"
#include "ExtraAbilityEffectItemInfo.h"
#include "ExtraAbilityEffectItem.generated.h"

USTRUCT(BlueprintType)
struct FExtraAbilityEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int32, FExtraAbilityEffectItemInfo> AbilityEffectItemMap;
    
    POLARIS_API FExtraAbilityEffectItem();
};

