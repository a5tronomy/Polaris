#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubColorKey.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSubColorKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Target;
    
    FSubColorKey();
};

