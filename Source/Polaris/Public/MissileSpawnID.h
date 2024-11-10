#pragma once
#include "CoreMinimal.h"
#include "MissileSpawnID.generated.h"

USTRUCT(BlueprintType)
struct FMissileSpawnID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 id_;
    
    UPROPERTY(BlueprintReadWrite)
    bool is_item_;
    
    POLARIS_API FMissileSpawnID();
};

