#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPolarisBodyTransformState.h"
#include "EPolarisKatanaVisibility.h"
#include "EventOnInitBattleParam.h"
#include "PolarisCharacterUniqueComponent.generated.h"

class APolarisCharacterActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisCharacterUniqueComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisCharacterActor* OwnerCharacterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisBodyTransformState BodyTransformState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WeaponMeshVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisKatanaVisibility LeftKatanaVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisKatanaVisibility RightKatanaVisibility;
    
    UPolarisCharacterUniqueComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMaterialParameters(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetWeaponMeshVisibleImpl(int32 Type, bool IsOn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetWeaponMeshVisibleAllImpl(bool isForce);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWeaponMeshVisible(int32 Type, bool IsOn, bool isForce);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetWeaponGimmickOnOffImpl(int32 Type, bool IsOn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibleRightKatanaImpl(EPolarisKatanaVisibility KatanaVisibility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleRightKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibleLeftKatanaImpl(EPolarisKatanaVisibility KatanaVisibility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleLeftKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFaceState(int32 Type, float param1);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetBodyTransformImpl(EPolarisBodyTransformState State, bool isForce, bool IsAlways);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBodyTransform(EPolarisBodyTransformState State, bool isForce, bool IsAlways);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMeshSettingCompleted(bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemCreateCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattleReset(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroyBefore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBakeCompleted(bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeshPartsOnOff(bool IsOn, int32 MeshNum);
    
};

