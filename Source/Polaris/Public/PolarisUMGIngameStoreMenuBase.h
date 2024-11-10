#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem.h"
#include "EPolarisIngameStoreFaderLevel.h"
#include "EStoreItemType.h"
#include "GS_StoreMenuType.h"
#include "PickupShowcase.h"
#include "PolarisUMGIngameStoreDispBase.h"
#include "StoreItemPanelStruct.h"
#include "StoreTitleTextColorStruct.h"
#include "PolarisUMGIngameStoreMenuBase.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreMenuBase : public UPolarisUMGIngameStoreDispBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FStoreTitleTextColorStruct m_category_title_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _tb_title_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool is_use_viewer_menu;
    
public:
    UPolarisUMGIngameStoreMenuBase();

    UFUNCTION(BlueprintNativeEvent)
    void SetCategoryTitleColor(FStoreTitleTextColorStruct Color);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransScene(GS_StoreMenuType after);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransPickUp(FPickupShowcase pick_up_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransPFStoreHome();
    
    UFUNCTION(BlueprintCallable)
    void RequestTransItemList(EStoreItemType request_type, int32 fighter_idx);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransDetail(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransBlackPenFromHome();
    
    UFUNCTION(BlueprintCallable)
    void RequestTransBlackPenDetail(FBlackPenItem item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestPurductItemListDialogDetail(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestPurductBlackPenItemListDialogDetail(const FBlackPenItem& item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestPurchaseDialog(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestPFStoreDLC(const FName& dlc_item_id);
    
    UFUNCTION(BlueprintCallable)
    void RequestItemViewer(const FStoreItemPanelStruct& item_data, bool is_bottom_layer);
    
    UFUNCTION(BlueprintCallable)
    void RequestHiddenItemViewer();
    
    UFUNCTION(BlueprintCallable)
    void RequestExclusiveDialog(const FName& item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestEquipCharacterDialog(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestEquipCharacterBlackPenDialog(const FName& item_id, const FName& set_item_id);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeDispBackGround(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void RequestCatalogVcDialog();
    
    UFUNCTION(BlueprintCallable)
    void RequestBlackPenItemViewer(const FBlackPenItem& item_data);
    
    UFUNCTION(BlueprintCallable)
    void PrintCallStack();
    
    UFUNCTION(BlueprintCallable)
    void PreRequestItemViewer(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void PreRequestBlackPenItemViewer(const FBlackPenItem& item_data);
    
    UFUNCTION(BlueprintCallable)
    void NotifySendRequestPurchase(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCancelPurchase();
    
    UFUNCTION(BlueprintCallable)
    void NotifyBackGroundFade(EPolarisIngameStoreFaderLevel fade_level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifiyUpdateCurrency();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateItemData(FStoreItemPanelStruct item_data);
    
};

