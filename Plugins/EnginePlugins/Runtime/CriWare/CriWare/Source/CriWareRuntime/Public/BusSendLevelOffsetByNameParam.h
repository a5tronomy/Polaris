#pragma once
#include "CoreMinimal.h"
#include "BusSendLevelOffsetByNameParam.generated.h"

USTRUCT(BlueprintType)
struct FBusSendLevelOffsetByNameParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LevelOffset;
    
    CRIWARERUNTIME_API FBusSendLevelOffsetByNameParam();
};

