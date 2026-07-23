#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "SeasonResetInfo.h"
#include "PolarisUMGRankReset.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGRankReset : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGRankReset();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateButton(int32 ID, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSeasonInfo(FSeasonResetInfo season_info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPrevSeasonInfo(FSeasonResetInfo prev_season_info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectButton(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideButton(int32 ID);
    
};

