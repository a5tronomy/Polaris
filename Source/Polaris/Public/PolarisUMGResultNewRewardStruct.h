#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGResultNewRewardStruct.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGResultNewRewardStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float sabValue;
    
    POLARIS_API FPolarisUMGResultNewRewardStruct();
};

