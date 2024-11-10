#pragma once
#include "CoreMinimal.h"
#include "StoreButtonAnim.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct POLARIS_API FStoreButtonAnim {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWidgetAnimation* click;
    
    UPROPERTY()
    UWidgetAnimation* hover;
    
    UPROPERTY()
    UWidgetAnimation* Normal;
    
    UPROPERTY()
    UWidgetAnimation* In;
    
    FStoreButtonAnim();
};

