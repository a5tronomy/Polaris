#pragma once
#include "CoreMinimal.h"
#include "EventOnRageArtsBeginParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRageArtsBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnRageArtsBeginParam();
};

