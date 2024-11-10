#pragma once
#include "CoreMinimal.h"
#include "ManaEventPointInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FManaEventPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Time;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Parameter;
    
    FManaEventPointInfo();
};

