#pragma once
#include "CoreMinimal.h"
#include "ItemUniqueCharacterEffectArray.h"
#include "ItemUniqueCharacterEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemUniqueCharacterEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int32, FItemUniqueCharacterEffectArray> ItemUniqueCharacterEffect;
    
    POLARIS_API FItemUniqueCharacterEffectInfo();
};

