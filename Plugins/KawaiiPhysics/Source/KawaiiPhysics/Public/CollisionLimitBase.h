#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "CollisionLimitBase.generated.h"

USTRUCT()
struct FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference DrivingBone;
    
    UPROPERTY(EditAnywhere)
    FVector OffsetLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator OffsetRotation;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    bool bEnable;
    
    KAWAIIPHYSICS_API FCollisionLimitBase();
};

