#pragma once
#include "CoreMinimal.h"
#include "AtomCategoryInfoParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCategoryInfoParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 category_id;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 group_no;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Volume;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsPaused;
    
    CRIWARERUNTIME_API FAtomCategoryInfoParam();
};

