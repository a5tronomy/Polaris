#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceMeshDataAsset.generated.h"

class USkeletalMesh;

UCLASS(BlueprintType)
class POLARIS_API UPolarisTraceMeshDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* AnimBlurprintClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString BoneNamePrefix;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BoneNum;
    
    UPolarisTraceMeshDataAsset();

};

