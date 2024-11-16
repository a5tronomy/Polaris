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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    EStageGimmickState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    int32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    int32 RelatedStageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    float ImpluseStrengthS_Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    bool IsTakeWallHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    bool IsTakeFloorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    bool IsTakeForceLowerFloorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    bool IsTakeForceUpperFloorHit;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "StageGimmickBase")
    bool IsDurableBreakFlag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "StageGimmickBase")
    bool IsOwnerGroundActorFlag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "StageGimmickBase")
    bool IsKamuiActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    bool IsCollisionBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    bool IsCollisionSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    bool IsHiddenBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    bool IsHiddenSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickBase")
    bool IsHiddenCullBack;
    
    APolarisStageGimmickBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "StageGimmickBase")
    void SetVisibleCullBack(bool Status);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "StageGimmickBase")
    void OnWallHitSBlueprint(FVector HitLocation, float Damage);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "StageGimmickBase")
    void OnStopBehaviorBlueprint();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "StageGimmickBase")
    void OnResetBlueprint();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "StageGimmickBase")
    void OnInitBlueprint();
    
    UFUNCTION(BlueprintPure, Category = "StageGimmickBase")
    bool IsPlayerDown(int32 player_id) const;
    
};

