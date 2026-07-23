#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommonEffectData.h"
#include "PolarisEffectDataAsset.generated.h"

class UNiagaraSystem;
class UStaticMesh;
class UTexture;

UCLASS(BlueprintType)
class POLARIS_API UPolarisEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FCommonEffectData> ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTexture*> TextureDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UStaticMesh*> StaticMeshDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UNiagaraSystem*> NiagaraDataArray;
    
    UPolarisEffectDataAsset();

};

