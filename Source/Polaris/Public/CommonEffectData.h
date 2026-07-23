#pragma once
#include "CoreMinimal.h"
#include "CommonEffectData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FCommonEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAttachedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isDispUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxInstanceByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isReactiveInstance;
    
    POLARIS_API FCommonEffectData();
};

