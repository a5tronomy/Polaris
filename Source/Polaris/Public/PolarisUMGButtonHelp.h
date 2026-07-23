#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGButtonHelp.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGButtonHelp : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGButtonHelp();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClearHelp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddHelp(const FString& Icon, const FString& Text);
    
};

