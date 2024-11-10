#pragma once
#include "CoreMinimal.h"
#include "ECharacterSelectSequenceType.h"
#include "EventOnChangeCharacterSelectSeqeunceParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeCharacterSelectSeqeunceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECharacterSelectSequenceType Type;
    
    POLARIS_API FEventOnChangeCharacterSelectSeqeunceParam();
};

