#pragma once
#include "CoreMinimal.h"
#include "PolarisStageForcusCameraSoftRef.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPolarisStageForcusCameraSoftRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> Camera1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> Camera2P;
    
    POLARIS_API FPolarisStageForcusCameraSoftRef();
};

