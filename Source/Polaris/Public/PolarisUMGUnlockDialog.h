#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGUnlockDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGUnlockDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGUnlockDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void Setup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetText(const FString& Title, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRawText(const FString& Title, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
};

