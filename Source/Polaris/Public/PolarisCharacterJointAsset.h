#pragma once
#include "CoreMinimal.h"
#include "PolarisCharacterJointAsset.generated.h"

class UPhoenixProportionBinary;
class UPhoenixSkeletonBinary;

USTRUCT(BlueprintType)
struct FPolarisCharacterJointAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPhoenixProportionBinary*> PhoenixProportionBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBeforeBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBinaries2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBeforeBinaries2;
    
    POLARIS_API FPolarisCharacterJointAsset();
};

