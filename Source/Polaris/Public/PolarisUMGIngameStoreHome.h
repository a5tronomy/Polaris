#pragma once
#include "CoreMinimal.h"
#include "BlackPenBannerData.h"
#include "EStoreHomeState.h"
#include "EStoreItemAttribute.h"
#include "OtherShowcase.h"
#include "PickupShowcase.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreHome.generated.h"

class UPolarisUMGIngameStoreItemPanel;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreHome : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    EStoreHomeState current_state;
    
public:
    UPolarisUMGIngameStoreHome();

    UFUNCTION(BlueprintPure)
    bool IsFirestLine(int32 coursor_y) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEndLine(int32 coursor_y) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetPickUpBanner(EStoreItemAttribute sell_type);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPolarisUMGIngameStoreItemPanel*> GetAllPanels();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateShowcaseData(FOtherShowcase showcase_info, const TArray<FStoreItemPanelStruct>& panel_infos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateHeaderData(FPickupShowcase hedder_info, const TArray<FStoreItemPanelStruct>& panel_infos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBlackPenData(FBlackPenBannerData banner_info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CheckAndStyleHeaderArea();
    
};

