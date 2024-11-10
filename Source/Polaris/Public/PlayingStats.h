#pragma once
#include "CoreMinimal.h"
#include "TopStats.h"
#include "PlayingStats.generated.h"

USTRUCT(BlueprintType)
struct FPlayingStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> CategoryStats;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTopStats> TopStats;
    
    POLARIS_API FPlayingStats();
};

