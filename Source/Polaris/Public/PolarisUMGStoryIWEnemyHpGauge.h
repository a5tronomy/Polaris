#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryIWEnemyHpGauge.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryIWEnemyHpGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryIWEnemyHpGauge();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateVisibility(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHealth(float per);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCursorVisibility(bool lockon);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerNum(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterName(const FString& Name);
    
};

