#pragma once
#include "CoreMinimal.h"
#include "ClothCollision.generated.h"

class UCatwalkClothCollisionAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FClothCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCatwalkClothCollisionAsset* Collision;
    
    FClothCollision();
};

