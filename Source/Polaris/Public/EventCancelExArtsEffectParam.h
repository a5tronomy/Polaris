#pragma once
#include "CoreMinimal.h"
#include "EventCancelExArtsEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventCancelExArtsEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventCancelExArtsEffectParam();
};

