#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUMG_CUS_ST_ArrowClick.h"
#include "EUMG_CUS_ST_ButtonType.h"
#include "EUMG_CUS_ST_CallbackCategory.h"
#include "EUMG_CUS_ST_SESTStatus.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCharacterCustomizeSEST.generated.h"

class UPolarisUMGColorDialog;
class UTexture;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGCharacterCustomizeSEST : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCharacterCustomizeSEST();

    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTListVisibility(bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTListTabVisibility(int32 Index, bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTListTabArrow(bool left_visible, bool right_visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTListTab(int32 Index, int32 ID, const FString& Label, bool new_icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTListScroll(int32 scroll);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTListNum(int32 Current, int32 Total);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTHover(int32 Index, bool is_hober);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTEquipped(int32 Index, bool is_equipped);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMouseEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEditMenuVisibility(bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEditMenuSliderValue(int32 Index, float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEditMenuSlider(int32 Index, float Min, float Max, float step);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEditMenuScroll(int32 scroll);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEditMenuListBox(int32 Index, const FString& Label, bool left_visible, bool right_visible, EUMG_CUS_ST_ArrowClick click);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEditMenuIcon(int32 Index, const UTexture* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEditMenuEnable(int32 Index, bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEditMenuColor(int32 Index, const FLinearColor& Color);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetColorPanelVisibility(bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetEditMenuScroll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetEditMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlaySESTListTabAnim(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlaySESTAnim(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayEditMenuAnim(int32 Index, FName anim_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnim(FName anim_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintPure)
    int32 MakeCallbakId(EUMG_CUS_ST_CallbackCategory Category, int32 ID, EUMG_CUS_ST_ButtonType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsSESTAnimPlaying(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsEditMenuAnimPlaying(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimPlaying(FName anim_name);
    
    UFUNCTION(BlueprintCallable)
    void InvokeValueChangeCallback(int32 ID, float Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeButtonClickCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitSESTListTabArrow(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitEditMenu(int32 Index, const FString& Label);
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetEditMenuSlider();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetEditMenuListBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetEditMenuDecideButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetEditMenuButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    FString GetColorDialogPathName();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPolarisUMGColorDialog* GetColorDialog();
    
    UFUNCTION(BlueprintPure)
    int32 GetCallbakId(int32 ID);
    
    UFUNCTION(BlueprintPure)
    EUMG_CUS_ST_CallbackCategory GetCallbakCategory(int32 ID);
    
    UFUNCTION(BlueprintPure)
    EUMG_CUS_ST_ButtonType GetCallbakButtonType(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearSESTList();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddSEST(int32 ID, bool is_remove, const UTexture* Icon, EUMG_CUS_ST_SESTStatus Status, bool is_equipped);
    
};

