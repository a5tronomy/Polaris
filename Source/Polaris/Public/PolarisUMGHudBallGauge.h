#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGHudBallGaugeAnimType.h"
#include "EPolarisUMGHudBallNumAnimType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHudBallGauge.generated.h"

class UCanvasPanel;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGHudBallGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudBallGauge();

    UFUNCTION(BlueprintNativeEvent)
    void ShowHudBallGauge(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityOfNum(int32 Index, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSingleTextureOfNum(int32 Index, const UTexture2D* digit0);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPositionOfNum(int32 Index, float X, float Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDoubleTexturesOfNum(int32 Index, const UTexture2D* digit0, const UTexture2D* digit1);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAttackGauge(int32 side, float Ratio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestNumAnim(int32 Index, EPolarisUMGHudBallNumAnimType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnim(EPolarisUMGHudBallGaugeAnimType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetBottomUIPosition(float pos_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitOnRound();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitOnBattle();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasNumAnimationFinished(int32 Index, EPolarisUMGHudBallNumAnimType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimationFinished(EPolarisUMGHudBallGaugeAnimType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetNumberOfNums() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UCanvasPanel* GetCanvasPanelOfNum() const;
    
};

