#pragma once
#include "CoreMinimal.h"
#include "ECharacterSelectSequenceType.h"
#include "EPolarisCharacterAnimStatus.h"
#include "EventOnChangeCharacterSelectSeqeunceParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeCharacterSelectSeqeunceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECharacterSelectSequenceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisCharacterAnimStatus AnimType;
    
    POLARIS_API FEventOnChangeCharacterSelectSeqeunceParam();
};

