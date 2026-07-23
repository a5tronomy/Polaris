#pragma once
#include "CoreMinimal.h"
#include "EventOnPowerModeBeginParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPowerModeBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnPowerModeBeginParam();
};

