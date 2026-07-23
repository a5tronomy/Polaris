#pragma once
#include "CoreMinimal.h"
#include "DemoSourceAssetStruct.generated.h"

class UCatwalkClothCollisionAsset;
class UCatwalkClothLcjOverrideAsset;
class UItemPrefab;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoSourceAssetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UItemPrefab* DemoItemPrefab;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    UCatwalkClothLcjOverrideAsset* DemoClothLcjOverrideAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    UCatwalkClothCollisionAsset* DemoClothCollisionOverrideAsset;
    
    FDemoSourceAssetStruct();
};

