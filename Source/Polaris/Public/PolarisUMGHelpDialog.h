#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHelpDialog.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGHelpDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHelpDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateCursor(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimClick(int32 Direction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnableArrowRight(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnableArrowLeft(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreatePage(int32 ID, const FString& Title, const UTexture2D* Image, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void InvokeClickCallback(int32 ID);
    
};

