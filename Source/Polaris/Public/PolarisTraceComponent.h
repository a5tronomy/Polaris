#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EPolarisTraceKindId.h"
#include "EPolarisTracePartsId.h"
#include "PolarisTraceComponent.generated.h"

class APolarisTraceMeshActor;
class UPolarisTraceColorPalletDataAsset;
class UPolarisTraceDataAsset;
class USkeletalMeshComponent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisTraceComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPolarisTraceColorPalletDataAsset* TraceColorPalletDataAsset;
    
    UPROPERTY(Transient)
    UPolarisTraceDataAsset* TraceDataAsset;
    
    UPROPERTY(Instanced)
    TMap<EPolarisTracePartsId, USkeletalMeshComponent*> ParentMeshMap;
    
public:
    UPolarisTraceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(UPolarisTraceDataAsset* InTraceDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void ReAttach(USkeletalMeshComponent* parent_mesh, const EPolarisTracePartsId ID);
    
    UFUNCTION(BlueprintCallable)
    void PlayTrace(const EPolarisTracePartsId ID, const int32 LIFE, const int32 Length, const EPolarisTraceKindId kind_id);
    
private:
    UFUNCTION()
    void OnVFxFinished(int32 InstanceId);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<APolarisTraceMeshActor*> GetTraceMesh();
    
    UFUNCTION(BlueprintCallable)
    void AttachDataAsset(const EPolarisTracePartsId ID);
    
    UFUNCTION(BlueprintCallable)
    void Attach(const FName weapon_name, const EPolarisTracePartsId ID);
    
};

