#pragma once
#include "CoreMinimal.h"
#include "PhyscsMaterialAttachBoneInfo.generated.h"

class UNiagaraComponent;
class USkeletalMeshComponent;

USTRUCT()
struct FPhyscsMaterialAttachBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UNiagaraComponent> Particle;
    
    UPROPERTY()
    int32 surface_type;
    
    UPROPERTY()
    int32 effect_id;
    
    UPROPERTY(Export)
    TWeakObjectPtr<USkeletalMeshComponent> skeletal_mesh;
    
    UPROPERTY()
    bool isAsyncTrace;
    
    POLARIS_API FPhyscsMaterialAttachBoneInfo();
};

