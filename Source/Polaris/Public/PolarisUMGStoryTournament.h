#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryTournament.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryTournament : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnd;
    
    UPolarisUMGStoryTournament();

    UFUNCTION(BlueprintImplementableEvent)
    void OnStartMovie();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreBattleStart(int32 battle_no, int32 Result);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreBattleEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostBattleStart(int32 battle_no, int32 Result);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostBattleEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsInitialized();
    
};

