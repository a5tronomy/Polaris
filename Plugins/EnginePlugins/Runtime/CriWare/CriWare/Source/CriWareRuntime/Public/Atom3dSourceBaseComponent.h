#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Atom3dSourceBaseComponent.generated.h"

class UAtom3dRegion;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtom3dSourceBaseComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultOutputVolumeScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAtom3dRegion* DefaultRegion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsAttenuationDistanceDebugSpheresVisible: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultMinAttenuationDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultMaxAttenuationDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsOutputInteriorPanFieldDebugSpheresVisible: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultSourceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultInteriorDistance;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> DefaultDistanceAisacControls;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> DefaultOutputBasedAzimuthAngleAisacControls;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> DefaultOutputBasedElevationAngleAisacControls;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> DefaultListenerBasedAzimuthAngleAisacControls;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> DefaultListenerBasedElevationAngleAisacControls;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsDebugStringsForDetailsVisible: 1;
    
    UAtom3dSourceBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRegion(UAtom3dRegion* InRegion);
    
};

