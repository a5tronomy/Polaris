#pragma once
#include "CoreMinimal.h"
#include "ButtonAnim.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct POLARIS_API FButtonAnim {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWidgetAnimation* In;
    
    UPROPERTY()
    UWidgetAnimation* out;
    
    FButtonAnim();
};

