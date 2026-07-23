#pragma once
#include "CoreMinimal.h"
#include "CharacterMIDParameter.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct POLARIS_API FCharacterMIDParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, UCurveFloat*> SkinMaterialCurveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, UCurveFloat*> EyeMaterialCurveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, UCurveFloat*> ElseMaterialCurveMap;
    
    FCharacterMIDParameter();
};

