#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseEyeItemEdit.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBaseEyeItemEdit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ScleraTint_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor IrisTint_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IrisBrightness_Param;
    
    FBaseEyeItemEdit();
};

