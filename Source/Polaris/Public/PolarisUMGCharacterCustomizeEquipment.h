#pragma once
#include "CoreMinimal.h"
#include "CUS_ItemIconEnum.h"
#include "CustomizeItemDataUI.h"
#include "PolarisUserWidget.h"
#include "SliderMinMax.h"
#include "PolarisUMGCharacterCustomizeEquipment.generated.h"

class UPolarisUMGCharacterCustomizeSEST;
class UTexture;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGCharacterCustomizeEquipment : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, UTexture2D*> thumb_item_textures;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, UTexture2D*> rarity_icon_textures;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> unique_ids;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FCustomizeItemDataUI> cus_item_list;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FSliderMinMax> AccSliderMinMax;
    
public:
    UPolarisUMGCharacterCustomizeEquipment();

    UFUNCTION(BlueprintImplementableEvent)
    void StopMenu22Anim(int32 idx, FName animation_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StopAnim(FName animation_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FString& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTWidgetEnabled(bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPanelPreviewTexture(const UTexture2D* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPanelPreviewFlag(bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3Visibility(bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3ScrollTop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3Scroll(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3RarityIconAndItemName(int32 rarity, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3RarityIcon(int32 rarity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3ItemNameId(int32 X, int32 Y, const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3ItemName(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3Cursor(int32 X, int32 Y, bool IsActive, bool isDebugDisp, const FString& asset_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3Click(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu3Btn(int32 menu1_idx, int32 menu2_idx, int32 menu3_x, int32 menu3_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu2Visibility(bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu2OffsetY(float Offset_Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu2BtnVisibility(int32 idx, bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu2Badge(int32 idx, CUS_ItemIconEnum Icon, bool is_enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu2AccBtnLabelAndTexture(int32 idx, const FString& Label, const UTexture* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu22ItemNumber(int32 idx, const FString& Number);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu22ItemLabel(int32 idx, const FString& Label);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu22ItemIconVisibility(int32 idx, bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu22ItemIcon(int32 idx, const UTexture* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu22Enabled(bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu1Label(int32 idx, const FString& Label);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu1IconAndLabel(int32 idx, const UTexture2D* Icon, const FString& Label, bool isNew);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu1Icon(int32 idx, const UTexture2D* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu1Badge(int32 idx, CUS_ItemIconEnum Icon, bool is_enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemIcon(int32 idx, CUS_ItemIconEnum Icon, bool is_enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemComment(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFightMoney(int64 money);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetExclusionIcon(bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetColorPickerPreviewFlag(bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccDialogSliderMinMax(int32 idx, float Min, float Max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccDialogPos(int32 idx, const FString& pos_str, int32 Pos, int32 pos_min, int32 pos_max, int32 dir, bool is_loop);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccDialogNum(int32 idx, const FString& num_str, float num_float);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccDialogLabel(int32 idx, const FString& Label);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccDialogElemUnable(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccDialogElemEnable(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayPanelPreviewAnim(FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimNoSelectOut(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimNoSelectIn(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimNormal(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimLineOut(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimLineIn(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimIn(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimHover(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimClick(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimBackSelect(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2AnimBackNoSelect(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu2Anim(int32 idx, FName animation_name, bool stop_prev_anim, bool is_loop);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu22Anim(int32 idx, FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu1AnimNormal(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu1AnimHover(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu1AnimClick(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMenu1Anim(int32 idx, FName anim_name, bool stop_prev_anim, bool is_loop);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayItemAnim(int32 idx, FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimThirdOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimThirdIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimSecondOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimSecondIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnim(FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAccSlotMenuAnimNormal(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAccSlotMenuAnimHover(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAccSlotMenuAnim(int32 idx, FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAccDialogElemAnim(int32 idx, FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenColorDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenAccDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Menu3toMenu22(int32 menu2_num, int32 menu2_idx, int32 menu3_num, int32 menu3_x, int32 menu3_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Menu3toMenu2(int32 menu2_num, int32 menu2_idx, int32 menu3_num, int32 menu3_x, int32 menu3_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Menu2toMenu3(int32 menu2_num, int32 menu2_idx, int32 menu3_num, int32 menu3_x, int32 menu3_y, bool play_clickanim, bool isDebugDisp, const FString& asset_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Menu2toMenu1(int32 menu1_num, int32 menu1_idx, int32 menu2_num, int32 menu2_idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Menu2CursorMoveEvent(int32 idx, int32 prev_idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Menu22toMenu3(int32 menu2_num, int32 menu2_idx, int32 menu3_num, int32 menu3_x, int32 menu3_y, const FString& asset_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Menu22toMenu1(int32 menu1_num, int32 menu1_idx, int32 menu2_num, int32 menu2_idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Menu1toMenu2(int32 menu1_num, int32 menu1_idx, int32 menu2_num, int32 menu2_idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MakeMenu3Btn(int32 menu1_idx, int32 menu2_idx, int32 menu3_x, int32 menu3_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsMenuAccAnimPlaying(int32 idx, FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsMenu2AnimPlaying(int32 idx, FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsMenu22AnimPlaying(int32 idx, FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsMenu1AnimPlaying(int32 idx, FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimPlaying(FName anim_name);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectMenu3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectMenu2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectMenu1Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectAccCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideMenu3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideMenu2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideMenu1Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideAccCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideAccArrowCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeAccSliderCallback(int32 ID, float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitParams(int32 menu1_max, int32 menu2_max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideMoney(bool isHide);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasPreviewAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasOpenAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasNextAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimThirdOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimThirdIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimSecondOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimSecondIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasCloseAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPolarisUMGCharacterCustomizeSEST* GetSESTWidget();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMenuHierarchy();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetMenu3ItemThumb(int32 menu1_idx, int32 menu2_idx, int32 menu3_idx);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMenu2CursorIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMenu1CursorIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEquipItemRow();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEquipItemCol();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCustomizeItemDataStructNum();
    
    UFUNCTION(BlueprintImplementableEvent)
    FString GetColorDialogPathName();
    
    UFUNCTION(BlueprintCallable)
    int32 EncodeMenu3ItemIndex(int32 menu1_idx, int32 menu2_idx, int32 menu3_idx);
    
    UFUNCTION(BlueprintCallable)
    int32 EncodeMenu3IndexFromInt2d(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DispInt(int32 N);
    
    UFUNCTION(BlueprintCallable)
    void DecodeInt2dMenu3FromIndex(int32 idx, int32& X, int32& Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugPrintText(int32 idx, const FString& Label);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseColorDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseAccDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearMenu3Btn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearMenu2Btn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CharacterCustomizeEquipmentUITick();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddMenu3Btn(const FCustomizeItemDataUI& item_data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddMenu2BtnLabel(const FString& Label, bool is_new);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddMenu2AccBtnLabel(int32 N, const FString& Label, const UTexture* Icon);
    
};

