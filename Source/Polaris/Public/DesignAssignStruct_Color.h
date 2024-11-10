#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DesignAssignStruct_Color.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDesignAssignStruct_Color {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Assign_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_DontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Assign_EnableChangeHue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Hue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Saturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Brightness;
    
    FDesignAssignStruct_Color();
};

