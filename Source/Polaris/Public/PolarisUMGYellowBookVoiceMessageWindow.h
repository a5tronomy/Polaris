#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGYellowBookVoiceMessageWindow.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGYellowBookVoiceMessageWindow : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGYellowBookVoiceMessageWindow();

    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterInfo(const UTexture2D* Texture, const FString& Name, const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
};

