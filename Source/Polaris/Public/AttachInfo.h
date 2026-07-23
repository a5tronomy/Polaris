#pragma once
#include "CoreMinimal.h"
#include "AttachInfo.generated.h"

USTRUCT()
struct FAttachInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 player_id;
    
    UPROPERTY()
    FName bone_name;
    
    UPROPERTY()
    int32 effect_id;
    
    POLARIS_API FAttachInfo();
};

