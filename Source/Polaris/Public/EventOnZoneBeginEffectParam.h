#pragma once
#include "CoreMinimal.h"
#include "EventOnZoneBeginEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZoneBeginEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isRage;
    
    POLARIS_API FEventOnZoneBeginEffectParam();
};

