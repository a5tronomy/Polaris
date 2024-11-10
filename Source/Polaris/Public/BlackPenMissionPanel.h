#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionPanel.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 mission_fin_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 mission_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 remaining_time;
    
    FBlackPenMissionPanel();
};

