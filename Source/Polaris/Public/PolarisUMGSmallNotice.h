#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSmallNotice.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSmallNotice : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSmallNotice();

    UFUNCTION(BlueprintImplementableEvent)
    void Setup(int32 Type, int32 icon_type, const FString& Title, const FString& Desc);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddPlatformIconTexture(UTexture2D* icon_tex);
    
};

