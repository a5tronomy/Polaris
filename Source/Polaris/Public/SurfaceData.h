#pragma once
#include "CoreMinimal.h"
#include "SurfaceData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct POLARIS_API FSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* Assign_Detail_AO_Normal_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Detail_AO_Pow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Detail_Normal_Pow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Detail_U;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Detail_V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Metalness_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Metalness_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Roughness_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Assign_Roughness_Min;
    
    FSurfaceData();
};

