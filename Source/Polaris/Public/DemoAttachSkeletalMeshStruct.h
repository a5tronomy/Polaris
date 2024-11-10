#pragma once
#include "CoreMinimal.h"
#include "DemoAttachSkeletalMeshStruct.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoAttachSkeletalMeshStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* SkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachMeshRootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachBoneName;
    
    FDemoAttachSkeletalMeshStruct();
};

