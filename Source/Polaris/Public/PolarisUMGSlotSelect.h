#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGSlotPanelAnimType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSlotSelect.generated.h"

class UListView;
class UObject;
class UTexture;
class UUserWidget;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSlotSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSlotSelect();

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
    void SelectPanel(int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectEditDialog(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestPanelAnim(int32 idx, EPolarisUMGSlotPanelAnimType anim_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenEditDialog(int32 panel_idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OpenedEditDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTestEvent(int32 X, int32 Y);
    
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
    void EditPanel(int32 no, bool Select);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DeletePanel(int32 Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideEditDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreatePanel(int32 no, const UTexture* thumbnail, bool exist, bool sest);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CopyPanel(int32 Source, int32 Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseEditDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ClosedEditDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearPanelList();
    
};

