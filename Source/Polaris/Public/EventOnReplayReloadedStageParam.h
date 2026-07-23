#pragma once
#include "CoreMinimal.h"
#include "EventOnReplayReloadedStageParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnReplayReloadedStageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 last_stageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 now_stageSequenceId;
    
    POLARIS_API FEventOnReplayReloadedStageParam();
};

