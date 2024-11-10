#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugCaptureData.h"
#include "EDebugCaptureCategory.h"
#include "FDebugCaptureFilterList.h"
#include "DebugCaptureDataList.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UDebugCaptureDataList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Eye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData FaceHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData EyeMake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Cheek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData FacePaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Lips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData FullHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Glasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData FullBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Upper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Extra;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Lower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Shoes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Acc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugCaptureData Suntan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FaceFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HairFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FaceHairFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeMakeFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CheekFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FacePaintFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LipsFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FullHeadFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlassesFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FullBodyFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpperFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExtraFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BottomFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowerFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShoesFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CostumeFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SuntanFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FaceLightHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NormalLightHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowerLightHeightOffset;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> FaceCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> HairCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> EyeCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> FaceHairCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> EyeMakeCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> CheekCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> FacePaintCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> LipsCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> HeadCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> FullHeadCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> GlassesCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> FullBodyCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> UpperCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> ExtraCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> BottomCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> LowerCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> ShoesCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> AccCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FDebugCaptureData> CostumeCameraDatas;
    
    UPROPERTY(EditAnywhere)
    TMap<EDebugCaptureCategory, FFDebugCaptureFilterList> FilterSet;
    
    UDebugCaptureDataList();

};

