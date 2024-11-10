#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPauseMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPauseMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPauseMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void WindowOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void WindowIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEnableButton(int32 ID, bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedMenuType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeMenu(const TArray<FString>& item_names, int32 Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasWindowAnimIOFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimOutFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimInFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableMenu(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMenu(int32 ID);
    
};

