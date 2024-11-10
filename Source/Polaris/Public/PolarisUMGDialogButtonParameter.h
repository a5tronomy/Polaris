#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGDialogButtonParameter.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGDialogButtonParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite)
    FString Text;
    
    POLARIS_API FPolarisUMGDialogButtonParameter();
};

