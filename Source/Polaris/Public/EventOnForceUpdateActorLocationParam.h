#pragma once
#include "CoreMinimal.h"
#include "EventOnForceUpdateActorLocationParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnForceUpdateActorLocationParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnForceUpdateActorLocationParam();
};

