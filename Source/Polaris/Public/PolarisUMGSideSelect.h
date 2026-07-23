#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSideSelect.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSideSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSideSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectRightSide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectLeftSide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnableButtonInput(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimationPlayingFromName(const FName& AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasInAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn(bool Left);
    
};

