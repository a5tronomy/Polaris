#pragma once
#include "CoreMinimal.h"
#include "PolarisRootControllerActorHolder.h"
#include "PolarisRootControllerParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPolarisRootControllerParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> ChildrenActors;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPolarisRootControllerActorHolder> AttachZOffsetActors;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName FindTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FindEatchComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FindAttachZOffsetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachBoneName;
    
    POLARIS_API FPolarisRootControllerParams();
};

