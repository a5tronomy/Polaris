#pragma once
#include "CoreMinimal.h"
#include "EventOnSetCameraCheckParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnSetCameraCheckParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Size;
    
    POLARIS_API FEventOnSetCameraCheckParam();
};

