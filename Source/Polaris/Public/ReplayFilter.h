#pragma once
#include "CoreMinimal.h"
#include "ReplayFilter.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FReplayFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ID;
    
    FReplayFilter();
};

