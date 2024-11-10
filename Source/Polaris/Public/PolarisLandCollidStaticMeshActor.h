#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "PolarisLandCollidStaticMeshActor.generated.h"

UCLASS()
class POLARIS_API APolarisLandCollidStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FloorNo;
    
    APolarisLandCollidStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

