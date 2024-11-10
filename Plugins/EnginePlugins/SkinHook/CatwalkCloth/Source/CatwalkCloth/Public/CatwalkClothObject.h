#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CatwalkClothExternalSimulationMesh.h"
#include "CatwalkClothVariation.h"
#include "CatwalkClothObject.generated.h"

class USkeletalMesh;

UCLASS()
class CATWALKCLOTH_API UCatwalkClothObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FCatwalkClothVariation> Variations;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FCatwalkClothExternalSimulationMesh> ExternalSimulationMeshes;
    
    UPROPERTY()
    TSet<TSoftObjectPtr<USkeletalMesh>> OriginalMergedMeshes;
    
    UPROPERTY()
    bool bSerializeSectionConversionInfos;
    
    UCatwalkClothObject();

};

