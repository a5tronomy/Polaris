#pragma once
#include "CoreMinimal.h"
#include "EffectUserParameterInt.generated.h"

USTRUCT(BlueprintType)
struct FEffectUserParameterInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ParameterInt;
    
    POLARIS_API FEffectUserParameterInt();
};

