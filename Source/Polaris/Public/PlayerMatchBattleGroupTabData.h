#pragma once
#include "CoreMinimal.h"
#include "PlayerMatchBattleGroupTabData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerMatchBattleGroupTabData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Number;
    
    UPROPERTY(BlueprintReadOnly)
    bool in_battle;
    
    POLARIS_API FPlayerMatchBattleGroupTabData();
};

