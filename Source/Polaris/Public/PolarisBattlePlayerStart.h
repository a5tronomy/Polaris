#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "EStageLightType.h"
#include "EStagePositionTypeId.h"
#include "PolarisBattlePlayerStartCamera.h"
#include "PolarisStageForcusCamera.h"
#include "PolarisBattlePlayerStart.generated.h"

UCLASS()
class POLARIS_API APolarisBattlePlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StageBrokenHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStagePositionTypeId StagePositionTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FloorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageLightType StageLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsWallAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisBattlePlayerStartCamera> RoundStartCameraAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageForcusCamera> StageForcusCameraAssets;
    
    APolarisBattlePlayerStart(const FObjectInitializer& ObjectInitializer);

};

