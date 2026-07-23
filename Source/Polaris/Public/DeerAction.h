#pragma once
#include "CoreMinimal.h"
#include "EDeerAction.h"
#include "DeerAction.generated.h"

USTRUCT(BlueprintType)
struct FDeerAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDeerAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ToAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FromAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimspeedRate;
    
    POLARIS_API FDeerAction();
};

