#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCommandListHelp.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGCommandListHelp : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCommandListHelp();

    UFUNCTION(BlueprintImplementableEvent)
    void SetHelpType(int32 help_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
};

