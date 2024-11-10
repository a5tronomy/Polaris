#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothExternalMeshBindInfo.h"
#include "MergedMeshOriginalInfo.h"
#include "CatwalkClothVariation.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FCatwalkClothVariation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY()
    TArray<FCatwalkClothExternalMeshBindInfo> ExternalMeshBindInfos;
    
    UPROPERTY()
    TMap<FString, int32> DriveMeshNameToClothIndexMap;
    
    UPROPERTY()
    TMap<TSoftObjectPtr<USkeletalMesh>, FMergedMeshOriginalInfo> OriginalMergedMeshes;
    
    CATWALKCLOTH_API FCatwalkClothVariation();
};

