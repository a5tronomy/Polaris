#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGroundActor.h"
#include "PolarisStageFloorActor.generated.h"

UCLASS()
class POLARIS_API APolarisStageFloorActor : public APolarisStageGroundActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsFloorBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsStageDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDummyBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsFloorBlast;
    
    APolarisStageFloorActor(const FObjectInitializer& ObjectInitializer);

};

