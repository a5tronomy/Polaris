#pragma once
#include "CoreMinimal.h"
#include "BlackPenXPInfoWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenXPInfoWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName _xp_num;
    
    UPROPERTY(EditAnywhere)
    FName _xp_max;
    
    FBlackPenXPInfoWidgetName();
};

