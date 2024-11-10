#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyMachineManager.generated.h"

class ULobbyMachineManager;

UCLASS(BlueprintType)
class POLARIS_API ULobbyMachineManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<int32, int64> _owners;
    
public:
    ULobbyMachineManager();

    UFUNCTION(BlueprintPure)
    static ULobbyMachineManager* LobbyMachineManager();
    
};

