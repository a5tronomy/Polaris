#pragma once
#include "CoreMinimal.h"
#include "OverrideFaceSkinMaterialParameter.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FOverrideFaceSkinMaterialParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Roughness_01_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Specular_01_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SSS_01_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Roughness_02_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Specular_02_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SSS_02_Param;
    
    FOverrideFaceSkinMaterialParameter();
};

