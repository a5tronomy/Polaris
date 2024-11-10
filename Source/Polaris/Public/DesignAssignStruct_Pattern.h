#pragma once
#include "CoreMinimal.h"
#include "DesignAssignStruct_Pattern.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct POLARIS_API FDesignAssignStruct_Pattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* Assign_Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_PatternHue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_PatternSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_PatternBrightness;
    
    FDesignAssignStruct_Pattern();
};

