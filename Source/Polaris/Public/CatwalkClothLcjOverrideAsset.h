#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CatwalkClothLcjOverrideAsset.generated.h"

class UCatwalkClothOverride;
class USkeletalMesh;

UCLASS(BlueprintType)
class POLARIS_API UCatwalkClothLcjOverrideAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* ClothOverrideMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> OverrideCatwalkClothLcjFileName;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCatwalkClothOverride* ClothOverrideSetting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClothOverride_EnvironmentCollisionMargin;
    
    UCatwalkClothLcjOverrideAsset();

};

