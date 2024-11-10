#pragma once
#include "CoreMinimal.h"
#include "EShowcaseType.h"
#include "EStoreItemAttribute.h"
#include "PolarisUserWidget.h"
#include "StoreItemPanelStruct.h"
#include "PolarisInGameStoreHomeArea.generated.h"

class UGridPanel;
class UPolarisUMGIngameStoreItemPanel;
class UTexture2D;
class UUniformGridPanel;
class UWidget;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisInGameStoreHomeArea : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, int32, ID);
    
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 m_line_num;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_column_num;
    
    UPROPERTY(BlueprintReadWrite)
    EShowcaseType showcase_type;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UGridPanel* GridPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UUniformGridPanel* UniformGridPanelWidget;
    
    UPROPERTY(BlueprintReadWrite)
    int32 max_column_num;
    
public:
    UPolarisInGameStoreHomeArea();

    UFUNCTION(BlueprintCallable)
    UTexture2D* GetPickUpBanner(EStoreItemAttribute sell_type, int32 pick_up_group);
    
    UFUNCTION(BlueprintPure)
    int32 GetLineNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemNumInLine(int32 target_y) const;
    
    UFUNCTION(BlueprintCallable)
    UPolarisUMGIngameStoreItemPanel* GetItemInLine(int32 target_x, int32 target_y);
    
    UFUNCTION(BlueprintPure)
    int32 GetColumnNum() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UWidget*> GetAllChildrenInGridPanel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAllChildNum() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UPolarisUMGIngameStoreItemPanel*> FindAllButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableAreaEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableAreaEvent();
    
    UFUNCTION(BlueprintCallable)
    UPolarisUMGIngameStoreItemPanel* CreateOtherPanelData(UClass* loaded_class);
    
    UFUNCTION(BlueprintCallable)
    void CreateItemsPanelData(const TArray<FStoreItemPanelStruct>& panel_infos, UClass* loaded_class);
    
};

