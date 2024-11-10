#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/EngineTypes.h"
#include "FurLodSettings.h"
#include "GFURLOD.h"
#include "GFURTEXTURE.h"
#include "GFurCustomLod.h"
#include "GFurAsset.generated.h"

class UFurSplines;
class UGFurAsset;
class UMaterialInterface;
class UPrimitiveComponent;
class USkeletalMesh;
class UStaticMesh;

UCLASS(BlueprintType)
class POLARIS_API UGFurAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* SkeletalGrowMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* StaticGrowMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFurSplines* FurSplines;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USkeletalMesh*> SkeletalGuideMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UStaticMesh*> StaticGuideMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGFurCustomLod FurPatternTiling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGFurCustomLod ThicknessRootToTipDistribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FFurLodSettings> LODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LODFromParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShellBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FurLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFurLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RemoveFacesWithoutSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PhysicsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ConstantForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxForceTorqueFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReferenceHairBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HairLengthForceUniformity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPhysicsOffsetLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableMorphTargets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float StreamingDistanceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bVisible: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    uint8 bHiddenInGame: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FGFURLOD Lod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FGFURTEXTURE TextureStreaming;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bUseAttachParentBound: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bVisibleInReflectionCaptures: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bVisibleInRealTimeSkyCaptures: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bVisibleInRayTracing: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderInMainPass: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderInDepthPass: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bReceivesDecals: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bOwnerNoSee: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bOnlyOwnerSee: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bTreatAsBackgroundForOcclusion: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bUseAsOccluder: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderCustomDepth: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ERendererStencilMask CustomDepthStencilWriteMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 CustomDepthStencilValue;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TArray<float> CustomPrimitiveData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 TranslucencySortPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float LpvBiasMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float BoundsScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 CastShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EIndirectLightingCacheQuality> IndirectLightingCacheQuality;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ELightmapType LightmapType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDynamicIndirectLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDistanceFieldLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastDynamicShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastStaticShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastVolumetricTranslucentShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastContactShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bSelfShadowOnly: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastFarShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastInsetShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastCinematicShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastHiddenShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastShadowAsTwoSided: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bLightAttachmentsAsGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bExcludeFromLightAttachmentGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bSingleSampleShadowFromStationaryLights: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UGFurAsset();

    UFUNCTION(BlueprintCallable)
    void SetRenderingAndLightingParams(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetGFurItems(const UGFurAsset* GFurAsset, UPrimitiveComponent* GFurComponent, bool isExtra);
    
};

