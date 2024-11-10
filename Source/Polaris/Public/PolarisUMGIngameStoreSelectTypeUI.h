#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.h"
#include "GS_StoreMenuType.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreSelectTypeUI.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreSelectTypeUI : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    GS_StoreMenuType this_category;
    
    UPROPERTY(EditAnywhere)
    FName ListView_Name;
    
public:
    UPolarisUMGIngameStoreSelectTypeUI();

    UFUNCTION(BlueprintImplementableEvent)
    bool IsCompleteInitListView() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetDataNum() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void CreatePanelsData(GS_StoreMenuType select_type);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePanelData(EStoreItemType select_type, UTexture2D* Texture, const FText& title_text);
    
};

