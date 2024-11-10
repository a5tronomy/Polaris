#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisStageGimmickDestructibleMeshData.generated.h"

class ARadialForceActor;
class UNiagaraSystem;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FPolarisStageGimmickDestructibleMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* DestrictibleNiagaraRBDAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* DestrictibleStaticMeshAssset;
    
    UPROPERTY()
    bool DestrictibleEnableHardSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestrictibleImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ARadialForceActor* DestrictibleForce;
    
    UPROPERTY(EditAnywhere)
    bool IsVanish;
    
    UPROPERTY(EditAnywhere)
    bool IsNoFadeout;
    
    UPROPERTY(EditAnywhere)
    float VanishingStartSecond;
    
    UPROPERTY(EditAnywhere)
    float VanishingEndSecond;
    
    UPROPERTY(EditAnywhere)
    bool IsWallBarrier;
    
    UPROPERTY(EditAnywhere)
    FVector WallBarrierFacadeVector;
    
    POLARIS_API FPolarisStageGimmickDestructibleMeshData();
};

