#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LobbyCoordinate.generated.h"

USTRUCT(BlueprintType)
struct FLobbyCoordinate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 _milliSeconds;
    
    UPROPERTY(BlueprintReadOnly)
    FVector _position;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator _rotation;
    
    UPROPERTY(BlueprintReadOnly)
    FName _emoteIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isTeleport;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isAreaWarp;
    
    POLARIS_API FLobbyCoordinate();
};

