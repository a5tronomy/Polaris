#pragma once
#include "CoreMinimal.h"
#include "ClothOverrideCollisionDataStruct.generated.h"

class UCatwalkClothCollisionAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FClothOverrideCollisionDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UCatwalkClothCollisionAsset> CatwalkClothCollisionOverrideAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReleaseVersion;
    
    FClothOverrideCollisionDataStruct();
};

