#pragma once
#include "CoreMinimal.h"
#include "PolarisStageDirectorTransitionInFilter.h"
#include "PolarisStageDirectorTransitionOutFilter.h"
#include "PolarisStageDirectorTransition.generated.h"

USTRUCT(BlueprintType)
struct FPolarisStageDirectorTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisStageDirectorTransitionInFilter In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisStageDirectorTransitionOutFilter out;
    
    POLARIS_API FPolarisStageDirectorTransition();
};

