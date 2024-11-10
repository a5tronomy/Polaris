#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.h"
#include "PolarisUMGStoreButton.h"
#include "StoreItemPanelStruct.h"
#include "StoreItemWidgetNameStruct.h"
#include "PolarisUMGIngameStoreItemPanel.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreItemPanel : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_item_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoreItemPanelStruct this_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoreItemWidgetNameStruct widget_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_owned;
    
public:
    UPolarisUMGIngameStoreItemPanel();

    UFUNCTION(BlueprintCallable)
    void UpdateScrollText(float delta_time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemData(const FStoreItemPanelStruct& panel_info);
    
    UFUNCTION(BlueprintCallable)
    void SendNotifyTransPickup(const FName& banner_id);
    
    UFUNCTION(BlueprintCallable)
    void SendNotifyTransDetails();
    
    UFUNCTION(BlueprintCallable)
    void SendNotifyTransCategory(EStoreItemType Type);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void RefreshItemWidget(FStoreItemPanelStruct item_data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshItemData(UTexture2D* item_tex, FStoreItemPanelStruct item_data);
    
    UFUNCTION(BlueprintCallable)
    void ObserveFirstWidgetDisplay();
    
    UFUNCTION(BlueprintCallable)
    void NotifyTransItemDetail();
    
    UFUNCTION(BlueprintCallable)
    void NotifySelectItem();
    
    UFUNCTION(BlueprintCallable)
    void NotifySelectCoin();
    
    UFUNCTION(BlueprintCallable)
    void NotifyReturnMenuControl();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPurchaseItem();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* FindItemThumbnail(FName item_id);
    
};

