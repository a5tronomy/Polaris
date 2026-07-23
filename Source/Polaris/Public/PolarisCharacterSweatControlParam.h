#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisCharacterSweatControlParam.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisCharacterSweatControlParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsStopEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Spine1Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UpperArmRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LowerArmRange;
    
    FPolarisCharacterSweatControlParam();
};

