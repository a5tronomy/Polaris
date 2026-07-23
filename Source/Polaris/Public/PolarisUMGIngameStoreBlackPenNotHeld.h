#pragma once
#include "CoreMinimal.h"
#include "BlackPenNotHeldWidgetName.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreBlackPenNotHeld.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenNotHeld : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenNotHeldWidgetName widget_names;
    
public:
    UPolarisUMGIngameStoreBlackPenNotHeld();

};

