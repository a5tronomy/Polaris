#pragma once
#include "CoreMinimal.h"
#include "AtomGameVariableParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomGameVariableParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Value;
    
    CRIWARERUNTIME_API FAtomGameVariableParam();
};

