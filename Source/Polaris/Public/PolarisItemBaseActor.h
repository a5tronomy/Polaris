#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AbilityItemIdWrapPinStruct.h"
#include "EEventPlayerCharacterType.h"
#include "PolarisItemBaseActor.generated.h"

class UGFurComponent;
class UItemPrefab;
class UMeshComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS()
class POLARIS_API APolarisItemBaseActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    UMeshComponent* MeshComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UMeshComponent*> DependencyMeshComponents;
    
    UPROPERTY()
    bool IsResiterComponet;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAbilityItemIdWrapPinStruct AbilityID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsInitializeDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSyncMotionFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAutoReset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UGFurComponent*> MeshGFurComponentArray;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UItemPrefab* ItemPrefab;
    
    APolarisItemBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StageRangeItemReset(FVector resetPos);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleFlag(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraDefaultConstraint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnMeshForMissile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomizeDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeshCreated(bool is_skeletal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrowSetPosition(const FVector& position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrowHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrowGuard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrowCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedShoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedSetPosition(const FVector& position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedGuard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemMeleeHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemMeleeGuard();
    
    UFUNCTION(BlueprintPure)
    bool IsConstraint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandOffAbility();
    
    UFUNCTION(BlueprintPure)
    UStaticMeshComponent* GetStaticMeshComponent();
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMeshComponent();
    
    UFUNCTION(BlueprintPure)
    FVector GetRandomStageRangePos(FVector resetPos);
    
    UFUNCTION(BlueprintPure)
    float GetPlayerMotionFrame() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayerHPPercentage() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetPlayerBaseTransform();
    
    UFUNCTION(BlueprintPure)
    FRotator GetPlayerBaseRotate() const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetMeshComponent();
    
    UFUNCTION(BlueprintPure)
    UStaticMeshComponent* GetDependencyStaticMeshComponent(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetDependencySkeletalMeshComponent(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDependencyMeshCount() const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetDependencyMeshComponent(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GePlayerFrameSpeed() const;
    
    UFUNCTION(BlueprintPure)
    EEventPlayerCharacterType CheckEventPlayerCharacterType(int32 Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BorrowMeshForMissile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BakeCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimationStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimationStart(int32 start_frame);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDependencyMeshComponent(UMeshComponent* Component);
    
};

