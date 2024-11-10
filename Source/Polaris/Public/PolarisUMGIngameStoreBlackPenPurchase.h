#pragma once
#include "CoreMinimal.h"
#include "EIngameStoreBlackPenPurchaseType.h"
#include "PolarisUMGIngameStoreDialogMenu.h"
#include "PolarisUMGIngameStoreBlackPenPurchase.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenPurchase : public UPolarisUMGIngameStoreDialogMenu {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreBlackPenPurchase();

    UFUNCTION(BlueprintImplementableEvent)
    void Setup(EIngameStoreBlackPenPurchaseType purchase_type, int32 cost, int32 level_count);
    
};

