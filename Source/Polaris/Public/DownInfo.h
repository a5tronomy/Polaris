#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DownInfo.generated.h"

class UMaterialInstance;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FDownInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* ParticleAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInstance* DecalMaterialAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* DestructibleParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<float> RandomDecalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<float> RandomDecalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isParticleToReceiveDacal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<float> RandomForceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FVector> RandomDestructibleMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<float> RandomDestructibleMeshRotation;
    
    POLARIS_API FDownInfo();
};

