#pragma once
#include "CoreMinimal.h"
#include "BlackPen.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString IconResource;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadOnly)
    int32 UnlockLevel;
    
    FBlackPen();
};

