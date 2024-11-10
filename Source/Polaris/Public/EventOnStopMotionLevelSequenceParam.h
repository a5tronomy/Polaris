#pragma once
#include "CoreMinimal.h"
#include "EventOnStopMotionLevelSequenceParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnStopMotionLevelSequenceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnStopMotionLevelSequenceParam();
};

