#pragma once
#include "CoreMinimal.h"
#include "ItemPositionKey.h"
#include "TextureRTWithPosConteinter.generated.h"

class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct POLARIS_API FTextureRTWithPosConteinter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* TextureRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FItemPositionKey> PositionKeyArray;
    
    FTextureRTWithPosConteinter();
};

