#pragma once
#include "CoreMinimal.h"
#include "BlackPenPremiumWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenPremiumWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName button_premium;
    
    UPROPERTY(EditAnywhere)
    FName button_premium_ex;
    
    FBlackPenPremiumWidgetName();
};

