#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "ESupportUEAnimationMode.h"
#include "AbilityItemIdWrapPinStruct.h"
#include "AnimBPType.h"
#include "AssignPerMaterialStruct.h"
#include "BakeForMeshInnerProcessDataCotainer.h"
#include "BakeForMeshPreprocessDataCotainer.h"
#include "BaseMakeItemSetStruct.h"
#include "BodyRegionMeshMap.h"
#include "DependencyChangeParam.h"
#include "DesignAssignStruct.h"
#include "DynamicBoneDataStruct.h"
#include "DynamicBoneParam.h"
#include "EBodySplitType.h"
#include "EMeshBodyRegionType.h"
#include "EMotionLevelSequence.h"
#include "EPolarisBodyTransformState.h"
#include "EPolarisKatanaVisibility.h"
#include "EPolarisTracePartsId.h"
#include "ESkinType.h"
#include "EventOnArmorSucceededParam.h"
#include "EventOnChangeCharacterColorBeginParam.h"
#include "EventOnChangeCharacterColorEndParam.h"
#include "EventOnChangeCharacterSelectSeqeunceParam.h"
#include "EventOnChangeSweatWetDirtyRatioParam.h"
#include "EventOnCharacterMeshPartsOffParam.h"
#include "EventOnCharacterMeshPartsOnParam.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnDevilEndEffectParam.h"
#include "EventOnDownParam.h"
#include "EventOnEvaluteLiveLinkMotionParam.h"
#include "EventOnFloorBreakStageRangeItemResetParam.h"
#include "EventOnForceSuntanFlagParam.h"
#include "EventOnForceUpdateActorLocationParam.h"
#include "EventOnFresnelBeginEffectParam.h"
#include "EventOnFresnelEndEffectParam.h"
#include "EventOnGenericItemEventParam.h"
#include "EventOnGuardDamageParam.h"
#include "EventOnHeatEffectParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnItemOnDamagedEventParam.h"
#include "EventOnKOParam.h"
#include "EventOnNoticeBombEffectParam.h"
#include "EventOnNoticeBombEffectStopParam.h"
#include "EventOnPetAnimationStartParam.h"
#include "EventOnPetCancelParam.h"
#include "EventOnPlayMotionLevelSequenceParam.h"
#include "EventOnPlayerActivateParam.h"
#include "EventOnPlayerDeActivateParam.h"
#include "EventOnPlayerEntryParam.h"
#include "EventOnPlayerMotionShiftParam.h"
#include "EventOnPlayerUnEntryParam.h"
#include "EventOnPoisonDamageParam.h"
#include "EventOnPowerCrashBeginParam.h"
#include "EventOnPowerCrashEndParam.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "EventOnRageArtsPreAttackHitParam.h"
#include "EventOnRageAttackBeginParam.h"
#include "EventOnRageAttackEndParam.h"
#include "EventOnRageStateChangedParam.h"
#include "EventOnResetCharacterDynamicBoneParam.h"
#include "EventOnResetPlayerPhysicsParam.h"
#include "EventOnSetCameraCheckParam.h"
#include "EventOnStopMotionLevelSequenceParam.h"
#include "EventOnWarpBeginEffectParam.h"
#include "EventOnWarpEndEffectParam.h"
#include "EventOnZoneBeginCutInEndParam.h"
#include "EventOnZoneBeginEffectParam.h"
#include "EventOnZoneBeginParam.h"
#include "EventOnZoneEndEffectParam.h"
#include "EventOnZoneEndParam.h"
#include "ItemActorHolder.h"
#include "ItemPositionKey.h"
#include "ItemPositionWrapPinStruct.h"
#include "MakeBakeMaterialInstanceDynamicContainer.h"
#include "MakeBakeRenderingTargetsContainer.h"
#include "MaterialOverrideParam.h"
#include "PolarisCharacterJointAsset.h"
#include "PolarisCharacterSweatControlParam.h"
#include "PolarisLightingChannels.h"
#include "SESTBakeData.h"
#include "SkeletalMeshMergeParams.h"
#include "SlaveMeshSetStruct.h"
#include "Templates/SubclassOf.h"
#include "WeaponBoneName.h"
#include "PolarisCharacterActor.generated.h"

