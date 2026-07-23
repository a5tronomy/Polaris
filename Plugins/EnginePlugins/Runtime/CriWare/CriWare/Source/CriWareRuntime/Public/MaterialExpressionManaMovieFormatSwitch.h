#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionManaMovieFormatSwitch.generated.h"

UCLASS(CollapseCategories, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_MaterialExpressionManaMovieFormatSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Inputs[5];
    
    UDEPRECATED_MaterialExpressionManaMovieFormatSwitch();

};

