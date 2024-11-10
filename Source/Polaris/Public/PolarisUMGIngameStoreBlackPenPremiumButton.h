#pragma once
#include "CoreMinimal.h"
#include "EIngameStoreBlackPenPurchaseType.h"
#include "PolarisUMGStoreButton.h"
#include "PolarisUMGIngameStoreBlackPenPremiumButton.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenPremiumButton : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreBlackPenPremiumButton();

    UFUNCTION(BlueprintImplementableEvent)
    void Setup(EIngameStoreBlackPenPurchaseType purchase_type, int32 cost, int32 param1, int32 Param2);
    
};

