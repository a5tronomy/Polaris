#pragma once
#include "CoreMinimal.h"
#include "ExtraItemStruct.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FExtraItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* ExtraItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ExtraDefaultConstaraintNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsExtraDefaultConstaraintNode;
    
    FExtraItemStruct();
};

