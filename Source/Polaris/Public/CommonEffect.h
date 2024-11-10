#pragma once
#include "CoreMinimal.h"
#include "CommonEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FCommonEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* Particle;
    
    UPROPERTY(EditAnywhere)
    bool isAttachedCharacter;
    
    UPROPERTY(EditAnywhere)
    bool isDispUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxInstanceByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isReactiveInstance;
    
    POLARIS_API FCommonEffect();
};

