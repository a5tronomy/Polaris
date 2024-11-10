#pragma once
#include "CoreMinimal.h"
#include "LobbyEmoteAnimSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FLobbyEmoteAnimSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UAnimSequence* _start;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimSequence* _loop;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimSequence* _end;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimSequence* _startF;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimSequence* _loopF;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimSequence* _endF;
    
    POLARIS_API FLobbyEmoteAnimSequence();
};

