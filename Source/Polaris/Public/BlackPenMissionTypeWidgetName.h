#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionTypeWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionTypeWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName title_text;
    
    UPROPERTY(EditAnywhere)
    FName numerator_text;
    
    UPROPERTY(EditAnywhere)
    FName slash_text;
    
    UPROPERTY(EditAnywhere)
    FName denominator_text;
    
    UPROPERTY(EditAnywhere)
    FName time_text;
    
    UPROPERTY(EditAnywhere)
    FName time_box;
    
    FBlackPenMissionTypeWidgetName();
};

