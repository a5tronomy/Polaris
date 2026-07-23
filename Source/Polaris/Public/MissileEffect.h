#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MissileEffect.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FMissileEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 EffectId;
    
    UPROPERTY(EditAnywhere)
    FName AttachBoneName;
    
    UPROPERTY(EditAnywhere)
    bool IsHeat;
    
    UPROPERTY(EditAnywhere)
    FVector position_offset;
    
    UPROPERTY(EditAnywhere)
    FRotator rotation_offset;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UNiagaraComponent> ParticleComp;
    
    POLARIS_API FMissileEffect();
};

