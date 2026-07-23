#pragma once
#include "CoreMinimal.h"
#include "ChangeDependencyParam.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FChangeDependencyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DepdencencyMeshNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMainMeshVisibility;
    
    FChangeDependencyParam();
};

