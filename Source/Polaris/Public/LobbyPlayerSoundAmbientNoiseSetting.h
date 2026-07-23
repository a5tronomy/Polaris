#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerSoundAmbientNoiseSetting.generated.h"

USTRUCT(BlueprintType)
struct FLobbyPlayerSoundAmbientNoiseSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString _RTPCName;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _InterpolateTime;
    
    UPROPERTY(BlueprintReadWrite)
    float _Radius;
    
    POLARIS_API FLobbyPlayerSoundAmbientNoiseSetting();
};

