#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGRewardsDialog.h"
#include "RewardItemDesc.h"
#include "PolarisUMGStoreGiveItemDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoreGiveItemDialog : public UPolarisUMGRewardsDialog {
    GENERATED_BODY()
public:
    UPolarisUMGStoreGiveItemDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleRawText(const FString& raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescRawText(const FString& raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetLineNum() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetCursorX() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideEvent(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CursorEvent(int32 move_x, int32 move_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddVc(const FRewardItemDesc& Desc);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddItem(const FRewardItemDesc& Desc, int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddEXP(const FRewardItemDesc& Desc);
    
};

