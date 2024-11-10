#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGButtonMappingMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGButtonMappingMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGButtonMappingMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateMenu(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayOutMenuAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayInMenuAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OnIsPlayingMenuAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnableButtons(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateMenu(const FString& Title, const TArray<FString>& button_list, bool is_text_id);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
};

