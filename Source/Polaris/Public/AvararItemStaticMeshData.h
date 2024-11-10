#pragma once
#include "CoreMinimal.h"
#include "AvararItemStaticMeshInstanceData.h"
#include "AvararItemStaticMeshData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FAvararItemStaticMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString attachSokectBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAvararItemStaticMeshInstanceData> instanceDatas;
    
    FAvararItemStaticMeshData();
};

