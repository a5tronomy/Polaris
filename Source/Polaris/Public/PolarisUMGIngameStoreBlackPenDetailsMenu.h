#pragma once
#include "CoreMinimal.h"
#include "BlackPenDetailsMenuWidgetName.h"
#include "BlackPenItem.h"
#include "BlackPenItem_Core.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreBlackPenDetailsMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenDetailsMenu : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenDetailsMenuWidgetName widget_names;
    
    UPROPERTY(BlueprintReadWrite)
    FBlackPenItem disp_item_data;
    
    UPROPERTY(BlueprintReadWrite)
    int32 set_item_current_button_id;
    
    UPROPERTY(BlueprintReadWrite)
    int32 set_item_close_button_id;
    
    UPROPERTY(BlueprintReadWrite)
    int32 set_item_detail_button_id;
    
    UPROPERTY(BlueprintReadWrite)
    int32 set_item_equip_button_id;
    
public:
    UPolarisUMGIngameStoreBlackPenDetailsMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBlackPenDetailsMenu(const FBlackPenItem& item_deta, bool Root);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableSingleItemDetails() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableEquipCharaList() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBlackPenItemsPanelData(const TArray<FBlackPenItem_Core>& panel_infos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBlackPenDetailsMenu(const FBlackPenItem& item_deta);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ConfigureExButtonEvent();
    
};

