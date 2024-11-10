#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreDetailsMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreDetailsMenu : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoreItemPanelStruct current_item;
    
public:
    UPolarisUMGIngameStoreDetailsMenu();

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableSingleItemDetails() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsEnablePurchaseButton() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableProductList() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableItemListButton() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableEquipCharaList() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetMaxChildWidthNum() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetChildCount() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CallViewerDisp(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void CallPurchase(const FStoreItemPanelStruct& item_data);
    
};

