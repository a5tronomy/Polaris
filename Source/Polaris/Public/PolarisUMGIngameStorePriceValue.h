#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGIngameStorePriceValue.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStorePriceValue : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName price_text_name;
    
public:
    UPolarisUMGIngameStorePriceValue();

};

