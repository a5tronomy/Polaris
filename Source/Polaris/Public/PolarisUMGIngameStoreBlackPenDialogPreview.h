#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreDialogMenu.h"
#include "PolarisUMGIngameStoreBlackPenDialogPreview.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenDialogPreview : public UPolarisUMGIngameStoreDialogMenu {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreBlackPenDialogPreview();

    UFUNCTION(BlueprintImplementableEvent)
    void Setup(int32 tc_count, bool owned);
    
};

