#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTournament.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMTournament : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnd;
    
    UPolarisUMGTAMTournament();

    UFUNCTION(BlueprintImplementableEvent)
    void OnStartMovie();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetup(int32 current_round, bool is_pre_battle);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreBattleStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreBattleEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostBattleStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostBattleNpcStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostBattleNpcEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostBattleNextStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostBattleNextEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostBattleEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideTournamentUI();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsInitialized();
    
};

