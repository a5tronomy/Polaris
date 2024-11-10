#pragma once
#include "CoreMinimal.h"
#include "BaseEyeItemEdit.h"
#include "BaseEyeItemOneEye.generated.h"

class UMaterialInstance;
class UTexture;

USTRUCT(BlueprintType)
struct POLARIS_API FBaseEyeItemOneEye {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* EyeMaterialOverride_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* Sclera_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* IrisColor_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IrisEmmisive_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBaseEyeItemEdit EditValue;
    
    FBaseEyeItemOneEye();
};

