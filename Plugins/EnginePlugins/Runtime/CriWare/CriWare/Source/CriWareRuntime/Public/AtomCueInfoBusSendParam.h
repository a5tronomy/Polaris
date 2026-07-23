#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoBusSendParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoBusSendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Enable;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Level;
    
    CRIWARERUNTIME_API FAtomCueInfoBusSendParam();
};

