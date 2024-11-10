#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoAttachedAisacControlParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoAttachedAisacControlParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ID;
    
    CRIWARERUNTIME_API FAtomCueInfoAttachedAisacControlParam();
};

