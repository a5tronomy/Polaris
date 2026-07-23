#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName loading_widget;
    
    UPROPERTY(EditAnywhere)
    FName type_scrollbox;
    
    UPROPERTY(EditAnywhere)
    FName list_scrollbox;
    
    UPROPERTY(EditAnywhere)
    FName mission_parent_widget;
    
    UPROPERTY(EditAnywhere)
    FName xp_info_widget;
    
    UPROPERTY(EditAnywhere)
    FName not_held_widget;
    
    FBlackPenMissionWidgetName();
};

