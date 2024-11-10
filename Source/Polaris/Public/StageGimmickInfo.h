#pragma once
#include "CoreMinimal.h"
#include "StageGimmickInfo.generated.h"

USTRUCT(BlueprintType)
struct FStageGimmickInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool has_wall_break;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool has_hard_wall_break;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool has_wall_bound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool has_wall_blast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool has_floor_break;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool has_hard_floor_break;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool has_floor_blast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool has_hard_floor_blast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool has_balcony_break;
    
    POLARIS_API FStageGimmickInfo();
};

