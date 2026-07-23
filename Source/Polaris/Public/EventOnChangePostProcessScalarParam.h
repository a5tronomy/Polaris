#pragma once
#include "CoreMinimal.h"
#include "EPostProcessScalarType.h"
#include "EventOnChangePostProcessScalarParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangePostProcessScalarParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPostProcessScalarType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float targetRelativeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 interpolationFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool cosineInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isCharacter;
    
    POLARIS_API FEventOnChangePostProcessScalarParam();
};

