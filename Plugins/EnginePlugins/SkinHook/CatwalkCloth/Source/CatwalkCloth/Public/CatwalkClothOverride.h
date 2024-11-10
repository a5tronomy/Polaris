#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CatwalkClothOverride.generated.h"

class USkeletalMesh;

UCLASS()
class CATWALKCLOTH_API UCatwalkClothOverride : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<USkeletalMesh> AppliedMesh;
    
    UPROPERTY()
    int32 NumLODs;
    
    UPROPERTY()
    bool bValidMeshAssigned;
    
    UCatwalkClothOverride();

};

