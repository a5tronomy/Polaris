#pragma once
#include "CoreMinimal.h"
#include "PolarisTestTaskArg.generated.h"

USTRUCT(BlueprintType)
struct FPolarisTestTaskArg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> IntParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> FloatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> StringParams;
    
    POLARIS_API FPolarisTestTaskArg();
};

