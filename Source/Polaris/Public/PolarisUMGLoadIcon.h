#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGLoadIcon.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGLoadIcon : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGLoadIcon();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimStay();
    
};

