#pragma once
#include "CoreMinimal.h"
#include "PolarisTraceOne.generated.h"

class APolarisTraceMeshActor;
class UCurveFloat;
class UPolarisTraceAttachComponent;
class UPolarisTraceEffectCurve;

USTRUCT()
struct POLARIS_API FPolarisTraceOne {
    GENERATED_BODY()
public:
    UPROPERTY()
    APolarisTraceMeshActor* Mesh;
    
    UPROPERTY()
    UCurveFloat* FrameScale;
    
    UPROPERTY()
    UPolarisTraceEffectCurve* EffectCurve;
    
    UPROPERTY()
    UPolarisTraceEffectCurve* EffectDeltaCurve;
    
    UPROPERTY()
    int32 ParticleSystemId;
    
    UPROPERTY(Instanced)
    UPolarisTraceAttachComponent* AttachComponent;
    
    FPolarisTraceOne();
};

