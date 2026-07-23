#pragma once
#include "CoreMinimal.h"
#include "CmnItemCatwalkCollisionOverrideStruct.generated.h"

class UCatwalkClothCollisionAsset;
class UCatwalkClothLcjOverrideAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FCmnItemCatwalkCollisionOverrideStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TargetPSIPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TargetPSIPositionInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCatwalkClothCollisionAsset* CatwalkClothCollisionAssetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCatwalkClothLcjOverrideAsset* CatwalkClothLcjOverrideAssetItem;
    
    FCmnItemCatwalkCollisionOverrideStruct();
};

