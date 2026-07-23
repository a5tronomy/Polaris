#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGameMessage.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGGameMessage : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGameMessage();

    UFUNCTION(BlueprintImplementableEvent)
    void StopFighterUI();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayWin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayTimeUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayRound(int32 Round);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayReplay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayReady();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayRageArtsKO(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayPerfect(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayNewChallenger();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayLose();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayKOCrash(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayKO(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayGreat(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayGameOver();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayFighterUI();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayFight();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayDraw();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayDoubleKOCrash();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayDoubleKO();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayContinue(int32 Count);
    
};

