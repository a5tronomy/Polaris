#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStartUpAgreement.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStartUpAgreement : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStartUpAgreement();

    UFUNCTION(BlueprintImplementableEvent)
    void SetDisagreeText(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonCollapsed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBodyText(const FString& raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBGBlackVisibility(bool is_visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAgreeText(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectButton(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMoveScrollOffset(float Offset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideButton(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimOutEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsDecideButtonAnimEnd();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
};

