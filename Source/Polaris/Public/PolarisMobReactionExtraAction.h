#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPolarisMobReactionExtraActionType.h"
#include "PolarisMobReactionExtraAction.generated.h"

class UAkAudioEvent;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FPolarisMobReactionExtraAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisMobReactionExtraActionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentReference Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SourceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* AnimationSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoopAnimation;
    
    POLARIS_API FPolarisMobReactionExtraAction();
};

