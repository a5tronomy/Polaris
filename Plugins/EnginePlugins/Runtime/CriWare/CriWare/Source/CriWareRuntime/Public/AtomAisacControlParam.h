#pragma once
#include "CoreMinimal.h"
#include "AtomAisacControlParam.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomAisacControlParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    FAtomAisacControlParam();
};

