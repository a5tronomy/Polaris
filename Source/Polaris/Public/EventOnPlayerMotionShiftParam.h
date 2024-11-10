#pragma once
#include "CoreMinimal.h"
#include "EventOnPlayerMotionShiftParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPlayerMotionShiftParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnPlayerMotionShiftParam();
};

