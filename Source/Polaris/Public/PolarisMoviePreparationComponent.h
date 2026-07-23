#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PolarisMoviePreparationComponent.generated.h"

class UDataManaMovie;
class UManaTexture;
class UMaterial;
class UMaterialInstance;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisMoviePreparationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCompleted, int32, ID, UManaTexture*, ManaTexture, UMaterialInstance*, MaterialInstance);
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnCompleted OnCompleted;
    
    UPROPERTY(Transient)
    UManaTexture* ManaTexture;
    
    UPROPERTY(Transient)
    UDataManaMovie* DataManaMovie;
    
    UPROPERTY(Transient)
    UMaterial* TemplateMaterial;
    
    UPROPERTY(Transient)
    UMaterialInstance* MaterialInstance;
    
public:
    UPolarisMoviePreparationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSourceUsm(int32 ID, const TArray<uint8>& usm_data, UMaterial* template_material);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceTexture(int32 ID, UManaTexture* mana_texture, UMaterial* template_material);
    
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstance* GetMaterialInstance() const;
    
    UFUNCTION(BlueprintPure)
    UManaTexture* GetManaTexture() const;
    
};

