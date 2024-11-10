#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MissileSpawnDesc.generated.h"

USTRUCT(BlueprintType)
struct FMissileSpawnDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EffectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    POLARIS_API FMissileSpawnDesc();
};

