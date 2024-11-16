#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGroundActor.h"
#include "PolarisStageFloorActor.generated.h"

UCLASS()
class POLARIS_API APolarisStageFloorActor : public APolarisStageGroundActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageFloor")
    bool IsFloorBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageFloor")
    bool IsStageDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageFloor")
    bool IsDummyBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageFloor")
    bool IsFloorBlast;
    
    APolarisStageFloorActor(const FObjectInitializer& ObjectInitializer);

};

