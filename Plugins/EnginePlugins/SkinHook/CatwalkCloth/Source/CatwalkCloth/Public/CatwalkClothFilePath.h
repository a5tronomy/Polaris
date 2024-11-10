#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothFilePath.generated.h"

USTRUCT()
struct FCatwalkClothFilePath {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Path;
    
    CATWALKCLOTH_API FCatwalkClothFilePath();
};

