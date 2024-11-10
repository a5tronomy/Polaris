#pragma once
#include "CoreMinimal.h"
#include "EventOnResetPlayerPhysicsParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnResetPlayerPhysicsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnResetPlayerPhysicsParam();
};

