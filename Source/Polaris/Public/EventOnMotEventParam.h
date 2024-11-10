#pragma once
#include "CoreMinimal.h"
#include "EMotheadEvent.h"
#include "EventOnMotEventParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnMotEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMotheadEvent Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnMotEventParam();
};

