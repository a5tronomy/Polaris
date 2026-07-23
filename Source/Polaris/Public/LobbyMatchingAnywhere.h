#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELobbyMatchingAnywhere_BattleMode.h"
#include "LobbyMatchingAnywhere_MatchingStatusChangedDelegate.h"
#include "LobbyMatchingAnywhere.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyMatchingAnywhere : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ELobbyMatchingAnywhere_BattleMode BattleMode;
    
    UPROPERTY(BlueprintAssignable)
    FLobbyMatchingAnywhere_MatchingStatusChanged OnMatchingStatusChanged;
    
    UPROPERTY(BlueprintReadOnly)
    bool CanChangeCrossPlayFlag;
    
    ULobbyMatchingAnywhere();

    UFUNCTION(BlueprintCallable)
    void Tick(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultValues();
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMode(ELobbyMatchingAnywhere_BattleMode InNewBattleMode);
    
    UFUNCTION(BlueprintPure)
    bool CanChangeCrossPlay() const;
    
};

