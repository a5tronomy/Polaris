#pragma once
#include "CoreMinimal.h"
#include "EventOnWarpEndEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnWarpEndEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_rage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isZone;
    
    POLARIS_API FEventOnWarpEndEffectParam();
};

