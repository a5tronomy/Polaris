#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGDialogButtonEnableParameter.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGDialogButtonEnableParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite)
    bool is_enable;
    
    POLARIS_API FPolarisUMGDialogButtonEnableParameter();
};

