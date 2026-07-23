#pragma once
#include "CoreMinimal.h"
#include "TopStats.generated.h"

USTRUCT(BlueprintType)
struct FTopStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Type;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Score;
    
    POLARIS_API FTopStats();
};

