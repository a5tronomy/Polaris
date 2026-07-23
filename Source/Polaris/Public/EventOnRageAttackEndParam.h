#pragma once
#include "CoreMinimal.h"
#include "EventOnRageAttackEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRageAttackEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_rage;
    
    POLARIS_API FEventOnRageAttackEndParam();
};

