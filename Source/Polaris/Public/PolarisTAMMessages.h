#pragma once
#include "CoreMinimal.h"
#include "PolarisTAMMessages.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTAMMessages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FText> Messages;
    
    FPolarisTAMMessages();
};

