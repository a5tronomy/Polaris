#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem.h"
#include "BlackPenItemSmallWidgetName.h"
#include "PolarisUMGStoreButton.h"
#include "PolarisUMGIngameStoreBlackPenItemPanelSmall.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenItemPanelSmall : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenItem bp_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenItemSmallWidgetName widget_names;
    
public:
    UPolarisUMGIngameStoreBlackPenItemPanelSmall();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FBlackPenItem& item_data, int32 level_now, bool premium_flag, bool for_premium, bool for_level);
    
};

