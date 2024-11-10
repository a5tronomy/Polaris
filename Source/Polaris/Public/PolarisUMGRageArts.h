#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGRageArts.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGRageArts : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGRageArts();

    UFUNCTION(BlueprintImplementableEvent)
    void SetAnimFrame(float frame, int32 motion_frame);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn(int32 animation_no);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimPlaying() const;
    
};

