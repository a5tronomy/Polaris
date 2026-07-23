#pragma once
#include "CoreMinimal.h"
#include "EventOnExArtsBeginParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnExArtsBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasEndCallback;
    
    POLARIS_API FEventOnExArtsBeginParam();
};

