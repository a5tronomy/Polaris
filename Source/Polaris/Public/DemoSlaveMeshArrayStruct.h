#pragma once
#include "CoreMinimal.h"
#include "DemoSlaveMeshArrayStruct.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoSlaveMeshArrayStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<USkeletalMeshComponent*> DemoSlaveMeshComponentArray;
    
    FDemoSlaveMeshArrayStruct();
};

