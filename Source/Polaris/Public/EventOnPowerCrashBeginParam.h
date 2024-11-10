#pragma once
#include "CoreMinimal.h"
#include "EventOnPowerCrashBeginParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPowerCrashBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 duration_frame;
    
    POLARIS_API FEventOnPowerCrashBeginParam();
};

