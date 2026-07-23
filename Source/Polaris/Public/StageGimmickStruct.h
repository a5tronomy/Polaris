#pragma once
#include "CoreMinimal.h"
#include "StageGimmickStruct.generated.h"

class APolarisStageGimmickBaseActor;
class APolarisStageGroundActor;

USTRUCT(BlueprintType)
struct FStageGimmickStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsGroundRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisStageGroundActor* GroundRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisStageGimmickBaseActor* Gimmick;
    
    POLARIS_API FStageGimmickStruct();
};

