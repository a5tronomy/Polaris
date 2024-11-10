#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CollisionLimitDataBase.generated.h"

USTRUCT(BlueprintType)
struct FCollisionLimitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DrivingBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator OffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(VisibleAnywhere)
    FGuid Guid;
    
    KAWAIIPHYSICS_API FCollisionLimitDataBase();
};

