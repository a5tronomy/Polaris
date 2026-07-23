#pragma once
#include "CoreMinimal.h"
#include "BlackPenDetailsMenuWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenDetailsMenuWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName _title_parent;
    
    UPROPERTY(EditAnywhere)
    FName _title_text;
    
    UPROPERTY(EditAnywhere)
    FName _detail;
    
    FBlackPenDetailsMenuWidgetName();
};

