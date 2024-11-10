#pragma once
#include "CoreMinimal.h"
#include "EventOnFootStepSoundParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnFootStepSoundParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnFootStepSoundParam();
};

