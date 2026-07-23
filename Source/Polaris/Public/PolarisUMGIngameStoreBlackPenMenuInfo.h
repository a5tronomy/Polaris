#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem.h"
#include "BlackPenMenuInfoWidgetName.h"
#include "PolarisUMGStoreButton.h"
#include "PolarisUMGIngameStoreBlackPenMenuInfo.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenMenuInfo : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenItem bp_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenMenuInfoWidgetName widget_names;
    
public:
    UPolarisUMGIngameStoreBlackPenMenuInfo();

    UFUNCTION(BlueprintCallable)
    void UpdateScrollText(float delta_time);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FBlackPenItem& item_data);
    
};

