#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MobAnimationSet.generated.h"

class UAnimSequence;

UCLASS(BlueprintType)
class POLARIS_API UMobAnimationSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 no;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* IdleAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* CheerSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* TerrorSequence;
    
    UMobAnimationSet();

};

