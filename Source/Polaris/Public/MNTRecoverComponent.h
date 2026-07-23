#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MNTRecoverComponent.generated.h"

class APolarisCharacterActor;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UMNTRecoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* Collection;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float HeadRecoverSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FName HeadPivotBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float ArmRecoverSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FName LeftArmPivotBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FName RightArmPivotBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float SafeRadius;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> UpdateParamNames;
    
private:
    UPROPERTY()
    TWeakObjectPtr<APolarisCharacterActor> OwnerPlayer;
    
public:
    UMNTRecoverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RecoverRightArm();
    
    UFUNCTION(BlueprintCallable)
    void RecoverLeftArm();
    
    UFUNCTION(BlueprintCallable)
    void RecoverHead();
    
    UFUNCTION(BlueprintCallable)
    void RecoveredRightArm();
    
    UFUNCTION(BlueprintCallable)
    void RecoveredLeftArm();
    
    UFUNCTION(BlueprintCallable)
    void RecoveredHead();
    
    UFUNCTION(BlueprintCallable)
    void InitializeParameters();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMaterialInstanceDynamic*> GetReplaceFaceMaterials(UMeshComponent* pMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMaterialInstanceDynamic*> GetReplaceArmMaterials(UMeshComponent* pMeshComponent, bool isLeft);
    
};

