#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BakeForMeshInnerProcessDataCotainer.generated.h"

class UTexture;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct POLARIS_API FBakeForMeshInnerProcessDataCotainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* TIDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* TBaseColorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* TRMAA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* TBaseColorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* TNormalB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* TRMAB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor VSplitNumberPerChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTRMA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTTempAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTTempDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> IDxxAnisoPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> IDxxAnisotropy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> IDxxEmissiveIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> IDxxWetDarknessCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> IDxxRoughnessMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> IDxxRoughnessMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> IDxxMetalnessMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> IDxxMetalnessMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MasterDirtID;
    
    FBakeForMeshInnerProcessDataCotainer();
};

