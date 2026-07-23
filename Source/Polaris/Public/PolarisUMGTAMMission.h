#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMMission.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMMission : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMMission();

    UFUNCTION(BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIn();
    
};

