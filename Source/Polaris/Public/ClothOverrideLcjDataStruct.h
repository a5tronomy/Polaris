#pragma once
#include "CoreMinimal.h"
#include "ClothOverrideLcjDataStruct.generated.h"

class UCatwalkClothLcjOverrideAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FClothOverrideLcjDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UCatwalkClothLcjOverrideAsset> CatwalkClothLcjOverrideAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReleaseVersion;
    
    FClothOverrideLcjDataStruct();
};

