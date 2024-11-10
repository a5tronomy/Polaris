#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorParam.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomSelectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Label;
    
    FAtomSelectorParam();
};

