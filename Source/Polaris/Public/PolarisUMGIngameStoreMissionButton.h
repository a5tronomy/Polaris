#pragma once
#include "CoreMinimal.h"
#include "EMissionListType.h"
#include "PolarisUMGStoreButton.h"
#include "PolarisUMGIngameStoreMissionButton.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreMissionButton : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreMissionButton();

    UFUNCTION(BlueprintCallable)
    void SetMissionTypeInfo(EMissionListType Type, int32 Number);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayPrevAnim();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayNextAnim();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayCompleteAnim();
    
};

