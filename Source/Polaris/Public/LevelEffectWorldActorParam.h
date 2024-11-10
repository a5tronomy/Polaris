#pragma once
#include "CoreMinimal.h"
#include "LevelEffectWorldActorParam.generated.h"

class ANiagaraActor;

USTRUCT(BlueprintType)
struct FLevelEffectWorldActorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ANiagaraActor* BreakLevelEffectsWorldActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BreakLevel;
    
    POLARIS_API FLevelEffectWorldActorParam();
};

