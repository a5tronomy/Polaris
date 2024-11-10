#pragma once
#include "CoreMinimal.h"
#include "EventOnPlayerUnEntryParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPlayerUnEntryParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnPlayerUnEntryParam();
};

