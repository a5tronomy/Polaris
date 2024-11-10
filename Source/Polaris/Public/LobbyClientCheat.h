#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "LobbyClientCheat.generated.h"

UCLASS()
class POLARIS_API ULobbyClientCheat : public UCheatManager {
    GENERATED_BODY()
public:
    ULobbyClientCheat();

    UFUNCTION(Exec)
    void LobbyJoinServer(const FString& IpPort);
    
};

