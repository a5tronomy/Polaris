#pragma once
#include "CoreMinimal.h"
#include "MeshViewTmp.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FMeshViewTmp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 AddedNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    USkeletalMesh* UseMesh;
    
    FMeshViewTmp();
};

