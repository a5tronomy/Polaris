#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTelop.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMTelop : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTelop();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSubtitleUpdate();
    
};

