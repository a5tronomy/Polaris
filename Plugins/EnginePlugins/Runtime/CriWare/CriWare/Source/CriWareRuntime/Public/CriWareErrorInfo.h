#pragma once
#include "CoreMinimal.h"
#include "ECriWareErrorType.h"
#include "CriWareErrorInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FCriWareErrorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ErrorID;
    
    UPROPERTY(BlueprintReadOnly)
    ECriWareErrorType ErrorType;
    
    UPROPERTY(BlueprintReadOnly)
    FString Message;
    
    FCriWareErrorInfo();
};

