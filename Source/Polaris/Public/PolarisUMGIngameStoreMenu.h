#pragma once
#include "CoreMinimal.h"
#include "EPolarisIngameStoreFaderLevel.h"
#include "EStoreViewerShowType.h"
#include "GS_StoreMenuType.h"
#include "IngameStoreMenuWidgetName.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreTitleTextColorStruct.h"
#include "PolarisUMGIngameStoreMenu.generated.h"

class UPolarisUserWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreMenu : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 update_vc_no;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString current_title_text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_show_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIngameStoreMenuWidgetName widget_names;
    
public:
    UPolarisUMGIngameStoreMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCurrentCurrency(int32 current_currency);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SwitchingMenuUI(GS_StoreMenuType Category);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowTitleText();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEnableViewerGuid(bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCoinTextColor(FStoreTitleTextColorStruct Color);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBlackPenRoundNum(int32 round_num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetActiveChildWidget(UPolarisUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestInitialFaderAnimation(EPolarisIngameStoreFaderLevel fader_level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestFaderAnimation(EPolarisIngameStoreFaderLevel fader_level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RegisterCategoryUI(UPolarisUMGIngameStoreMenuBase* Widget, GS_StoreMenuType Category);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshCoinCount();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PressAnyKeyEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayInitializeAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MoveMouseCursorEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayingInitializeAnim() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsCoinRefreshing() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void HiddenTitleText();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    EPolarisIngameStoreFaderLevel GetCurrentFaderLevel() const;
    
    UFUNCTION(BlueprintPure)
    GS_StoreMenuType GetCurrentCategory() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ForceHiddenBackImageAnim();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableTitleTextShadow(bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeTitleTextID(const FText& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeGuidState(EStoreViewerShowType guid_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeGuidControllerState(bool has_valid_controller);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeEnableUpdateEvent(bool is_enable);
    
    UFUNCTION(BlueprintNativeEvent)
    void ChangeCurrentCategory(GS_StoreMenuType Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeButtonState(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void CallChangeCategory(GS_StoreMenuType new_category);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BackImage_Set(UTexture2D* bg_texture);
    
};

