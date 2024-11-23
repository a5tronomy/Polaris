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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    EStageGimmickState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    int32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    int32 RelatedStageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    float ImpluseStrengthS_Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsTakeWallHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsTakeFloorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsTakeForceLowerFloorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsTakeForceUpperFloorHit;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsDurableBreakFlag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsOwnerGroundActorFlag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsKamuiActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsCollisionBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsCollisionSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsHiddenBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsHiddenSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickBase")
    bool IsHiddenCullBack;
    
    APolarisStageGimmickBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGimmickBase")
    void SetVisibleCullBack(bool Status);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Polaris|StageGimmickBase")
    void OnWallHitSBlueprint(FVector HitLocation, float Damage);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Polaris|StageGimmickBase")
    void OnStopBehaviorBlueprint();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Polaris|StageGimmickBase")
    void OnResetBlueprint();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Polaris|StageGimmickBase")
    void OnInitBlueprint();
    
    UFUNCTION(BlueprintPure, Category = "Polaris|StageGimmickBase")
    bool IsPlayerDown(int32 player_id) const;
    
};

