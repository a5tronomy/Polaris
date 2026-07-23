#pragma once
#include "CoreMinimal.h"
#include "BlackPenLevelWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenLevelWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName rewards_scrollbox;
    
    UPROPERTY(EditAnywhere)
    FName rewards_prev;
    
    UPROPERTY(EditAnywhere)
    FName rewards_next;
    
    UPROPERTY(EditAnywhere)
    FName level_now;
    
    UPROPERTY(EditAnywhere)
    FName level_required;
    
    UPROPERTY(EditAnywhere)
    FName level_after;
    
    UPROPERTY(EditAnywhere)
    FName level_slider;
    
    UPROPERTY(EditAnywhere)
    FName level_progress;
    
    UPROPERTY(EditAnywhere)
    FName level_minimize;
    
    UPROPERTY(EditAnywhere)
    FName level_maximize;
    
    UPROPERTY(EditAnywhere)
    FName level_increment;
    
    UPROPERTY(EditAnywhere)
    FName level_decrement;
    
    UPROPERTY(EditAnywhere)
    FName fight_money;
    
    UPROPERTY(EditAnywhere)
    FName cost;
    
    UPROPERTY(EditAnywhere)
    FName purchase;
    
    FBlackPenLevelWidgetName();
};

