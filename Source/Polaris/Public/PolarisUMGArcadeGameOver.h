#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGArcadeGameOver.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGArcadeGameOver : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGArcadeGameOver();

    UFUNCTION(BlueprintImplementableEvent)
    void SetTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
};

