#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DownInfoInGame.generated.h"

class UMaterialInstance;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FDownInfoInGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* DecalMaterialAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
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
    
    POLARIS_API FDownInfoInGame();
};