class APolarisCharacterEffectManager;
class APolarisCharacterMissile;
class APolarisDemoCharacterActor;
class APolarisItemBaseActor;
class UBaseEyeItem;
class UBaseSESTItem;
class UCapsuleComponent;
class UCatwalkClothCollisionAsset;
class UCatwalkClothComponentBase;
class UCatwalkClothOverride;
class UChildActorComponent;
class UCustomizeSet;
class UDynamicBoneParamAsset;
class UGFurAsset;
class UGFurComponent;
class UItemOffsetSlotDataAsset;
class UItemPrefab;
class UJiggleParamAsset;
class ULevelSequence;
class ULevelSequencePlayer;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMeshComponent;
class UMissileManagerComponent;
class UNiagaraComponent;
class UObject;
class UParentConstraintBinary;
class UPhoenixProportionBinary;
class UPhoenixSkeletonBinary;
class UPhysicsAsset;
class UPolarisCharacterAnimInstance;
class UPolarisCharacterUniqueComponent;
class UPolarisMasterSkeletalMeshComponent;
class UPolarisTraceComponent;
class UPolarisUMGRageArts;
class UPolarisWrinkleComponent;
class UPrimitiveComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkeleton;
class USkeletonMirrorAsset;
class USkinnedMeshComponent;
class UTextureRenderTarget2D;
class UWazaManagerComponent;

