#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LobbyAvatarPartColorData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyAvatarPartColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 colorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor colorValue;
    
    POLARIS_API FLobbyAvatarPartColorData();
};

