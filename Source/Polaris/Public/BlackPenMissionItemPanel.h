#pragma once
#include "CoreMinimal.h"
#include "EBlackPenMissionType.h"
#include "BlackPenMissionItemPanel.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionItemPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText sub_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlackPenMissionType mission_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 mission_denominator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 mission_numerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 xp_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool complete_flag;
    
    FBlackPenMissionItemPanel();
};

