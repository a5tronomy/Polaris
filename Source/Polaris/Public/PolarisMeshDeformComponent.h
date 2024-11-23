#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "PolarisMeshDeformParam.h"
#include "PolarisMeshDeformComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisMeshDeformComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshDeform")
    TArray<FPolarisMeshDeformParam> DeformParams;
    
    UPolarisMeshDeformComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "MeshDeform")
    static void UpdateMeshWeightIF(USkeletalMeshComponent* Mesh, UPARAM(Ref) TArray<FPolarisMeshDeformParam>& NewDeformParams, FVector HitPosition, float Damage);
    
    UFUNCTION(BlueprintCallable, Category = "MeshDeform")
    void UpdateMeshWeight(FVector HitPosition, float Damage);
    
    UFUNCTION(BlueprintCallable, Category = "MeshDeform")
    static void ResetMeshWeightIF(USkeletalMeshComponent* Mesh, UPARAM(Ref) TArray<FPolarisMeshDeformParam>& NewDeformParams);
    
    UFUNCTION(BlueprintCallable, Category = "MeshDeform")
    void Init();
    
    UFUNCTION(BlueprintCallable, Category = "MeshDeform")
    static float GetInfluence(FVector Center, float Radius, FVector HitPosition);
    
};

