#pragma once
#include "CoreMinimal.h"
#include "SqueezeBoneAssetSetStruct.h"
#include "SqueezeBoneAssetSetStructArray.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSqueezeBoneAssetSetStructArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSqueezeBoneAssetSetStruct> V;
    
    FSqueezeBoneAssetSetStructArray();
};

