#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreItemMenuDetail.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreSelectedItem.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreSelectedItem : public UPolarisUMGIngameStoreItemMenuDetail {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreSelectedItem();

    UFUNCTION(BlueprintImplementableEvent)
    void SetItemIdData(const FStoreItemPanelStruct& panel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetWidgetEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddItem(const FStoreItemPanelStruct& panel);
    
};

