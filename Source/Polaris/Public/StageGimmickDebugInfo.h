#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickState.h"
#include "StageGimmickDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FStageGimmickDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageGimmickState GimmickState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DestructLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TotalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 destroyprogress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool haseffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool hassound;
    
    POLARIS_API FStageGimmickDebugInfo();
};

