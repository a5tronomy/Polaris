#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSaveIcon.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSaveIcon : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSaveIcon();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimStay();
    
};

