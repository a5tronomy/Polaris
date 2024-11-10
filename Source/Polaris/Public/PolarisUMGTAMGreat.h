#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMGreat.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMGreat : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMGreat();

    UFUNCTION(BlueprintImplementableEvent)
    void OnIn();
    
};

