#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoSelectorParam.h"
#include "AtomCueInfoTrackParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoTrackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Volume;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FAtomCueInfoSelectorParam Selector;
    
    CRIWARERUNTIME_API FAtomCueInfoTrackParam();
};

