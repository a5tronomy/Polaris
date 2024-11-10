#pragma once
#include "CoreMinimal.h"
#include "EventOnGuardDamageParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnGuardDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 opponent_id;
    
    POLARIS_API FEventOnGuardDamageParam();
};

