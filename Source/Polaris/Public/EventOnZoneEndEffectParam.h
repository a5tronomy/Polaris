#pragma once
#include "CoreMinimal.h"
#include "EventOnZoneEndEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZoneEndEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_rage;
    
    POLARIS_API FEventOnZoneEndEffectParam();
};

