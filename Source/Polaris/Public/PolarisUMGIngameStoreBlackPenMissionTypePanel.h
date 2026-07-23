#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionPanel.h"
#include "BlackPenMissionTypeWidgetName.h"
#include "PolarisUMGIngameStoreMissionButton.h"
#include "PolarisUMGIngameStoreBlackPenMissionTypePanel.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenMissionTypePanel : public UPolarisUMGIngameStoreMissionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenMissionTypeWidgetName widget_names;
    
    UPROPERTY(BlueprintReadOnly)
    FBlackPenMissionPanel Data;
    
public:
    UPolarisUMGIngameStoreBlackPenMissionTypePanel();

    UFUNCTION(BlueprintCallable)
    void MissionTimerInitialized(bool bTick);
    
};

