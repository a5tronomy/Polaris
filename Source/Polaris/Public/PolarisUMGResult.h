#pragma once
#include "CoreMinimal.h"
#include "EResult_BattleResult.h"
#include "EResult_ResultType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGResult.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGResult : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGResult();

    UFUNCTION(BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeResult(EResult_ResultType result_type, int32 main_widget, EResult_BattleResult battle_result);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableMenu(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMenu(int32 ID);
    
};

