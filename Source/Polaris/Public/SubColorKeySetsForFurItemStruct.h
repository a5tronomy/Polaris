#pragma once
#include "CoreMinimal.h"
#include "SubColorKeySetsForFurItemStruct.generated.h"

class UMaterialInterface;
class USubColorKeySetsGroup;

USTRUCT(BlueprintType)
struct POLARIS_API FSubColorKeySetsForFurItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TargetMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USubColorKeySetsGroup* SubColorKeySetsGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReleaseVersion;
    
    FSubColorKeySetsForFurItemStruct();
};

