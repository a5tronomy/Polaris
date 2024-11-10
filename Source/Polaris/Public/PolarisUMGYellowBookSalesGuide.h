#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGYellowBookSalesGuide.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGYellowBookSalesGuide : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGYellowBookSalesGuide();

    UFUNCTION(BlueprintImplementableEvent)
    void Setup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetText(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayDecideAnim();
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasDecideAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
};

