#pragma once
#include "CoreMinimal.h"
#include "BlackPenPremiumWidgetName.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreBlackPenPremium.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenPremium : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenPremiumWidgetName widget_names;
    
public:
    UPolarisUMGIngameStoreBlackPenPremium();

    UFUNCTION(BlueprintCallable)
    void RequestBlackPenTrans(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshCoinCount();
    
};

