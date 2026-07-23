#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStartUpLicence.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStartUpLicence : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStartUpLicence();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimUeOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimUeIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOtherOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOtherIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimUeFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimOtherFinished();
    
};

