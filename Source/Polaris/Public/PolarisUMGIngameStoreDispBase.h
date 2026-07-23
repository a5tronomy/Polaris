#pragma once
#include "CoreMinimal.h"
#include "ButtonAnim.h"
#include "GSMenuCursor.h"
#include "PolarisUserWidget.h"
#include "StoreMenuAnimName.h"
#include "PolarisUMGIngameStoreDispBase.generated.h"

class UPanelWidget;
class UPolarisUMGIngameStoreDispBase;
class UPolarisUMGStoreButton;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreDispBase : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPanelWidget* panel_widget;
    
    UPROPERTY(BlueprintReadWrite)
    FGSMenuCursor m_cursor;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UPolarisUMGStoreButton*> buttons;
    
    UPROPERTY(BlueprintReadWrite)
    int32 current_button_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoreMenuAnimName anim_names;
    
    UPROPERTY()
    FButtonAnim menu_anims;
    
public:
    UPolarisUMGIngameStoreDispBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCousor(int32 cousor_x, int32 cousor_y);
    
    UFUNCTION(BlueprintNativeEvent)
    void StopAnimStoreMenuOut();
    
    UFUNCTION(BlueprintNativeEvent)
    void StopAnimStoreMenuIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetWidgetEvent();
    
    UFUNCTION(BlueprintCallable)
    void RegisterCursorNoToAllButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshDataEvent();
    
    UFUNCTION(BlueprintCallable)
    void PlayCancelSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyDedicatedMaintenance();
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsPlayingAnimOut() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsPlayingAnimIn() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UPolarisUMGStoreButton* GetTargetButton(int32 corsor_x, int32 corsor_y);
    
    UFUNCTION(BlueprintPure)
    int32 GetLineNum() const;
    
    UFUNCTION(BlueprintPure)
    UPolarisUMGStoreButton* GetCurrentButton();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UPolarisUMGIngameStoreDispBase* GetControllTargetMenu();
    
    UFUNCTION(BlueprintPure)
    int32 GetCloumNum(int32 cousor_y) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void DecideEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DeactiveEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConfigureButtonEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CommonCallButtonUnselect(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CommonCallButtonSelect(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CommonCallButtonDecide(int32 ID);
    
    UFUNCTION(BlueprintNativeEvent)
    void CancelEvent();
    
    UFUNCTION(BlueprintNativeEvent)
    void AnimStoreMenuOut();
    
    UFUNCTION(BlueprintNativeEvent)
    void AnimStoreMenuIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActiveEvent();
    
};

