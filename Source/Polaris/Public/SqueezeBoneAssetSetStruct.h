#pragma once
#include "CoreMinimal.h"
#include "SqueezeBoneAssetSetStruct.generated.h"

class USqueezeBoneAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FSqueezeBoneAssetSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USqueezeBoneAsset* SqueezeBoneAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ToSqueezePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FromSqueezePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDisableCloth;
    
    FSqueezeBoneAssetSetStruct();
};