UCLASS()
class POLARIS_API APolarisCharacterActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCharacterSelectSequence, FEventOnChangeCharacterSelectSeqeunceParam, Param);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSkeletalMeshMergeParams MeshMergeParameters;
    
    UPROPERTY()
    USkeletalMesh* MergedMesh_tempolary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBakeForMeshPreprocessDataCotainer mMainMeshContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBakeForMeshPreprocessDataCotainer mSubMeshContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBakeForMeshInnerProcessDataCotainer mInnerDataContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMakeBakeMaterialInstanceDynamicContainer mMainMIDContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMakeBakeRenderingTargetsContainer mMainRTContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMakeBakeMaterialInstanceDynamicContainer mSubMIDContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMakeBakeRenderingTargetsContainer mSubRTContainer;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMaterialInterface*> mSESTOriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PredictBakeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BakeCostThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ControlLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ControlVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BasePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseRY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FacingDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerMyGameDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerFrameSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerMotionFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPolarisCharacterAnimInstance> UseBattleAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPolarisCharacterAnimInstance> UseWaitAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESupportUEAnimationMode SupportUEAnimationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeleton* UseSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, UMaterialParameterCollection*> MaterialParameterCollections;
    
    UPROPERTY(EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonBinaries;
    
    UPROPERTY(EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonBinariesItem;
    
    UPROPERTY(EditAnywhere)
    TArray<UPhoenixProportionBinary*> PhoenixProportionBinaries;
    
    UPROPERTY(EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBinaries;
    
    UPROPERTY(EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBeforeBinaries;
    
    UPROPERTY(EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBinaries2;
    
    UPROPERTY(EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBeforeBinaries2;
    
    UPROPERTY(EditAnywhere)
    TArray<FDynamicBoneDataStruct> PhoenixDynamicBoneBinaries;
    
    UPROPERTY(EditAnywhere)
    UDynamicBoneParamAsset* DynamicBoneParamAsset;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FDynamicBoneParam> DynamicBoneParams;
    
    UPROPERTY(EditAnywhere)
    TArray<UParentConstraintBinary*> ParentConstraintBinaries;
    
    UPROPERTY(EditAnywhere)
    USkeletonMirrorAsset* SkeletonMirrorAsset;
    
    UPROPERTY(EditAnywhere)
    UJiggleParamAsset* JiggleParamAsset;
    
    UPROPERTY(EditAnywhere)
    bool JointGenderMatching;
    
    UPROPERTY(EditAnywhere)
    FPolarisCharacterJointAsset JointMaleMaleAsset;
    
    UPROPERTY(EditAnywhere)
    FPolarisCharacterJointAsset JointMaleFemaleAsset;
    
    UPROPERTY(EditAnywhere)
    FPolarisCharacterJointAsset JointFemaleMaleAsset;
    
    UPROPERTY(EditAnywhere)
    FPolarisCharacterJointAsset JointFemaleFemaleAsset;
    
    UPROPERTY(EditAnywhere)
    bool IsDisableMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float JiggleEnvelope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPauseDynamics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPauseDynamicsForSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ActorVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPolarisWrinkleComponent* WrinkleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APolarisCharacterEffectManager> UseCharacterEffectManagerBP;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, TWeakObjectPtr<UObject>> DramaSpawnableActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<FItemPositionKey, UItemPrefab*> SourceItemPrefabMap;
    
    UPROPERTY()
    bool isAccessoryShifted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FItemPositionKey, FItemActorHolder> ItemActorHolders;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, APolarisItemBaseActor*> ExtraItemActors;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCapsuleComponent* CapsuleComponent2;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCapsuleComponent* CameraCheck;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UCapsuleComponent*> AdditionalCapsuleComponentArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoundsRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoundsHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPolarisMasterSkeletalMeshComponent* MasterMesh;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FSlaveMeshSetStruct> SlaveMeshComponentSet;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FSlaveMeshSetStruct> AccSlaveMeshComponentSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UPolarisCharacterUniqueComponent*> CharacterUniqueComponents;
    
    UPROPERTY()
    TArray<FDependencyChangeParam> DependencyChangeParamArray;
    
    UPROPERTY()
    TMap<FItemPositionKey, FItemPositionKey> ChangeDependencyAffectedPosMap;
    
    UPROPERTY(BlueprintReadWrite)
    ESkinType SkinType;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsSuntan;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor OverrideTintColorCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TintColorOverlaySuntanRatio;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    TMap<FString, UMaterialInterface*> CharacterSkinMaterialMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    TArray<FMaterialOverrideParam> MaterialOverrideParamArray;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UMissileManagerComponent* MissileManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UWazaManagerComponent* WazaManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaitAnimLocation1p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaitAnimLocation2p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator WaitAnimRotation1p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator WaitAnimRotation2p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaitAnimLocationCustomizeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator WaitAnimRotationCustomizeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> AnimEntrySeq_CS_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> AnimEntrySeq_CS_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> AnimDecisionSeq_CS_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> AnimDecisionSeq_CS_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> AnimStandingSeq_CC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> AnimTPoseSeq_CC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> AnimKamaeSeq_CC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* AnimBake_CC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FacialBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMotionLevelSequence, ULevelSequence*> MotionLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> MuscleAnimPartLevelSequence_LeftUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> MuscleAnimPartLevelSequence_RightUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> MuscleAnimPartLevelSequence_LeftLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> MuscleAnimPartLevelSequence_RightLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> MuscleAnimPartCmnLevelSequences;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsCustomizeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 DynamicBoneNumResetSteps;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsEnableClothSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool IsForceDisableClothSimulation;
    
    UPROPERTY(VisibleAnywhere)
    FName LastClothVariationName;
    
    UPROPERTY(VisibleAnywhere)
    FName LastCollisionVariationName;
    
    UPROPERTY(VisibleAnywhere)
    FName ClothRootMotionBone;
    
    UPROPERTY(VisibleAnywhere)
    bool ForceClothNormalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CwcTimeDilationForSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 CwcNumStepsToBlendFromBindPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SweatBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisCharacterSweatControlParam SweatControlParam;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Wetness;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float DirtyBlend;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FLinearColor DirtColor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsEnableSweatDirt;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsEnableFresnel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsEnableFresnelInCustomizeChange;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    bool IsUseAutomaticMPCSetting;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    FLinearColor SkinTintColorOverlay_Automatic;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    FLinearColor FlushedSkinMulColor_Automatic;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsRebakeEnable;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    bool IsUseSequenceWrinkleIntensities;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    float SequenceWrinkleIntensity01R;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    float SequenceWrinkleIntensity02G;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    float SequenceWrinkleIntensity03B;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    float SequenceWrinkleIntensity04C;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    float SequenceWrinkleIntensity05M;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    float SequenceWrinkleIntensity06Y;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    bool IsUseSequenceScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    FString SequenceScalarParameter0Path;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    float SequenceScalarParameter0Value;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    FString SequenceScalarParameter1Path;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    float SequenceScalarParameter1Value;
    
private:
    UPROPERTY()
    TArray<UMaterialInterface*> SequenceScalarParameterMaterials;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnChangeCharacterSelectSequence OnChangeCharacterSelectSequenceDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBodySplitType BodySplitType;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<int32> WorkParamIArray;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<float> WorkParamFArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UItemOffsetSlotDataAsset* ItemOffsetSlotData;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsSkipOffsetImpl;
    
    UPROPERTY(BlueprintReadWrite)
    UPhysicsAsset* OptionalPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPolarisUMGRageArts> RageArtsUIAsset;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPolarisUMGRageArts* RageArtsUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* BattleStartCommonOverride_ReversalWin2;
    
private:
    UPROPERTY(Instanced)
    TMap<int32, UMeshComponent*> MntBurnierMeshMap;
    
public:
    UPROPERTY()
    TMap<EMeshBodyRegionType, FBodyRegionMeshMap> BodyRegionMeshMap;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UChildActorComponent* SoundPosActor_Head;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UChildActorComponent* SoundPosActor_Trans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isDemo;
    
    APolarisCharacterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMaterialParameters(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    APolarisCharacterMissile* SpawnMissileRequestFromTag(const FName& Tag, int32 MissileHandle, int32 InstanceIndex, FVector SpawnLocation, FRotator SpawnRotation);
    
    UFUNCTION(BlueprintCallable)
    void SlaveMeshSetting(UMeshComponent* _comp, UItemPrefab* _source_ip, bool _isAttachMasterMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetWorkParamIForDrama(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMeshVisibleAll(int32 vis_flag, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMeshVisible(int32 Type, bool IsOn, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleRightKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleLeftKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetUpSkin(ESkinType _skintype);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletonToMeshMergeParameters(USkeleton* Skeleton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPetPos(FTransform Location, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPetExtraParam(int32 no, int32 State, float Param, int32 Type, int32 curve_type, int32 target_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPetAnimFrameF(float frame, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPetAnimFrame(int32 frame, int32 no);
    
    UFUNCTION(BlueprintCallable)
    void SetNumStepsToSettleAfterReset(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetNumStepsToBlendFromBindPose(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetMirrorData();
    
    UFUNCTION(BlueprintCallable)
    void SetMirror(bool bMirror);
    
    UFUNCTION(BlueprintCallable)
    void SetJiggleEnvelope(float Envelope);
    
    UFUNCTION(BlueprintCallable)
    void SetForceVisibleMntParts(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceState(int32 Type, float param1);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicBoneNumResetSteps(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicBoneGoalStrengthScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicBoneAirResistance(float airResistance);
    
    UFUNCTION(BlueprintCallable)
    void SetBustDynamicBoneGoalStrength(float GoalStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyTransform(EPolarisBodyTransformState State, bool isForce, bool IsAlways);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentCollisionForPos(FItemPositionWrapPinStruct _ItemPos, int32 _AccNum, int32 _DepNum, UCatwalkClothCollisionAsset* _InAttachmentCollision, USkinnedMeshComponent* _InAttachedPoseComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveExtraItemActorFromSlotName(const FName& SlotName, bool IsActive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RestoreMaterial(int32 _ItemPos, int32 _AccNum, UMeshComponent* SourceMeshComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetMPC(int32 PlayerNo);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamics();
    
    UFUNCTION(BlueprintCallable)
    void ResetCloth();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReleaseBakeTmpData(UItemPrefab* SourceItemPrefab, const TArray<UMeshComponent*>& SourceMeshCompArray, bool NewIsDebug);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReBakeInitialize(int32 _ItemPos, int32 _AccNum, UItemPrefab* _SourceItemPrefab);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZoneEndEffect(FEventOnZoneEndEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZoneEnd(FEventOnZoneEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZoneBeginEffect(FEventOnZoneBeginEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onZoneBeginCutInEnd(FEventOnZoneBeginCutInEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZoneBegin(FEventOnZoneBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWarpEndEffect(FEventOnWarpEndEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWarpBeginEffect(FEventOnWarpBeginEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSweatAnimation(float DeltaTime, float StopSweat_A_L, float StopSweat_B_L, float StopSweat_A_R, float StopSweat_B_R);
    
    UFUNCTION()
    void OnStopMotionLevelSequence(FEventOnStopMotionLevelSequenceParam Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnAfter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetCameraCheck(FEventOnSetCameraCheckParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetPlayerPhysics(FEventOnResetPlayerPhysicsParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetCharacterDynamicBone(FEventOnResetCharacterDynamicBoneParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReloadItemStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReloadItemEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageStateChanged(FEventOnRageStateChangedParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageAttackEnd(FEventOnRageAttackEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageAttackBegin(FEventOnRageAttackBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRageArtsPreAttackHit(FEventOnRageArtsPreAttackHitParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageArtsEnd(FEventOnRageArtsEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageArtsBegin(FEventOnRageArtsBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreInitBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPowerCrashEnd(FEventOnPowerCrashEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPowerCrashBegin(FEventOnPowerCrashBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPoisonDamage(FEventOnPoisonDamageParam Param);
    
    UFUNCTION()
    void OnPlayMotionLevelSequence(FEventOnPlayMotionLevelSequenceParam Param);
    
    UFUNCTION()
    void OnPlayerUnEntry(FEventOnPlayerUnEntryParam Param);
    
    UFUNCTION()
    void OnPlayerMotionShift(FEventOnPlayerMotionShiftParam Param);
    
    UFUNCTION()
    void OnPlayerEntry(FEventOnPlayerEntryParam Param);
    
    UFUNCTION()
    void OnPlayerDeActivate(FEventOnPlayerDeActivateParam Param);
    
    UFUNCTION()
    void OnPlayerActivate(FEventOnPlayerActivateParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPetCancel(FEventOnPetCancelParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPetAnimationStart(FEventOnPetAnimationStartParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNoticeBombEffectStop(FEventOnNoticeBombEffectStopParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNoticeBombEffect(FEventOnNoticeBombEffectParam Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMeshSettingCompletedPerMesh(int32 Pos, int32 AccNum, bool NewIsDebug);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMeshSettingCompleted(bool NewIsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoopPointFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKO(FEventOnKOParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemOnDamagedEvent(FEventOnItemOnDamagedEventParam Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemCreateCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattleReset(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeatEffect(FEventOnHeatEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGuardDamage(FEventOnGuardDamageParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGenericItemEvent(FEventOnGenericItemEventParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFresnelEndEffect(FEventOnFresnelEndEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFresnelBeginEffect(FEventOnFresnelBeginEffectParam Param);
    
    UFUNCTION()
    void OnForceUpdateActorLocation(FEventOnForceUpdateActorLocationParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSuntanFlag(FEventOnForceSuntanFlagParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFloorBreakStageRangeItemReset(FEventOnFloorBreakStageRangeItemResetParam Param);
    
    UFUNCTION()
    void OnEvaluteLiveLinkMotion(FEventOnEvaluteLiveLinkMotionParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndOverlapCameraCheck(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndDecideAnimationFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDown(FEventOnDownParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDevilEndEffect(FEventOnDevilEndEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterMeshPartsOn(FEventOnCharacterMeshPartsOnParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterMeshPartsOff(FEventOnCharacterMeshPartsOffParam Param);
    
    UFUNCTION()
    void OnChangeSweatWetDirtyRatio(FEventOnChangeSweatWetDirtyRatioParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeCharacterColorEnd(FEventOnChangeCharacterColorEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeCharacterColorBegin(FEventOnChangeCharacterColorBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginOverlapCameraCheck(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBakeCompletedPerMesh(int32 Pos, int32 AccNum, bool NewIsDebug);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBakeCompleted(bool NewIsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onArmorSucceeded(FEventOnArmorSucceededParam Param);
    
    UFUNCTION(BlueprintCallable)
    void MeshPartsOnFromSequencer(int32 mesh_num, ULevelSequencePlayer* SourcePlayer);
    
    UFUNCTION(BlueprintCallable)
    void MeshPartsOffFromSequencer(int32 mesh_num, ULevelSequencePlayer* SourcePlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadCustomizeSetForDemo();
    
    UFUNCTION(BlueprintPure)
    bool IsPracticeDeku();
    
    UFUNCTION(BlueprintPure)
    bool IsMotheadEnable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExtraItemPos(int32 _Pos) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipHoodRemoveItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitLoadOldDemoActorForDemo(APolarisDemoCharacterActor* _SourceOldDemoCharacterActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitLoadCustomizeSetForDemo(UCustomizeSet* _SourceCustomizeSet, const TArray<UItemPrefab*>& _SourceItemPrefabArray);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeComponentsForBP(UItemPrefab* source_ip, int32 Pos, int32 AccNum, int32 DepNum, UCatwalkClothCollisionAsset* cloth_collision, UCatwalkClothCollisionAsset* cloth_collision_attachment, UCatwalkClothOverride* cloth_override, const TArray<UGFurAsset*>& GFurAssetArray, USkeletalMeshComponent* SourceSkeletalMeshComp, bool IsInitializeVisibility, AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    FWeaponBoneName GetWeaponBoneName(EPolarisTracePartsId parts_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    UPolarisTraceComponent* GetTraceComponent();
    
    UFUNCTION(BlueprintPure)
    void GetSlaveMeshSetStruct2(FSlaveMeshSetStruct& InStruct, FItemPositionWrapPinStruct ItemPos, int32 acc_num) const;
    
    UFUNCTION(BlueprintPure)
    void GetSlaveMeshSetStruct(FSlaveMeshSetStruct& InStruct, FItemPositionWrapPinStruct ItemPos) const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetSlaveMeshComponent(FItemPositionWrapPinStruct ItemPos) const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetSlaveDependencyMeshComponent(FItemPositionWrapPinStruct ItemPos, int32 Num) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetResourcesNum();
    
    UFUNCTION(BlueprintPure)
    float GetPlayerControlYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPetAnimMaxFrame(int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPetAnimFrame(int32 no);
    
    UFUNCTION(BlueprintPure)
    int32 GetPetAnimationNo(int32 anim_no);
    
    UFUNCTION(BlueprintPure)
    int32 GetPetAnimationKinds(int32 anim_no);
    
    UFUNCTION(BlueprintCallable)
    APolarisCharacterMissile* GetMissileFromTag(const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    APolarisCharacterMissile* GetMissileFromMissileInstanceIndex(int32 _index);
    
    UFUNCTION(BlueprintPure)
    bool GetMirror() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemPositionFromShortPosNameForBP(const FString& _shortName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemPositionFromIPForBP(TSoftObjectPtr<UItemPrefab> _ip);
    
    UFUNCTION(BlueprintPure)
    void GetItemActorHolder(int32 Pos, int32 acc_num, FItemActorHolder& item_actor_holder) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHPPercentage();
    
private:
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetFaceSkinMaterial();
    
public:
    UFUNCTION(BlueprintPure)
    APolarisItemBaseActor* GetExpItemActorFromSlotName(const FName& SlotName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FItemPositionKey> GetEnableSlaveMeshPosition() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TMap<int32, UItemPrefab*> GetDebugMeshItemPrefabMap();
    
    UFUNCTION(BlueprintPure)
    AnimBPType GetCurrentAnimBPType() const;
    
    UFUNCTION(BlueprintPure)
    UPolarisCharacterUniqueComponent* GetCharacterUniqueComponent(int32 CompNum) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetBodyRegionMeshs(EMeshBodyRegionType bodyRegion);
    
    UFUNCTION(BlueprintCallable)
    TArray<UNiagaraComponent*> GetAuraCharacterItems();
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetAllSlaveMeshComponent(FItemPositionWrapPinStruct ItemPos, int32 acc_num);
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetAllMeshComponent();
    
    UFUNCTION(BlueprintPure)
    void GetAllGFurComponentForBP(TArray<UGFurComponent*>& _GFurComponentArray);
    
    UFUNCTION(BlueprintPure)
    void GetAllCatwalkClothComponentForBP(TArray<UCatwalkClothComponentBase*>& _ClothComponentArray);
    
    UFUNCTION(BlueprintPure)
    void GetAccSlaveMeshSetStruct(FSlaveMeshSetStruct& InStruct, int32 acc_num) const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetAccSlaveMeshComponent(int32 acc_num) const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetAccSlaveDependencyMeshComponent(int32 acc_num, int32 Num) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateHairColor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugUpdateWetSweatDirt();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleRestoreProcess(int32 ItemPos, int32 restoreNo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleClearProcess();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeProcess(int32 ItemPos, int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakePreProcessPerMaterial(int32 ItemPos, bool DependencyMesh, int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData, int32 materialIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakePreProcess(int32 ItemPos, int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakePostProcessPerMaterial(int32 materialIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakePostProcess();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCSBakeProcessPerMaterial(int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData, int32 materialIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCSBakeProcess(int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCaptureUnwrapWPProcessPerMaterial(int32 ItemPos, bool DependencyMesh, int32 materialIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCaptureUnwrapWPProcess(int32 ItemPos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCaptureUnwrapWNProcessPerMaterial(int32 ItemPos, bool DependencyMesh, int32 materialIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCaptureUnwrapWNProcess(int32 ItemPos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBakeRestoreProcess(int32 ItemPos, bool DependencyMesh);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateSESTBake(int32 ItemPos, const TArray<FSESTBakeData>& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateMakeForSkeletalMeshSingleSCMProcess(const FMakeBakeMaterialInstanceDynamicContainer& midContainer, const FMakeBakeRenderingTargetsContainer& rtContainer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateMakeForSkeletalMeshSingleRTsCreateProcess(const FMakeBakeMaterialInstanceDynamicContainer& midContainer, const UMaterialInterface* SourceMeshMaterial, int32 materialIndex, UPARAM(Ref) FMakeBakeRenderingTargetsContainer& rtContainer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateMakeForSkeletalMeshSingleMIDsCreateProcess(FMakeBakeMaterialInstanceDynamicContainer& midContainer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateMakeForSkeletalMeshSingleBakeProcess(const FBaseMakeItemSetStruct& SourceBMI, UPARAM(Ref) FMakeBakeMaterialInstanceDynamicContainer& midContainer, UPARAM(Ref) FMakeBakeRenderingTargetsContainer& rtContainer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateMakeForSkeletalMesh(USkeletalMeshComponent* SourceSkeletalMeshComp, const TArray<FBaseMakeItemSetStruct>& SourceBMISetArray);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateHairForMesh(UItemPrefab* SourceItemPrefab, UMeshComponent* HairMeshComp, const TArray<UMeshComponent*>& FaceMeshCompArray);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateEyeForSkeletalMesh(int32 EyeNum, UBaseEyeItem* SourceBaseEyeItem, USkeletalMeshComponent* SourceSkeletalMeshComp);
    
    UFUNCTION(BlueprintCallable)
    void CreateBodyForSkeletalMesh(USkeletalMesh* msl_mesh, USkeletalMesh* prp_mesh, USkeletalMeshComponent* SourceSkeletalMeshComp, int32 Pos, int32 PropotionType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeSuntanSingle(UMeshComponent* SourceMeshComp, UMaterialInterface* SourceMeshMaterial, int32 ItemPos, int32 AccNum, bool NewIsSuntan);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeSuntan(UMeshComponent* SourceMeshComp, int32 ItemPos, int32 AccNum, bool NewIsSuntan);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMeshWithSEST(UItemPrefab* SourceItemPrefab, UMeshComponent* SourceMeshComp, UMeshComponent* ParentMeshComp, const TArray<FSESTBakeData>& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, int32 ItemPos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMeshPreProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UItemPrefab* SourceItemPrefab, UMeshComponent* SourceMeshComp, UMeshComponent* ParentMeshComp, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMeshPostProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UItemPrefab* SourceItemPrefab, UMeshComponent* SourceMeshComp, UMeshComponent* ParentMeshComp, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMeshCreateSpecialMaterialProcess(UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, UPARAM(Ref) FAssignPerMaterialStruct& AssignPerMaterial, int32 AssignPerMaterialNo, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMeshCreateGFurProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, UPARAM(Ref) FAssignPerMaterialStruct& AssignPerMaterial, int32 AssignPerMaterialNo, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMeshBakeProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, int32 midNo, UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMeshBakeInnerPreProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, FBakeForMeshInnerProcessDataCotainer& innerDataContainer, int32 midNo, UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, int32 AssignPerMaterialNo, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMeshBakeInnerPostProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UPARAM(Ref) FBakeForMeshInnerProcessDataCotainer& innerDataContainer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMeshBakeInnerMainProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UPARAM(Ref) FBakeForMeshInnerProcessDataCotainer& innerDataContainer, int32 midNo, UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, int32 AssignPerMaterialNo, int32 DesignAssignArrayIndex, const FDesignAssignStruct& DesignAssignStruct, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBakeForMesh(UItemPrefab* SourceItemPrefab, UMeshComponent* SourceMeshComp, UMeshComponent* ParentMeshComp, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintPure)
    FAbilityItemIdWrapPinStruct CreateAbilityItemIdWrapPinStruct(FAbilityItemIdWrapPinStruct _Pin) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearSkinMaterialRefsPosBP(int32 _Pos, int32 acc_num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearSkinMaterialRefsBP();
    
    UFUNCTION(BlueprintCallable)
    void ClearMIDParameters(UMaterialInstanceDynamic* SourceMID);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllSlaveMesh();
    
    UFUNCTION(BlueprintPure)
    bool CheckReceivePlayerEvent(int32 player_id) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeLightingChannels(FPolarisLightingChannels lighting_channels);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDynamicBoneParameters(FName VariationName, bool IsInitialize);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCollisionParameters(FName VariationName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeClothParameters(FName VariationName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBodyRegionMeshVisibility(EMeshBodyRegionType bodyRegion, bool IsVisible, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void CancelMissileRequestFromTag(const FName& Tag, bool IsDestory);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CallReleaseTemporaryRenderTargetFromTextureName(const TArray<FString>& _TexNameArray);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CallReleaseTemporaryRenderTargetAll();
    
    UFUNCTION(BlueprintPure)
    void CalculateOffsetProcessForBP_ReOffset(UItemPrefab* source_ip, FTransform& outTransform, FName& outBoneName) const;
    
    UFUNCTION(BlueprintCallable)
    void CalcSweatAnimation(float& StopSweat_A_L, float& StopSweat_B_L, float& StopSweat_A_R, float& StopSweat_B_R);
    
    UFUNCTION(BlueprintCallable)
    void ApplySequenceWrinkleIntensities(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void AddGFurComponent(int32 _Pos, int32 _AccNum, int32 _DepNum, UGFurComponent* _GFurComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddCatwalkClothComponent(int32 _Pos, int32 _AccNum, int32 _DepNum, UCatwalkClothComponentBase* _ClothComponent);
    
};

