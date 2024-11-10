#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CustomSlateVertex.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomSlateVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector4 TexCoords;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D MaterialTexCoords;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D position;
    
    UPROPERTY(BlueprintReadWrite)
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PixelWidth;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PixelHeight;
    
    FCustomSlateVertex();
};

