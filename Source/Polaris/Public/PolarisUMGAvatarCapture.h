#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGAvatarCapture.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGAvatarCapture : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGAvatarCapture();

    UFUNCTION(BlueprintImplementableEvent)
    bool OnIsCaptureCompleted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCaptureStart(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCaptureEnd();
    
};

