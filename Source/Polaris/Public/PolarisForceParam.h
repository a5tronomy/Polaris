#pragma once
#include "CoreMinimal.h"
#include "PolarisForceParam.generated.h"

USTRUCT(BlueprintType)
struct FPolarisForceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConstantDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConstantImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadialForceDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadialForceImpulse;
    
    POLARIS_API FPolarisForceParam();
};

