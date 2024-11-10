#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LobbyMatchingAnywhereConcreator.generated.h"

UCLASS(BlueprintType)
class ULobbyMatchingAnywhereConcreator : public UObject {
    GENERATED_BODY()
public:
    ULobbyMatchingAnywhereConcreator();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitDialogClose(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Timeout);
    
};

