#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "EManaColorSpace.h"
#include "EManaMovieType.h"
#include "MaterialExpressionManaColorSpaceConverter.generated.h"

UCLASS(CollapseCategories)
class CRIWARERUNTIME_API UMaterialExpressionManaColorSpaceConverter : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Luma;
    
    UPROPERTY()
    FExpressionInput ChromaB;
    
    UPROPERTY()
    FExpressionInput ChromaR;
    
    UPROPERTY()
    FExpressionInput ALPHA;
    
    UPROPERTY()
    FExpressionInput Gamma;
    
    UPROPERTY()
    bool bH264;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EManaMovieType MovieType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EManaColorSpace ColorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseGammaExponent;
    
    UPROPERTY(EditAnywhere)
    float ConstGamma;
    
    UMaterialExpressionManaColorSpaceConverter();

};

