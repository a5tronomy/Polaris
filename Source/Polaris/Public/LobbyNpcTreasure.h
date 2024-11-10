#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyNpcTreasure.generated.h"

class ALobbyNpc;

UCLASS(BlueprintType)
class POLARIS_API ULobbyNpcTreasure : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, ALobbyNpc*> _npcs;
    
    ULobbyNpcTreasure();

};

