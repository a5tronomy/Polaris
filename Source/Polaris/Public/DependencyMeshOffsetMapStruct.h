#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DependencyMeshOffsetMapStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDependencyMeshOffsetMapStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FTransform> ItemOptionalOffsetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FTransform> ItemOptionalAbilityOffsetMap;
    
    FDependencyMeshOffsetMapStruct();
};

