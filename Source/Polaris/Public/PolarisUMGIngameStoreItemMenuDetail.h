#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGStoreButton.h"
#include "StoreItemDetailWidgetNameStruct.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreItemMenuDetail.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreItemMenuDetail : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoreItemPanelStruct this_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoreItemDetailWidgetNameStruct widget_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 target_item_price;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 max_width_num;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool is_root_item;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool is_all_owned_in_sell_data;
    
public:
    UPolarisUMGIngameStoreItemMenuDetail();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWarningText();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPartTextID(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintPure)
    bool IsFree() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearWarningText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWarningText(const FString& raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddSetItem(const FStoreItemPanelStruct& item_data);
    
};

