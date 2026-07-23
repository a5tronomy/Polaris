#pragma once
#include "CoreMinimal.h"
#include "AisacControlInterpolationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAisacControlInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AisacControlID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString AisacControlName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AisacControlValueForInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AisacControlValueForOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Width;
    
    CRIWARERUNTIME_API FAisacControlInterpolationSettings();
};

