#pragma once
#include "CoreMinimal.h"
#include "EventOnPlayMotionLevelSequenceParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPlayMotionLevelSequenceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Type;
    
    POLARIS_API FEventOnPlayMotionLevelSequenceParam();
};

