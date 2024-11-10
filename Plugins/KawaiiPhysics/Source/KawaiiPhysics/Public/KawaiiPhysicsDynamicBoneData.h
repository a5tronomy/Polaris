#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CapsuleLimit.h"
#include "CapsuleLimitData.h"
#include "EBoneForwardAxis.h"
#include "EPlanarConstraint.h"
#include "KawaiiPhysicsSettings.h"
#include "PlanarLimit.h"
#include "PlanarLimitData.h"
#include "SphericalLimit.h"
#include "SphericalLimitData.h"
#include "KawaiiPhysicsDynamicBoneData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysicsDynamicBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName RootBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ExcludeBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKawaiiPhysicsSettings PhysicsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* DampingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* WorldDampingLocationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* WorldDampingRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* StiffnessCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* RadiusCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* LimitAngleCurve;
    
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
    
    FKawaiiPhysicsDynamicBoneData();
};

