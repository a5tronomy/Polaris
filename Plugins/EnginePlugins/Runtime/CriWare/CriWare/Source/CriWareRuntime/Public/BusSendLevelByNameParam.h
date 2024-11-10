#pragma once
#include "CoreMinimal.h"
#include "BusSendLevelByNameParam.generated.h"

USTRUCT(BlueprintType)
struct FBusSendLevelByNameParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Level;
    
    CRIWARERUNTIME_API FBusSendLevelByNameParam();
};

