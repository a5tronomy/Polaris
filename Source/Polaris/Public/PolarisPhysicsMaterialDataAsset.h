#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EGroundAttribute_DirtColor.h"
#include "PhysicsMaterialDirt.h"
#include "PhysicsMaterialDown.h"
#include "PhysicsMaterialStep.h"
#include "PolarisPhysicsMaterialDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisPhysicsMaterialDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 SurfaceTypes;
    
    UPROPERTY(EditAnywhere)
    int64 CopyUpSurfaceTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FPhysicsMaterialDown> PhysicsMaterialDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FPhysicsMaterialStep> PhysicsMaterialStep;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FPhysicsMaterialDirt> PhysicsMaterialDirt;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> PhysicsMaterialSoundName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGroundAttribute_DirtColor> DefaultDirtColor;
    
    UPROPERTY(EditAnywhere)
    float MaxDirtyRaito;
    
    UPROPERTY(EditAnywhere)
    float FootShadowAlpha;
    
    UPROPERTY(EditAnywhere)
    FVector FootShadowScale;
    
    UPolarisPhysicsMaterialDataAsset();

};

