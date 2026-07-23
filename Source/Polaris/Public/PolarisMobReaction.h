#pragma once
#include "CoreMinimal.h"
#include "PolarisMobReactionExtraAction.h"
#include "PolarisMobReaction.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPolarisMobReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomPlayRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomPlayRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomPlayStartMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisMobReactionExtraAction> ExtraActionList;
    
    POLARIS_API FPolarisMobReaction();
};

