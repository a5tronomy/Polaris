#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EStageGimmickState.h"
#include "PolarisStageGimmickBaseActor.generated.h"

UCLASS(Abstract)
class POLARIS_API APolarisStageGimmickBaseActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageGimmickState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RelatedStageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpluseStrengthS_Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsTakeWallHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsTakeFloorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsTakeForceLowerFloorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsTakeForceUpperFloorHit;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsDurableBreakFlag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsOwnerGroundActorFlag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsKamuiActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCollisionBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCollisionSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHiddenBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHiddenSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHiddenCullBack;
    
    APolarisStageGimmickBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibleCullBack(bool Status);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWallHitSBlueprint(FVector HitLocation, float Damage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopBehaviorBlueprint();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnResetBlueprint();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitBlueprint();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerDown(int32 player_id) const;
    
};

