#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTask.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMTask : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTask();

    UFUNCTION(BlueprintImplementableEvent)
    void OnVisibility(int32 Index, bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStay(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetVisibilityIcon(int32 Index, bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetTaskText(int32 Index, FName Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetNumText(int32 Index, FName Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOut(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIn(int32 Index, bool isrightside);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGhostNotifyOut(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGhostNotifyIn(int32 Index, bool is_right_side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCompleteOut(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCompleteIn(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClear(int32 Index);
    
};

