#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGSlotPanelAnimType.h"
#include "EPolarisUMGSlotPanelTabAnimType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSlotSelect.generated.h"

class UListView;
class UObject;
class UTexture;
class UTexture2D;
class UUserWidget;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSlotSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSlotSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void SwapSelectPanel(int32 no, bool Select);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibleAnimPanelList(bool IsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetUpTab(const FString& FighterName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleVisibility(bool new_visibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetScrollEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetScroll(int32 scroll);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEnableFavoriteIcon(int32 idx, bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectPanel(int32 no, int32 row_max, int32 line_max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectEditDialog(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestTabAnim(EPolarisUMGSlotPanelTabAnimType Type, int32 idx, bool bRestoreState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestPanelAnim(int32 idx, EPolarisUMGSlotPanelAnimType anim_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RegisterTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RegisterPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OpenEditDialog(int32 panel_idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OpenedEditDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTestEvent(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsTabAnimPlaying(EPolarisUMGSlotPanelTabAnimType Type, int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabUnSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasPanelAnimationFinished(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasDecideEditDialogAnimationFinished();
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetEntryWidgetFromItem(UListView* list_view, const UObject* Item) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetEditDialogCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FinalizeEditDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EditPanel(int32 no, bool Select);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DeletePanel(int32 Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideEditDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreatePanel(int32 no, const UTexture* thumbnail, bool exist, bool sest, const UTexture* shared_disable_tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CopyPanel(int32 target_panel_idx, const UTexture2D* src_tex, const UTexture* shared_disabled_tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseEditDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ClosedEditDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearPanelList();
    
};

