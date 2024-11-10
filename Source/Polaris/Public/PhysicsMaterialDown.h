#pragma once
#include "CoreMinimal.h"
#include "DownInfo.h"
#include "StageSmokeInfo.h"
#include "PhysicsMaterialDown.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsMaterialDown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfo Small;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfo Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfo Large;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfo SmallYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfo MiddleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfo LargeYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FStageSmokeInfo> StageSmoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaterialType;
    
    POLARIS_API FPhysicsMaterialDown();
};

