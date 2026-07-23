#pragma once
#include "CoreMinimal.h"
#include "ELobbyAvatarItemType.h"
#include "LobbyAvatarPartColorData.h"
#include "LobbyAvatarPartData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyAvatarPartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyAvatarItemType itemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLobbyAvatarPartColorData> colorDatas;
    
    POLARIS_API FLobbyAvatarPartData();
};

