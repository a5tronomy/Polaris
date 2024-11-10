#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ChatMessageDelegateDelegate.h"
#include "LobbyChatMessage.h"
#include "LobbyServerGameState.generated.h"

UCLASS()
class POLARIS_API ALobbyServerGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(ReplicatedUsing=OnRep_ChatHistory)
    TArray<FLobbyChatMessage> ChatHistory;
    
    UPROPERTY(BlueprintAssignable)
    FChatMessageDelegate NewMessageDelegate;
    
    ALobbyServerGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_ChatHistory();
    
};

