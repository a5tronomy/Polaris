#pragma once
#include "CoreMinimal.h"
#include "PolarisInt32Array.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisInt32Array {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> V;
    
    FPolarisInt32Array();
};

