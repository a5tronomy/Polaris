#pragma once
#include "CoreMinimal.h"
#include "PolarisStageDirectorInfo.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPolarisStageDirectorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Tags;
    
    POLARIS_API FPolarisStageDirectorInfo();
};

