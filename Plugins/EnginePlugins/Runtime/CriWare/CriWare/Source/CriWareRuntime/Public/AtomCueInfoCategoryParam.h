#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoCategoryParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoCategoryParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    CRIWARERUNTIME_API FAtomCueInfoCategoryParam();
};

