#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "LobbyAvatarData_Struct.h"
#include "AvatarCustomizeSaveData.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UAvatarCustomizeSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<uint8> thumbnailBuffer;
    
    UPROPERTY(BlueprintReadWrite)
    FLobbyAvatarData_Struct avatarDataStruct;
    
    UAvatarCustomizeSaveData();

};

