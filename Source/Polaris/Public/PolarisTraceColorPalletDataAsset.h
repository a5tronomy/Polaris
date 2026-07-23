#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceColorPalletSetting.h"
#include "PolarisTraceColorPalletDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisTraceColorPalletDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor DefaultColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPolarisTraceColorPalletSetting> ColorPalletSettings;
    
    UPolarisTraceColorPalletDataAsset();

};

