#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyEnemyInstance.generated.h"

class ALobbyEnemy;

UCLASS()
class POLARIS_API ULobbyEnemyInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int64, ALobbyEnemy*> _enemiesNew;
    
    ULobbyEnemyInstance();

};

