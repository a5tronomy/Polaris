#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPasscodeDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPasscodeDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPasscodeDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateVerticalCursor(int32 vertical_cursor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHorizontalCursor(int32 horizontal_cursor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetValue(int32 Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable)
    void OnClose();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsWaitingAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetVerticalCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetVerticalCount();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetValue();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetHorizontalCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetHorizontalCount();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Cancel();
    
};

