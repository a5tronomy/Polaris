#pragma once
#include "CoreMinimal.h"
#include "LobbyAvatarPartData.h"
#include "LobbyAvatarData_Struct.generated.h"

USTRUCT(BlueprintType)
struct FLobbyAvatarData_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 slotNo;
    
    UPROPERTY(BlueprintReadWrite)
    int32 skinColorID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 eyeColorID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 eyeblowsColorID;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FLobbyAvatarPartData> partDatas;
    
    UPROPERTY(BlueprintReadWrite)
    int32 motionID;
    
    POLARIS_API FLobbyAvatarData_Struct();
};

