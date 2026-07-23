#pragma once
#include "CoreMinimal.h"
#include "PolarisMobReactionContext.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPolarisMobReactionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartPosition;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentPosition;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsEnd;
    
    POLARIS_API FPolarisMobReactionContext();
};

