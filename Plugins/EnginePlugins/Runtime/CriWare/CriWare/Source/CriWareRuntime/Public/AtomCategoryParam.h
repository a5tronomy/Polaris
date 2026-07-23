#pragma once
#include "CoreMinimal.h"
#include "AtomCategoryParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCategoryParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Group;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Volume;
    
    CRIWARERUNTIME_API FAtomCategoryParam();
};

