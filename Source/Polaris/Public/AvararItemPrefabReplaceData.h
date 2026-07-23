#pragma once
#include "CoreMinimal.h"
#include "AvararItemPrefabReplaceData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FAvararItemPrefabReplaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString prefabIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> targetMeshGroupNames;
    
    FAvararItemPrefabReplaceData();
};

