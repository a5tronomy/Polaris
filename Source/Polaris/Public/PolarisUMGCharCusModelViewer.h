#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCharCusModelViewer.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGCharCusModelViewer : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCharCusModelViewer();

    UFUNCTION(BlueprintImplementableEvent)
    void SetHelpTextVisibility(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHelpText(int32 idx, const FString& Icon, const FString& help);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCaptureFrameVisibility(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCapturedTexture(const UTexture2D* tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestTexScaleAnim(bool downsize);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestOnOffAnim(bool On);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestIOAnim(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasTexScaleAnimationFinished(bool downsize);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasOnOffAnimationFinished(bool On);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
};

