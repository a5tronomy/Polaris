#pragma once
#include "CoreMinimal.h"
#include "PolarisBallBaseActor.h"
#include "PolarisBallActor.generated.h"

class UPolarisBallMeshComponent;

UCLASS()
class POLARIS_API APolarisBallActor : public APolarisBallBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPolarisBallMeshComponent* MainMesh;
    
    APolarisBallActor(const FObjectInitializer& ObjectInitializer);

};

