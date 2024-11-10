#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBattleResultRank.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBattleResultRank : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBattleResultRank();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetToPosition(int32 rank, float Ratio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetMainTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetIsChangeRank(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetFromPosition(int32 rank, float Ratio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetExperience(int32 from_exp, int32 to_exp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCompleteAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClearMarker();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddRankGauge(int32 Point, bool is_highest_rank, const UTexture2D* Texture, const UTexture2D* bg_texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddMissionMarker(int32 rank);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddMarker(int32 rank, float Ratio, bool is_rival, const UTexture2D* Texture, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void InvokeCallback();
    
};

