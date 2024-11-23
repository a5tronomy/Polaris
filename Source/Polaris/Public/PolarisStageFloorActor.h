#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGroundActor.h"
#include "PolarisStageFloorActor.generated.h"

UCLASS()
class POLARIS_API APolarisStageFloorActor : public APolarisStageGroundActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageFloor")
    bool IsFloorBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageFloor")
    bool IsStageDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageFloor")
    bool IsDummyBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageFloor")
    bool IsFloorBlast;
    
    APolarisStageFloorActor(const FObjectInitializer& ObjectInitializer);

};

