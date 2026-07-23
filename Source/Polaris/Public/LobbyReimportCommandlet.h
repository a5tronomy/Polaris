#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "LobbyReimportCommandlet.generated.h"

UCLASS(NonTransient)
class POLARIS_API ULobbyReimportCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    ULobbyReimportCommandlet();

};

