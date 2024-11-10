#pragma once
#include "CoreMinimal.h"
#include "BlackPenNotHeldWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenNotHeldWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName _text;
    
    UPROPERTY(EditAnywhere)
    FName _bg;
    
    FBlackPenNotHeldWidgetName();
};

