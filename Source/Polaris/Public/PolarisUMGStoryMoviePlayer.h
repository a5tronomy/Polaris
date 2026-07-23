#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryMoviePlayer.generated.h"

class UImage;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryMoviePlayer : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryMoviePlayer();

    UFUNCTION(BlueprintNativeEvent)
    void Show(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetImage() const;
    
};

