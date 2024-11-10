#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ENpcAvatarMaterialParameterType.h"
#include "NpcAvatarMaterialParameter.generated.h"

USTRUCT(BlueprintType)
struct FNpcAvatarMaterialParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ENpcAvatarMaterialParameterType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Value;
    
    POLARIS_API FNpcAvatarMaterialParameter();
};

