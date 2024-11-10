#pragma once
#include "CoreMinimal.h"
#include "CollisionLimitBase.h"
#include "CapsuleLimit.generated.h"

USTRUCT(BlueprintType)
struct FCapsuleLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    KAWAIIPHYSICS_API FCapsuleLimit();
};

