#pragma once
#include "CoreMinimal.h"
#include "StageGimmickInfo.h"
#include "StagePanelInfo.generated.h"

USTRUCT(BlueprintType)
struct FStagePanelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 stage_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStageGimmickInfo gimmick_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool front_is_left;
    
    POLARIS_API FStagePanelInfo();
};

