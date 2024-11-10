#pragma once
#include "CoreMinimal.h"
#include "BusSendLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FBusSendLevelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 BusId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Level;
    
    CRIWARERUNTIME_API FBusSendLevelParam();
};

