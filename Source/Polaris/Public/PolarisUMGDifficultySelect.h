#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGDifficultySelect.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGDifficultySelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGDifficultySelect();

    UFUNCTION(BlueprintImplementableEvent)
    void SetMaxOfDifficultyLevel(int32 Level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableMenu(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMenu(int32 ID);
    
};

