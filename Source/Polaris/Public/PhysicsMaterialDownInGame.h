#pragma once
#include "CoreMinimal.h"
#include "DownInfoInGame.h"
#include "StageSmokeInfoInGame.h"
#include "PhysicsMaterialDownInGame.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsMaterialDownInGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfoInGame Small;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfoInGame Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfoInGame Large;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfoInGame SmallYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfoInGame MiddleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDownInfoInGame LargeYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FStageSmokeInfoInGame> StageSmoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaterialType;
    
    POLARIS_API FPhysicsMaterialDownInGame();
};

