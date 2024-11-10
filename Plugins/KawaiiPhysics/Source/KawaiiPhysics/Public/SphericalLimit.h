#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_AnimDynamics.h"
#include "CollisionLimitBase.h"
#include "SphericalLimit.generated.h"

USTRUCT(BlueprintType)
struct FSphericalLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    ESphericalLimitType LimitType;
    
    KAWAIIPHYSICS_API FSphericalLimit();
};

