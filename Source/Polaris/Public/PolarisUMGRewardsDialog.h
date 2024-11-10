#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "RewardItemDesc.h"
#include "PolarisUMGRewardsDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGRewardsDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGRewardsDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void Setup(const FString& title_text, const bool is_show_subtitle);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Select(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Decide(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddRewardItem(const FRewardItemDesc& Desc);
    
};

