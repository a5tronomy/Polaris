#pragma once
#include "CoreMinimal.h"
#include "OptionItemDesc.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGOptionSettings.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGOptionSettings : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGOptionSettings();

    UFUNCTION(BlueprintImplementableEvent)
    bool SubWindowOpened();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool SubWindowHasDecideAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool SubWindowClosed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetValue(int32 idx, const FOptionItemDesc& Desc);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Setup(bool use_center_pos, FName extra_menu_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInvalidFlag(int32 idx, bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccessibilityStageMask(FName Type, int32 Level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccessibilityColorSupportType(FName Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccessibilityColorFilter(FName Type, int32 Level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccessibilityCharacterMask(FName Type, int32 Level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectSubWindowOption(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Select(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenSubWindow(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenNameInputDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsInvalidItem(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSubSelectCallback(int32 opt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSubDecideCallback(int32 opt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 opt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 opt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowSelectCallback(int32 opt, int32 lr);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowDecideCallback(int32 opt, int32 lr);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasDecideAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideSubWindowOption(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Decide(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseSubWindow(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ClosedNameInputDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearSubWindowItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddSubWindowItem(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddOptionItem(const FOptionItemDesc& Desc, int32 item_num);
    
};

