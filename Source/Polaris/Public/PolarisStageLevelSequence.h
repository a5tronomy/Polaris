#pragma once
#include "CoreMinimal.h"
#include "PolarisStageLevelSequence.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPolarisStageLevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageLevelSequence")
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageLevelSequence")
    bool IsLoop;
    
    POLARIS_API FPolarisStageLevelSequence();
};

