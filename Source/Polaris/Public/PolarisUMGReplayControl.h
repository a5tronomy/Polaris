#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGReplayControl.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGReplayControl : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayControl();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateControlSpritePosition(int32 side, FVector position, float Radius);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTimerNum(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayControlOnAnimation(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayControlOffAnimation();
    
};

