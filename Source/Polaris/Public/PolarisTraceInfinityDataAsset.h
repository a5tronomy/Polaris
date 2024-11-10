#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceInfinitySetting.h"
#include "PolarisTraceInfinityDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisTraceInfinityDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPolarisTraceInfinitySetting> InfinitySettingTable;
    
    UPolarisTraceInfinityDataAsset();

};

