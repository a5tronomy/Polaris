#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MissileInstanceInfo.generated.h"

class APolarisCharacterMissile;

USTRUCT(BlueprintType)
struct FMissileInstanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    APolarisCharacterMissile* MissileInstance;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 HandleID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 InstanceId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector CurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector LastFrameLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector CurrentDirection;
    
    POLARIS_API FMissileInstanceInfo();
};

