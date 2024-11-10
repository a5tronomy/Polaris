#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGReplayMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGReplayMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateButton2Data(int32 Index, const FString& Text, const FString& value_text, bool Enable, bool is_default, bool update_widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetExpand(bool expand);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCursorButton3(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCursorButton2(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetActiveLayer(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton2Callback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearButton3Data();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearButton2Data();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButton3Data(const FString& Text, bool Enable, bool is_default);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButton2Data(const FString& Text, const FString& value_text, bool Enable, bool is_default);
    
};

