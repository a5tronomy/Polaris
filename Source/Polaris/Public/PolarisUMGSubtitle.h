#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSubtitle.generated.h"

class UCanvasPanel;
class UPolarisSubtitleTextBlock;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSubtitle : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UPolarisSubtitleTextBlock*> TextBlocks;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<UCanvasPanel> Canvas;
    
public:
    UPolarisUMGSubtitle();

    UFUNCTION(BlueprintImplementableEvent)
    UPolarisSubtitleTextBlock* CreateFrontSubtitle();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPolarisSubtitleTextBlock* CreateBackSubtitle();
    
};

