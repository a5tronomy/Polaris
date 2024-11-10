#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CapsuleLimit.h"
#include "PlanarLimit.h"
#include "SphericalLimit.h"
#include "KawaiiPhysicsLimitsDataAsset.generated.h"

UCLASS()
class KAWAIIPHYSICS_API UKawaiiPhysicsLimitsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSphericalLimit> SphericalLimits;
    
    UPROPERTY()
    TArray<FCapsuleLimit> CapsuleLimits;
    
    UPROPERTY()
    TArray<FPlanarLimit> PlanarLimits;
    
    UKawaiiPhysicsLimitsDataAsset();

};

