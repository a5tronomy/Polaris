#pragma once
#include "CoreMinimal.h"
#include "PolarisCharacterCameraActor.h"
#include "PolarisCharacterSelectCameraActor.generated.h"

class ULevelSequence;
class ULevelSequencePlayer;

UCLASS()
class POLARIS_API APolarisCharacterSelectCameraActor : public APolarisCharacterCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* PlayCameraSeqSideToChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* PlayCameraSeqCharaToSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* PlayCameraSeqCharaToStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* PlayCameraSeqStageToChara;
    
    APolarisCharacterSelectCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoopCheck(ULevelSequencePlayer* _player);
    
};

