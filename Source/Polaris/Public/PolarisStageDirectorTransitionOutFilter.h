#pragma once
#include "CoreMinimal.h"
#include "EPolarisStageDirectorTransitionOutFilterType.h"
#include "PolarisStageDirectorTransitionOutFilter.generated.h"

USTRUCT(BlueprintType)
struct FPolarisStageDirectorTransitionOutFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisStageDirectorTransitionOutFilterType OutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Tag;
    
    POLARIS_API FPolarisStageDirectorTransitionOutFilter();
};

