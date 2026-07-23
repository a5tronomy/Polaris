#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPolarisMobReactionType.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnRadialForceParam.h"
#include "EventOnWallHitParam.h"
#include "PolarisMobReactionAnimSequenceList.h"
#include "PolarisReducibleInterface.h"
#include "Templates/SubclassOf.h"
#include "PolarisMobReactionMobActor.generated.h"

class UPolarisMobReactionMobAnimInstance;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS()
class POLARIS_API APolarisMobReactionMobActor : public AActor, public IPolarisReducibleInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* MobMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPolarisMobReactionMobAnimInstance> MobMeshAnimInstanceClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CheerRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TerrorRange;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bOverrideRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRandomStream RandomSeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPolarisMobReactionType, FPolarisMobReactionAnimSequenceList> ReactionMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* MobMeshComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPolarisMobReactionMobAnimInstance> MobAnimInstance;
    
public:
    APolarisMobReactionMobActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestReaction(EPolarisMobReactionType _RequestReaction, float Delay);
    
private:
    UFUNCTION()
    void OnWallHit(FEventOnWallHitParam Param);
    
    UFUNCTION()
    void OnRadialForce(FEventOnRadialForceParam Param);
    
    UFUNCTION()
    void OnPreInitBattle();
    
    UFUNCTION()
    void OnMotHeadStart();
    
    UFUNCTION()
    void OnMotHeadEnd();
    
    UFUNCTION()
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION()
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceReactionNative(EPolarisMobReactionType Type);
    

    // Fix for true pure virtual functions not being implemented
};

