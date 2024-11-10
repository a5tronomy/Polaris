#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGUISample.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGUISample : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGUISample();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
};

