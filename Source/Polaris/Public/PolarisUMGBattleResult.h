#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBattleResult.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBattleResult : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBattleResult();

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowBattleResult(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetRankIconTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetPromotionTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetBackgroundTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimSmall();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn(int32 language_id, int32 rank_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OnIsPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCompleteAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
};

