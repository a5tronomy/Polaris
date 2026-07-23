#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionItemPanel.h"
#include "BlackPenMissionItemWidgetName.h"
#include "PolarisUMGIngameStoreMissionButton.h"
#include "PolarisUMGIngameStoreBlackPenMissionItemPanel.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenMissionItemPanel : public UPolarisUMGIngameStoreMissionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenMissionItemWidgetName widget_names;
    
    UPROPERTY(BlueprintReadOnly)
    FBlackPenMissionItemPanel Data;
    
public:
    UPolarisUMGIngameStoreBlackPenMissionItemPanel();

};

