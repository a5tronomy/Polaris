#pragma once
#include "CoreMinimal.h"
#include "EventOnMissileCancelParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnMissileCancelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnMissileCancelParam();
};

