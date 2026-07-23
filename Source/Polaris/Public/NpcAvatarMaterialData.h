#pragma once
#include "CoreMinimal.h"
#include "NpcAvatarMaterialParameter.h"
#include "NpcAvatarMaterialData.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FNpcAvatarMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FNpcAvatarMaterialParameter> Parameters;
    
    POLARIS_API FNpcAvatarMaterialData();
};

