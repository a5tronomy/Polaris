#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_AnimDynamics.h"
#include "CollisionLimitDataBase.h"
#include "SphericalLimitData.generated.h"

USTRUCT(BlueprintType)
struct FSphericalLimitData : public FCollisionLimitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESphericalLimitType LimitType;
    
    KAWAIIPHYSICS_API FSphericalLimitData();
};

