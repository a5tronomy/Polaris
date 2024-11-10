#pragma once
#include "CoreMinimal.h"
#include "WeaponBoneName.generated.h"

USTRUCT(BlueprintType)
struct FWeaponBoneName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName WeaponName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName WeaponBoneName;
    
    POLARIS_API FWeaponBoneName();
};

