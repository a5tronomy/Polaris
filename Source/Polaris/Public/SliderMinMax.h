#pragma once
#include "CoreMinimal.h"
#include "SliderMinMax.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSliderMinMax {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max;
    
    FSliderMinMax();
};

