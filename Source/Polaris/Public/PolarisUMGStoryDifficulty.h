#pragma once
#include "CoreMinimal.h"
#include "EPolarisDifficultyMode.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryDifficulty.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryDifficulty : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryDifficulty();

    UFUNCTION(BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeMenu(EPolarisDifficultyMode Mode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableFader(bool Enable);
    
};

