#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DynamicBoneBustParam.h"
#include "DynamicBoneParamAsset.generated.h"

class UItemPrefab;

UCLASS()
class POLARIS_API UDynamicBoneParamAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<TSoftObjectPtr<UItemPrefab>, FDynamicBoneBustParam> ItemBustParams;
    
    UDynamicBoneParamAsset();

};

