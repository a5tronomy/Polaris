#pragma once
#include "CoreMinimal.h"
#include "EPolarisStageDirectorTransitionInFilterType.h"
#include "PolarisStageDirectorTransitionInFilter.generated.h"

USTRUCT(BlueprintType)
struct FPolarisStageDirectorTransitionInFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisStageDirectorTransitionInFilterType InType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Tag;
    
    POLARIS_API FPolarisStageDirectorTransitionInFilter();
};

