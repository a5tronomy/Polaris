#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStartUpSaveDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStartUpSaveDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStartUpSaveDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayButtonDecide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnableButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayButtonDecideEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimOutEnd();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
};

