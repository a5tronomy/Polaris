#pragma once
#include "CoreMinimal.h"
#include "BlackPenItemWidgetName.h"
#include "BlackPenItem_Core.h"
#include "PolarisUMGStoreButton.h"
#include "PolarisUMGIngameStoreBlackPenItemPanel.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenItemPanel : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenItem_Core bp_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenItemWidgetName widget_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_item_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_owned;
    
public:
    UPolarisUMGIngameStoreBlackPenItemPanel();

    UFUNCTION(BlueprintCallable)
    void UpdateScrollText(float delta_time);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FBlackPenItem_Core& item_data);
    
    UFUNCTION(BlueprintCallable)
    void RefreshItemWidget(FBlackPenItem_Core item_data);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTransItemDetail();
    
    UFUNCTION(BlueprintCallable)
    void NotifySelectItem();
    
    UFUNCTION(BlueprintCallable)
    void NotifyReturnMenuControl();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* FindItemThumbnail(FName item_id);
    
};

