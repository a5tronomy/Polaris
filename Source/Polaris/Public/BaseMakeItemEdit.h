#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseMakeItemEdit.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBaseMakeItemEdit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor AlbedoOpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UVOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UVMultiply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendAlphaMultiply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isEditValid;
    
    FBaseMakeItemEdit();
};

