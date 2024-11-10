#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDebugCaptureCategory.h"
#include "EPolarisReflectionBrightness.h"
#include "FDebugCaptureFilterList.h"
#include "MannequinMaterialHolder.h"
#include "MaterialCache.h"
#include "PolarisDebugThumbnailAccModeConfig.h"
#include "Templates/SubclassOf.h"
#include "PolarisDebugThumbnailShotActor.generated.h"

class ASphereReflectionCapture;
class UDebugCaptureDataList;
class UMaterial;
class UMaterialInterface;

UCLASS()
class POLARIS_API APolarisDebugThumbnailShotActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* AccPlaceActor;
    
    UPROPERTY()
    FPolarisDebugThumbnailAccModeConfig AccModeConfig;
    
    UPROPERTY()
    TMap<FString, UDebugCaptureDataList*> CameraMapCache;
    
    UPROPERTY()
    TMap<int32, FMannequinMaterialHolder> MaterialInstanceMapForMannequin;
    
    UPROPERTY()
    TMap<int32, FMaterialCache> OldMaterialCache;
    
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> AccPlace;
    
    UPROPERTY(EditAnywhere)
    TMap<EPolarisReflectionBrightness, ASphereReflectionCapture*> ReflectionList;
    
    UPROPERTY(EditAnywhere)
    TMap<EDebugCaptureCategory, FFDebugCaptureFilterList> FilterSet;
    
    APolarisDebugThumbnailShotActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void SyncCamera(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMaskCaptureMode(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLightLevel(const FString& level_name, float offset_height);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetControlModeTextNone();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetControlModeTextCharacter();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetControlModeTextCamera();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCaptureInfo(EDebugCaptureCategory Category, int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResizeCaptureBorder(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    UMaterial* GetScreenShotMaterial();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetParentMaterialName(UMaterialInterface* MaterialInstance);
    
};

