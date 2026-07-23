#pragma once
#include "CoreMinimal.h"
#include "MakeBakeMaterialInstanceDynamicContainer.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct POLARIS_API FMakeBakeMaterialInstanceDynamicContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* Bake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* Copy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* NormalCalcZAndScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* CombineColorAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* CombineColorAlphaOnR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* CopyAtoR;
    
    FMakeBakeMaterialInstanceDynamicContainer();
};

