#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionLimitBase.h"
#include "PlanarLimit.generated.h"

USTRUCT(BlueprintType)
struct FPlanarLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPlane Plane;
    
    KAWAIIPHYSICS_API FPlanarLimit();
};

