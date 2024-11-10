#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "CatwalkClothExternalSimulationMeshSlot.h"
#include "ECwClothBoneScalingMode.h"
#include "CatwalkClothComponentBase.generated.h"

class UCatwalkClothCollisionAsset;
class USkinnedMeshComponent;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CATWALKCLOTHINTERFACE_API UCatwalkClothComponentBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CancelDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CancelAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CwcMaxDistanceRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceMotionCancellation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseBoneScalingModeFromAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECwClothBoneScalingMode BoneScalingMode;
    
    UPROPERTY(BlueprintReadWrite)
    float CwcTimeDilation;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FCatwalkClothExternalSimulationMeshSlot> ExternalSimulationMeshSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ClothVariationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumStepsToSettleAfterReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AdditionalWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Wetness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RootMotionBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumStepsToBlendFromBindPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FString> DisabledSimulationMeshTags;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<USkinnedMeshComponent> AttachedPoseComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothCollisionAsset* CollisionOverride;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    UCatwalkClothCollisionAsset* AttachmentCollision;
    
public:
    UCatwalkClothComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCollisionOverride(UCatwalkClothCollisionAsset* InCollisionOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentCollision(UCatwalkClothCollisionAsset* InAttachmentCollision, USkinnedMeshComponent* InAttachedPoseComponent);
    
    UFUNCTION(BlueprintCallable)
    void ResetClothVertices();
    
    UFUNCTION()
    void InitializeExternalSimulatonMeshSlots();
    
    UFUNCTION(BlueprintPure)
    UCatwalkClothCollisionAsset* GetCollisionOverride() const;
    
    UFUNCTION(BlueprintPure)
    UCatwalkClothCollisionAsset* GetAttachmentCollision() const;
    
};

