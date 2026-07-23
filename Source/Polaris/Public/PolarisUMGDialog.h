#pragma once
#include "CoreMinimal.h"
#include "EPolarisTextBlockFontType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateButton(int32 ID, const FString& Text, bool is_raw_text, bool is_enable, bool is_grayout, bool use_centering, bool change_font_type, EPolarisTextBlockFontType font_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPosition(const int32 X, const int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FString& Text, bool is_raw_text, bool use_centering);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowBackground(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableMenu(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMenu(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AlignToLeft(int32 ID, bool ghost_icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AlignToDefault(int32 ID);
    
};

