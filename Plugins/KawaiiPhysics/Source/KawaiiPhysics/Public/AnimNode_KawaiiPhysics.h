#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsEngine/BodyInstance.h"
#include "BoneContainer.h"
#include "Curves/CurveFloat.h"
#include "CapsuleLimit.h"
#include "EBoneForwardAxis.h"
#include "EPlanarConstraint.h"
#include "KawaiiPhysicsModifyBone.h"
#include "KawaiiPhysicsSettings.h"
#include "PlanarLimit.h"
#include "SphericalLimit.h"
#include "AnimNode_KawaiiPhysics.generated.h"

class UCurveFloat;
class UKawaiiPhysicsDynamicBoneDataAsset;
class UKawaiiPhysicsLimitsDataAsset;

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference RootBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> ExcludeBones;
    
    UPROPERTY(EditAnywhere)
    int32 TargetFrameRate;
    
    UPROPERTY(EditAnywhere)
    bool OverrideTargetFramerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKawaiiPhysicsSettings PhysicsSettings;
    
    UPROPERTY()
    UCurveFloat* DampingCurve;
    
    UPROPERTY()
    UCurveFloat* WorldDampingLocationCurve;
    
    UPROPERTY()
    UCurveFloat* WorldDampingRotationCurve;
    
    UPROPERTY()
    UCurveFloat* StiffnessCurve;
    
    UPROPERTY()
    UCurveFloat* RadiusCurve;
    
    UPROPERTY()
    UCurveFloat* LimitAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve DampingCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve WorldDampingLocationCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve WorldDampingRotationCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve StiffnessCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve RadiusCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve LimitAngleCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdatePhysicsSettingsInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DummyBoneLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneForwardAxis BoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlanarConstraint PlanarConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ResetBoneTransformWhenBoneNotFound;
    
    UPROPERTY(EditAnywhere)
    TArray<FSphericalLimit> SphericalLimits;
    
    UPROPERTY(EditAnywhere)
    TArray<FCapsuleLimit> CapsuleLimits;
    
    UPROPERTY(EditAnywhere)
    TArray<FPlanarLimit> PlanarLimits;
    
    UPROPERTY(EditAnywhere)
    UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FSphericalLimit> SphericalLimitsData;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FCapsuleLimit> CapsuleLimitsData;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FPlanarLimit> PlanarLimitsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportRotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowWorldCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideCollisionParams;
    
    UPROPERTY(EditAnywhere)
    FBodyInstance CollisionChannelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreSelfComponent;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> IgnoreBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> IgnoreBoneNamePrefix;
    
    UPROPERTY()
    TArray<FKawaiiPhysicsModifyBone> ModifyBones;
    
private:
    UPROPERTY()
    float TotalBoneLength;
    
    UPROPERTY()
    FTransform PreSkelCompTransform;
    
    UPROPERTY()
    bool bInitPhysicsSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableUserAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UKawaiiPhysicsDynamicBoneDataAsset* DynamicBoneDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 nDynamicBoneDataNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bEditingUserAsset;
    
    FAnimNode_KawaiiPhysics();
};

