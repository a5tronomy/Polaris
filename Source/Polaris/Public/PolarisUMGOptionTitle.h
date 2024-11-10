#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGOptionTitle.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGOptionTitle : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGOptionTitle();

    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleText(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBgVisibility(bool new_visibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasBgIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOutBg();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameInBg();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
};

