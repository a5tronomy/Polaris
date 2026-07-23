#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGConnectingIcon.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGConnectingIcon : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGConnectingIcon();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimStay();
    
};

