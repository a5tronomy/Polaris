#pragma once
#include "CoreMinimal.h"
#include "AttackingCharacterInfo.generated.h"

class APolarisCharacterActor;

USTRUCT(BlueprintType)
struct FAttackingCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<APolarisCharacterActor> Actor;
    
    POLARIS_API FAttackingCharacterInfo();
};

