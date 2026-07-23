#pragma once
#include "CoreMinimal.h"
#include "SlaveMeshSetInnerStruct.h"
#include "SlaveMeshSetStruct.generated.h"

class UItemPrefab;

USTRUCT(BlueprintType)
struct POLARIS_API FSlaveMeshSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlaveMeshSetInnerStruct MainMeshSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FSlaveMeshSetInnerStruct> DependencyMeshSetMap;
    
    UPROPERTY(BlueprintReadWrite)
    UItemPrefab* source_ip;
    
    FSlaveMeshSetStruct();
};

