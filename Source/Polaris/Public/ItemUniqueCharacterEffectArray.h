#pragma once
#include "CoreMinimal.h"
#include "ItemUniqueCharacterEffect.h"
#include "ItemUniqueCharacterEffectArray.generated.h"

USTRUCT()
struct FItemUniqueCharacterEffectArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FItemUniqueCharacterEffect> ItemEffect;
    
    POLARIS_API FItemUniqueCharacterEffectArray();
};

