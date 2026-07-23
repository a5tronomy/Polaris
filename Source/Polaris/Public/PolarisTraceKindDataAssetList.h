#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceKindSetting.h"
#include "PolarisTraceKindDataAssetList.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisTraceKindDataAssetList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPolarisTraceKindSetting> KindSettingTable;
    
    UPolarisTraceKindDataAssetList();

    UFUNCTION(BlueprintCallable)
    void SetUpKindId();
    
};

