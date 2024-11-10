#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGOptionHUD.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGOptionHUD : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpperHUDDefaultPositionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowerHUDDefaultPositionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpperHUDCenterLimitOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowerHUDCenterLimitOffset;
    
    UPolarisUMGOptionHUD();

    UFUNCTION(BlueprintImplementableEvent)
    void Setup(bool ball_mode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPosition(bool Up, const float pos_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Select(bool Up);
    
    UFUNCTION(BlueprintCallable)
    void InvokeHUDSelectCallback(bool up_side);
    
    UFUNCTION(BlueprintCallable)
    void InvokeHUDDecideCallback(bool up_side);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowSelectCallback(bool up_side, bool arrow_up);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowReleaseCallback(bool up_side, bool arrow_up);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowPressCallback(bool up_side, bool arrow_up);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasDecideAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetViewportSize();
    
    UFUNCTION(BlueprintCallable)
    float GetHeightForHUD();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FinishAdjust(bool Up);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Decide(bool Up);
    
};

