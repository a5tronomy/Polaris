#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGStoreButton.h"
#include "StoreItemInfoWidgetNameStruct.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreItemMenuInfo.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreItemMenuInfo : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoreItemPanelStruct this_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoreItemInfoWidgetNameStruct widget_names;
    
public:
    UPolarisUMGIngameStoreItemMenuInfo();

    UFUNCTION(BlueprintCallable)
    void UpdateScrollText(float delta_time);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintPure)
    bool IsFree() const;
    
};

