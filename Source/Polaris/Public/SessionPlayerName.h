#pragma once
#include "CoreMinimal.h"
#include "SessionPlayerName.generated.h"

USTRUCT(BlueprintType)
struct FSessionPlayerName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    FString platform_id;
    
    UPROPERTY(BlueprintReadOnly)
    FString polaris_id;
    
    UPROPERTY(BlueprintReadOnly)
    int32 platform_tag;
    
    POLARIS_API FSessionPlayerName();
};

