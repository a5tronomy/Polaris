#pragma once
#include "CoreMinimal.h"
#include "EReplayTipsDisplayType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGReplay.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGReplay : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplay();

    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibleTips(EReplayTipsDisplayType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsVisibilityGreat(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsText(const FString& tips_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsCommandText(const FString& combo_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsComboDifficulty(int32 difficulty);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsComboDamageVisibility(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsComboDamage(const FString& combo_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHiddenTips();
    
};

