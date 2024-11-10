#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPracticeMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPracticeMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPracticeMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateButton4Rate(int32 Index, int32 Rate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateButton4Data(int32 Index, const FString& Text, const FString& value_text, int32 Rate, int32 antenna, bool Enable, bool is_default, bool update_widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateButton2Rate(int32 Index, int32 Rate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateButton2Data(int32 Index, const FString& Text, const FString& value_text, int32 Rate, int32 antenna, bool Enable, bool is_default, bool update_widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMenu4InOut(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetExpand(bool expand);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCursorButton4(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCursorButton3(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCursorButton2(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCursorButton1(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetActiveLayer(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimWindowOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimWindowIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimBGOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimBGIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton2RightCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton2LeftCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton1Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton2RightCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton2LeftCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton1Callback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearButton4Data();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearButton3Data();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearButton2Data();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearButton1Data();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButton4Data(const FString& Text, const FString& value_text, int32 Rate, int32 antenna, bool Enable, bool is_default);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButton3Data(const FString& Text, int32 antenna, bool Enable, bool is_default);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButton2Data(const FString& Text, const FString& value_text, int32 Rate, int32 antenna, bool Enable, bool is_default);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButton1Data(const FString& Text, bool Enable);
    
};

