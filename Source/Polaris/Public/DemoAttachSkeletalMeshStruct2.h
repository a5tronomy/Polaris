#pragma once
#include "CoreMinimal.h"
#include "DemoAttachSkeletalMeshStruct2.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoAttachSkeletalMeshStruct2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* SkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachMeshRootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachBoneName;
    
    FDemoAttachSkeletalMeshStruct2();
};

