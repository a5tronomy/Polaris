#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "DebugHDRSettingsWidget.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UDebugHDRSettingsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDebugHDRSettingsWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SetWidgetPosition(FVector2D position);
    
    UFUNCTION(BlueprintCallable)
    void SetUILuminance(float Luminance);
    
    UFUNCTION(BlueprintCallable)
    void SetUILevel(float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumLuminance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMiddleLuminance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumLuminance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAcesColorMultiplier(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveWidget();
    
    UFUNCTION(BlueprintPure)
    bool IsEnabledHDROutput();
    
    UFUNCTION(BlueprintPure)
    float GetUILuminance();
    
    UFUNCTION(BlueprintPure)
    float GetUILevel();
    
    UFUNCTION(BlueprintPure)
    float GetMinimumLuminance();
    
    UFUNCTION(BlueprintPure)
    float GetMiddleLuminance();
    
    UFUNCTION(BlueprintPure)
    float GetMaximumLuminance();
    
    UFUNCTION(BlueprintPure)
    float GetAcesColorMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void EnableHDROutput(bool Enable, int32 Nits);
    
};

