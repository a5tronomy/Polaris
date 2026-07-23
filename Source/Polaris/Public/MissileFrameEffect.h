#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MissileFrameEffect.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FMissileFrameEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 EffectId;
    
    UPROPERTY(EditAnywhere)
    int32 frame;
    
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
    
    POLARIS_API FMissileFrameEffect();
};

