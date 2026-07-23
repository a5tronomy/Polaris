#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryChapterTitle.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryChapterTitle : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryChapterTitle();

    UFUNCTION(BlueprintImplementableEvent)
    void SetChapterTitleText(const FString& Title, const FString& Info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
};

