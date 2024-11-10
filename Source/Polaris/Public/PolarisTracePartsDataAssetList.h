#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTracePartsDataAssetList.generated.h"

class UPolarisTracePartsDataAsset;

UCLASS(BlueprintType)
class POLARIS_API UPolarisTracePartsDataAssetList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UPolarisTracePartsDataAsset*> PartsDataAssetTable;
    
    UPolarisTracePartsDataAssetList();

};

