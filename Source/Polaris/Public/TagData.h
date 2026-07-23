#pragma once
#include "CoreMinimal.h"
#include "TagData.generated.h"

USTRUCT(BlueprintType)
struct FTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 tagId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString tagName;
    
    POLARIS_API FTagData();
};

