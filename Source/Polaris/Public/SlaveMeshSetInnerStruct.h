#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothComponentStruct.h"
#include "SlaveMeshSetInnerStruct.generated.h"

class UGFurComponent;
class UMeshComponent;

USTRUCT(BlueprintType)
struct POLARIS_API FSlaveMeshSetInnerStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite)
    FCatwalkClothComponentStruct CatwalkClothCompSet;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UGFurComponent*> GFurCompArray;
    
    FSlaveMeshSetInnerStruct();
};

