#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EStageImpulseStrengthType.h"
#include "StageGimmickDebugInfo.h"
#include "StageGimmickStruct.h"
#include "PolarisStageDebugActor.generated.h"

class APolarisMobActor;
class APolarisStageGimmickBaseActor;
class APolarisStageGroundActor;

UCLASS()
class POLARIS_API APolarisStageDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStageGimmickStruct> GimmickStructArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisStageGimmickBaseActor*> GimmickArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisStageGimmickBaseActor* nowFocusGimmickActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisStageGroundActor*> GroundArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisMobActor*> MobArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStageGimmickDebugInfo StageGimmickDebugInfo;
    
public:
    APolarisStageDebugActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGimmickStructArray();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGimmickDebugInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceGimmickBreak(EStageImpulseStrengthType strength_type);
    
};

