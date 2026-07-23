#pragma once
#include "CoreMinimal.h"
#include "PolarisMobCowardlyAnimalAnimationSet.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FPolarisMobCowardlyAnimalAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* WaitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequenceBase*> RunAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* AwayAnimation;
    
    POLARIS_API FPolarisMobCowardlyAnimalAnimationSet();
};

