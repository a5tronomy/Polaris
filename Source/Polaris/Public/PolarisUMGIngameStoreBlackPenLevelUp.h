#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreDialogMenu.h"
#include "PolarisUMGIngameStoreBlackPenLevelUp.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenLevelUp : public UPolarisUMGIngameStoreDialogMenu {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreBlackPenLevelUp();

    UFUNCTION(BlueprintImplementableEvent)
    void SetLevelUpInfo(int32 before, int32 after);
    
};

