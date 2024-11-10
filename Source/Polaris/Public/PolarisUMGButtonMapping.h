#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGButtonMapping.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGButtonMapping : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGButtonMapping();

    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateGuide(int32 ID, bool is_select);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateCursor(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowCaution(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetShade(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetGuideIcon(int32 ID, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetControllerType(const FString& Text, bool is_text_id, bool is_keyboard);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetButtonValue(int32 ID, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetButtonTextColor(int32 ID, int32 Color);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideCaution();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnableButtons(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideCursor(int32 ID, bool is_edit, bool is_cancel);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
};

