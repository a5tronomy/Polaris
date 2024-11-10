#pragma once
#include "CoreMinimal.h"
#include "ReserveShiftEffectState.generated.h"

USTRUCT(BlueprintType)
struct FReserveShiftEffectState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 player_number;
    
    UPROPERTY(EditAnywhere)
    FName bone_name;
    
    UPROPERTY(EditAnywhere)
    float speed_scale;
    
    POLARIS_API FReserveShiftEffectState();
};

