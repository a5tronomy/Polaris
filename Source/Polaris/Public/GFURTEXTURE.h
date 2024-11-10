#pragma once
#include "CoreMinimal.h"
#include "GFURTEXTURE.generated.h"

USTRUCT(BlueprintType)
struct FGFURTEXTURE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bForceMipStreaming: 1;
    
    POLARIS_API FGFURTEXTURE();
};

