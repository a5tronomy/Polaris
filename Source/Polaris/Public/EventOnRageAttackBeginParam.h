#pragma once
#include "CoreMinimal.h"
#include "EventOnRageAttackBeginParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRageAttackBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnRageAttackBeginParam();
};

