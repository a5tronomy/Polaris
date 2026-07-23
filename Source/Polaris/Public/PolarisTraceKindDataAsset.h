#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceKindDataAsset.generated.h"

class UMaterialInterface;
class UPolarisTraceEffectCurve;
class UPolarisTraceMeshDataAsset;

UCLASS(BlueprintType)
class POLARIS_API UPolarisTraceKindDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPolarisTraceMeshDataAsset* MeshSetting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UMaterialInterface*> MaterialArray;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ParticleSystemTemplateId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPolarisTraceEffectCurve* EffectCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPolarisTraceEffectCurve* EffectDeltaCurve;
    
    UPolarisTraceKindDataAsset();

};

