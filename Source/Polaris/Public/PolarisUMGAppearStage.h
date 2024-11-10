#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGAppearStage.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGAppearStage : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGAppearStage();

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowAppearStage(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimation(int32 ID);
    
};

