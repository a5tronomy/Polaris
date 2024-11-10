#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionItemWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionItemWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName title_text;
    
    UPROPERTY(EditAnywhere)
    FName item_name_text;
    
    UPROPERTY(EditAnywhere)
    FName xp_text;
    
    UPROPERTY(EditAnywhere)
    FName xp_progress_bar;
    
    UPROPERTY(EditAnywhere)
    FName complete_text;
    
    UPROPERTY(EditAnywhere)
    FName numerator_text;
    
    UPROPERTY(EditAnywhere)
    FName slash_text;
    
    UPROPERTY(EditAnywhere)
    FName denominator_text;
    
    FBlackPenMissionItemWidgetName();
};

