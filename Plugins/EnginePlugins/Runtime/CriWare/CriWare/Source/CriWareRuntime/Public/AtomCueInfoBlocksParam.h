#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoBlocksParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoBlocksParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 StartPosition;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Length;
    
    CRIWARERUNTIME_API FAtomCueInfoBlocksParam();
};

