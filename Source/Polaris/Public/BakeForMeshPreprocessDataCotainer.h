#pragma once
#include "CoreMinimal.h"
#include "BakeForMeshPreprocessDataCotainer.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct POLARIS_API FBakeForMeshPreprocessDataCotainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* MIDBake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* MIDCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* MIDNormalCalcZAndScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* MIDCombineColorAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, UMaterialInstanceDynamic*> MIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, UMaterialInterface*> OriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTextureRenderTarget2D*> DelayedReleaseRTQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTNormalA;
    
    FBakeForMeshPreprocessDataCotainer();
};

