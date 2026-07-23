#pragma once
#include "CoreMinimal.h"
#include "PolarisMobReaction.h"
#include "PolarisMobReactionAnimSequenceList.generated.h"

USTRUCT(BlueprintType)
struct FPolarisMobReactionAnimSequenceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisMobReaction> List;
    
    POLARIS_API FPolarisMobReactionAnimSequenceList();
};

