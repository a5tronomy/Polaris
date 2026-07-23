#pragma once
#include "CoreMinimal.h"
#include "EPolarisGenericItemEvent.h"
#include "GenericItemEventAnimationInfoStruct.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct POLARIS_API FGenericItemEventAnimationInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    int32 REV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisGenericItemEvent EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, UAnimSequence*> AnimationMap;
    
    FGenericItemEventAnimationInfoStruct();
};

