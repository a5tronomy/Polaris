#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h"
#include "CapsuleLimit.h"
#include "CapsuleLimitData.h"
#include "EBoneForwardAxis.h"
#include "EPlanarConstraint.h"
#include "KawaiiPhysicsSettings.h"
#include "PlanarLimit.h"
#include "PlanarLimitData.h"
#include "SphericalLimit.h"
#include "SphericalLimitData.h"
#include "KawaiiPhysicsDynamicBoneDataAsset.generated.h"

UCLASS(BlueprintType)
class KAWAIIPHYSICS_API UKawaiiPhysicsDynamicBoneDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName RootBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ExcludeBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKawaiiPhysicsSettings PhysicsSettings;
    
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
    float DummyBoneLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneForwardAxis BoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlanarConstraint PlanarConstraint;
    
    UPROPERTY(EditAnywhere)
    TArray<FSphericalLimitData> SphericalLimitsData;
    
    UPROPERTY(EditAnywhere)
    TArray<FCapsuleLimitData> CapsuleLimitsData;
    
    UPROPERTY(EditAnywhere)
    TArray<FPlanarLimitData> PlanarLimitsData;
    
    UPROPERTY()
    TArray<FSphericalLimit> SphericalLimits;
    
    UPROPERTY()
    TArray<FCapsuleLimit> CapsuleLimits;
    
    UPROPERTY()
    TArray<FPlanarLimit> PlanarLimits;
    
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
    
    UKawaiiPhysicsDynamicBoneDataAsset();

};

