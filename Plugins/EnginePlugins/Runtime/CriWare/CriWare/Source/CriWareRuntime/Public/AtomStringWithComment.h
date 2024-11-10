#pragma once
#include "CoreMinimal.h"
#include "AtomStringWithComment.generated.h"

USTRUCT(BlueprintType)
struct FAtomStringWithComment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    CRIWARERUNTIME_API FAtomStringWithComment();
};

