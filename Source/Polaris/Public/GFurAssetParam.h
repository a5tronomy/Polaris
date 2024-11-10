#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFurAssetParam.generated.h"

class UFurSplines;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FGFurAssetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* SkeletalGrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* StaticGrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFurSplines* FurSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LayerCount;
    
    FGFurAssetParam();
};

