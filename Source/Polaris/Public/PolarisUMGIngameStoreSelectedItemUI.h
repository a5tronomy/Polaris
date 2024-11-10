#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreSelectedItemUI.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreSelectedItemUI : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxWidthNum;
    
public:
    UPolarisUMGIngameStoreSelectedItemUI();

    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleCategoryRawText(const FString& raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemIdData(const FStoreItemPanelStruct& panel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCategory(EStoreItemType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddItem(const FStoreItemPanelStruct& panel);
    
};

