#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceDataAsset.generated.h"

class UPolarisTraceColorPalletDataAsset;
class UPolarisTraceInfinityDataAsset;
class UPolarisTracePartsDataAssetList;

UCLASS(BlueprintType)
class POLARIS_API UPolarisTraceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPolarisTracePartsDataAssetList* TracePartsDataAssetList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPolarisTraceColorPalletDataAsset* TraceColorPalletDataAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPolarisTraceInfinityDataAsset* TraceInfinityDataAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDebugDrawTraceFrame;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDebugDrawTraceKeyFrame;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDebugDrawTraceVelocity;
    
    UPolarisTraceDataAsset();

};

