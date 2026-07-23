#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoSelectorParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoSelectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Label;
    
    CRIWARERUNTIME_API FAtomCueInfoSelectorParam();
};

