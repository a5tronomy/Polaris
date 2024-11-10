#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGPlayDataStatsItemStruct.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGPlayDataStatsItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Rate;
    
    POLARIS_API FPolarisUMGPlayDataStatsItemStruct();
};

