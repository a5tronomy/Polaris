#pragma once
#include "CoreMinimal.h"
#include "EventOnPowerModeEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPowerModeEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnPowerModeEndParam();
};

