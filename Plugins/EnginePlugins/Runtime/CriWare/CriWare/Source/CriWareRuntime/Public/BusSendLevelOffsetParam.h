#pragma once
#include "CoreMinimal.h"
#include "BusSendLevelOffsetParam.generated.h"

USTRUCT(BlueprintType)
struct FBusSendLevelOffsetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 BusId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LevelOffset;
    
    CRIWARERUNTIME_API FBusSendLevelOffsetParam();
};

