#pragma once
#include "CoreMinimal.h"
#include "EStoreItemAttribute.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStorePickUpMenu.generated.h"

class UGridPanel;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStorePickUpMenu : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UGridPanel* GridPanelWidget;
    
public:
    UPolarisUMGIngameStorePickUpMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void RepHeaderTitleText(const FText& rep_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RepHeaderTexture(UTexture2D* header_texture);
    
protected:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetPickUpHeader(EStoreItemAttribute sell_type);
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateItemPanels(const TArray<FStoreItemPanelStruct>& panel_infos, UClass* loaded_class);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateItemsPanelData(const TArray<FStoreItemPanelStruct>& panel_infos);
    
};

