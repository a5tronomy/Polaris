#pragma once
#include "CoreMinimal.h"
#include "BlackPenDetail.h"
#include "BlackPenXPInfoWidgetName.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGIngameStoreBlackPenXPInfo.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenXPInfo : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenXPInfoWidgetName widget_names;
    
public:
    UPolarisUMGIngameStoreBlackPenXPInfo();

    UFUNCTION(BlueprintCallable)
    void UpdateXpInfoView(int32 levelNow, int32 levelMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyData(const FBlackPenDetail& detailData, bool is_show_mission_view);
    
};

