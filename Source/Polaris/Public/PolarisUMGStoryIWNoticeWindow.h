#pragma once
#include "CoreMinimal.h"
#include "EStoryIWNoticeWindowType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryIWNoticeWindow.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryIWNoticeWindow : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryIWNoticeWindow();

    UFUNCTION(BlueprintImplementableEvent)
    void StopAll();
    
    UFUNCTION(BlueprintNativeEvent)
    void Show(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetType(const EStoryIWNoticeWindowType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTextByString(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTextById(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
};

