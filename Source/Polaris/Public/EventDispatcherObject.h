#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventCancelExArtsEffectParam.h"
#include "EventOnAiuchiParam.h"
#include "EventOnArmorSucceededParam.h"
#include "EventOnChangeAnotherWorldParam.h"
#include "EventOnChangeCharacterColorBeginParam.h"
#include "EventOnChangeCharacterColorEndParam.h"
#include "EventOnChangeCharacterCustomizeBGParam.h"
#include "EventOnChangePostProcessScalarParam.h"
#include "EventOnChangeStageLightParam.h"
#include "EventOnChangeStoryStageLightParam.h"
#include "EventOnChangeSweatWetDirtyRatioParam.h"
#include "EventOnChangeVisiblePersistentLevelParam.h"
#include "EventOnCharacterMeshPartsOffParam.h"
#include "EventOnCharacterMeshPartsOnParam.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnDevilEndEffectParam.h"
#include "EventOnDisableClothBlendParam.h"
#include "EventOnDoubleKOParam.h"
#include "EventOnDownParam.h"
#include "EventOnDramaLightArrayParam.h"
#include "EventOnEnableClothBlendParam.h"
#include "EventOnEvaluteLiveLinkMotionParam.h"
#include "EventOnExArtsBeginParam.h"
#include "EventOnExArtsEndParam.h"
#include "EventOnFloorBreakStageRangeItemResetParam.h"
#include "EventOnFloorHitParam.h"
#include "EventOnFootStepSoundParam.h"
#include "EventOnForceSuntanFlagParam.h"
#include "EventOnForceUpdateActorLocationParam.h"
#include "EventOnFresnelBeginEffectParam.h"
#include "EventOnFresnelEndEffectParam.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnGenericItemEventParam.h"
#include "EventOnGuardDamageParam.h"
#include "EventOnGuardParam.h"
#include "EventOnHeatEffectParam.h"
#include "EventOnHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnItemOnDamagedEventParam.h"
#include "EventOnItemResetParam.h"
#include "EventOnJumpLandingParam.h"
#include "EventOnKOParam.h"
#include "EventOnMissileCancelParam.h"
#include "EventOnMissileClashParam.h"
#include "EventOnMissileExpiredParam.h"
#include "EventOnMissileGuardParam.h"
#include "EventOnMissileHitParam.h"
#include "EventOnMissileRequestParam.h"
#include "EventOnMissileUpdateParam.h"
#include "EventOnMotEventParam.h"
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
#include "EventOnPowerModeBeginParam.h"
#include "EventOnPowerModeEndParam.h"
#include "EventOnPreKOSlowParam.h"
#include "EventOnRadialForceParam.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "EventOnRageArtsPreAttackHitParam.h"
#include "EventOnRageArtsPreAttackMissParam.h"
#include "EventOnRageAttackBeginParam.h"
#include "EventOnRageAttackEndParam.h"
#include "EventOnRageStateChangedParam.h"
#include "EventOnReplayReloadedStageParam.h"
#include "EventOnRequestPostEffectParam.h"
#include "EventOnResetCharacterDynamicBoneParam.h"
#include "EventOnResetPlayerPhysicsParam.h"
#include "EventOnResultStartParam.h"
#include "EventOnRewindParam.h"
#include "EventOnRoundSettledParam.h"
#include "EventOnSetCameraCheckParam.h"
#include "EventOnSetRenderingModeParam.h"
#include "EventOnShowItemOutlineParam.h"
#include "EventOnStageBreakEventParam.h"
#include "EventOnStartedLoadingSublevelsParam.h"
#include "EventOnStopMotionLevelSequenceParam.h"
#include "EventOnThrowDamageParam.h"
#include "EventOnTimeUpParam.h"
#include "EventOnToggleAuraVisibilityParam.h"
#include "EventOnTouchDownParam.h"
#include "EventOnWallBreakParam.h"
#include "EventOnWallHitParam.h"
#include "EventOnWarpBeginEffectParam.h"
#include "EventOnWarpEndEffectParam.h"
#include "EventOnZakoDeathParam.h"
#include "EventOnZoneBeginCutInEndParam.h"
#include "EventOnZoneBeginEffectParam.h"
#include "EventOnZoneBeginParam.h"
#include "EventOnZoneEndEffectParam.h"
#include "EventOnZoneEndParam.h"
#include "EventDispatcherObject.generated.h"

UCLASS(BlueprintType)
class UEventDispatcherObject : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FResyncStageWeather);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneEndEffect, FEventOnZoneEndEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneEnd, FEventOnZoneEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneBeginEffect, FEventOnZoneBeginEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneBeginCutInEnd, FEventOnZoneBeginCutInEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneBegin, FEventOnZoneBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZakoDeath, FEventOnZakoDeathParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarpEndEffect, FEventOnWarpEndEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarpBeginEffect, FEventOnWarpBeginEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWallHit, FEventOnWallHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWallBreak, FEventOnWallBreakParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateVisibility);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTouchDown, FEventOnTouchDownParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleAuraVisibility, FEventOnToggleAuraVisibilityParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeUp, FEventOnTimeUpParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThrowDamage, FEventOnThrowDamageParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStopMotionLevelSequence, FEventOnStopMotionLevelSequenceParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartedLoadingSublevels, FEventOnStartedLoadingSublevelsParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStageResetLater);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStageReset);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStageBreakEvent, FEventOnStageBreakEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowItemOutline, FEventOnShowItemOutlineParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetRenderingMode, FEventOnSetRenderingModeParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetCameraCheck, FEventOnSetCameraCheckParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoundSettled, FEventOnRoundSettledParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRewind, FEventOnRewindParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResultStart, FEventOnResultStartParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResetPlayerPhysics, FEventOnResetPlayerPhysicsParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResetCharacterDynamicBone, FEventOnResetCharacterDynamicBoneParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestPostEffect, FEventOnRequestPostEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplayReloadedStage, FEventOnReplayReloadedStageParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReplayJumpEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageStateChanged, FEventOnRageStateChangedParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageAttackEnd, FEventOnRageAttackEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageAttackBegin, FEventOnRageAttackBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageArtsPreAttackMiss, FEventOnRageArtsPreAttackMissParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageArtsPreAttackHit, FEventOnRageArtsPreAttackHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageArtsEnd, FEventOnRageArtsEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageArtsBegin, FEventOnRageArtsBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRadialForce, FEventOnRadialForceParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreKOSlow, FEventOnPreKOSlowParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPreInitBattle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerModeEnd, FEventOnPowerModeEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerModeBegin, FEventOnPowerModeBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerCrashEnd, FEventOnPowerCrashEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerCrashBegin, FEventOnPowerCrashBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPoisonDamage, FEventOnPoisonDamageParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayMotionLevelSequence, FEventOnPlayMotionLevelSequenceParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerUnEntry, FEventOnPlayerUnEntryParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerMotionShift, FEventOnPlayerMotionShiftParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerEntry, FEventOnPlayerEntryParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDeActivate, FEventOnPlayerDeActivateParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerActivate, FEventOnPlayerActivateParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPetCancel, FEventOnPetCancelParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPetAnimationStart, FEventOnPetAnimationStartParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoticeBombEffectStop, FEventOnNoticeBombEffectStopParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoticeBombEffect, FEventOnNoticeBombEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMotHeadStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMotHeadEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMotEvent, FEventOnMotEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileUpdate, FEventOnMissileUpdateParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileRequest, FEventOnMissileRequestParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileHit, FEventOnMissileHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileGuard, FEventOnMissileGuardParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileExpired, FEventOnMissileExpiredParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileClash, FEventOnMissileClashParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileCancel, FEventOnMissileCancelParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKO, FEventOnKOParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpLanding, FEventOnJumpLandingParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemReset, FEventOnItemResetParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemOnDamagedEvent, FEventOnItemOnDamagedEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitBattleForBPEvent, FEventOnInitBattleParam, InitParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitBattle, FEventOnInitBattleParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHit, FEventOnHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeatEffect, FEventOnHeatEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGuardDamage, FEventOnGuardDamageParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGuard, FEventOnGuardParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGenericItemEvent, FEventOnGenericItemEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGeneralBattleEvent, FEventOnGeneralBattleEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFresnelEndEffect, FEventOnFresnelEndEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFresnelBeginEffect, FEventOnFresnelBeginEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForceUpdateActorLocation, FEventOnForceUpdateActorLocationParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForceSuntanFlag, FEventOnForceSuntanFlagParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFootStepSound, FEventOnFootStepSoundParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloorHit, FEventOnFloorHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloorBreakStageRangeItemReset, FEventOnFloorBreakStageRangeItemResetParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExArtsEnd, FEventOnExArtsEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExArtsBegin, FEventOnExArtsBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEvaluteLiveLinkMotion, FEventOnEvaluteLiveLinkMotionParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnableClothBlend, FEventOnEnableClothBlendParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDramaLight, FEventOnDramaLightArrayParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDown, FEventOnDownParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoubleKO, FEventOnDoubleKOParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisableClothBlend, FEventOnDisableClothBlendParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDevilEndEffect, FEventOnDevilEndEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCriticalHit, FEventOnCriticalHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterMeshPartsOn, FEventOnCharacterMeshPartsOnParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterMeshPartsOff, FEventOnCharacterMeshPartsOffParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeVisiblePersistentLevel, FEventOnChangeVisiblePersistentLevelParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeSweatWetDirtyRatio, FEventOnChangeSweatWetDirtyRatioParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeStoryStageLight, FEventOnChangeStoryStageLightParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeStageLight, FEventOnChangeStageLightParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangePostProcessScalar, FEventOnChangePostProcessScalarParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCharacterCustomizeBG, FEventOnChangeCharacterCustomizeBGParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCharacterColorEnd, FEventOnChangeCharacterColorEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCharacterColorBegin, FEventOnChangeCharacterColorBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeAnotherWorld, FEventOnChangeAnotherWorldParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBattleEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArmorSucceeded, FEventOnArmorSucceededParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAiuchiForBPEvent, FEventOnAiuchiParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAiuchi, FEventOnAiuchiParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCancelExArtsEffect, FEventCancelExArtsEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCallAiuchiPostProcessEffect);
    
    UPROPERTY(BlueprintAssignable)
    FOnPreInitBattle OnPreInitBattleDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnInitBattle OnInitBattleDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnGeneralBattleEvent OnGeneralBattleEventDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnTouchDown OnTouchDownDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnAiuchi OnAiuchiDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCallAiuchiPostProcessEffect CallAiuchiPostProcessEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnArmorSucceeded OnArmorSucceededDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnExArtsBegin OnExArtsBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnExArtsEnd OnExArtsEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCancelExArtsEffect CancelExArtsEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPowerModeBegin OnPowerModeBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPowerModeEnd OnPowerModeEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRageAttackBegin OnRageAttackBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRageAttackEnd OnRageAttackEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPowerCrashBegin OnPowerCrashBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPowerCrashEnd OnPowerCrashEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnZoneBegin OnZoneBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnZoneBeginEffect OnZoneBeginEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnZoneBeginCutInEnd OnZoneBeginCutInEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnZoneEnd OnZoneEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnZoneEndEffect OnZoneEndEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnDevilEndEffect OnDevilEndEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnWarpBeginEffect OnWarpBeginEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnWarpEndEffect OnWarpEndEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFresnelBeginEffect OnFresnelBeginEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFresnelEndEffect OnFresnelEndEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnNoticeBombEffect OnNoticeBombEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnNoticeBombEffectStop OnNoticeBombEffectStopDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnHeatEffect OnHeatEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeCharacterColorBegin OnChangeCharacterColorBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeCharacterColorEnd OnChangeCharacterColorEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRoundSettled OnRoundSettledDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPreKOSlow OnPreKOSlowDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnKO OnKODelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnDoubleKO OnDoubleKODelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnBattleEnd OnBattleEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnTimeUp OnTimeUpDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnJumpLanding OnJumpLandingDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnDown OnDownDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRageStateChanged OnRageStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRewind OnRewindDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnResetPlayerPhysics OnResetPlayerPhysicsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnResetCharacterDynamicBone OnResetCharacterDynamicBoneDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnDisableClothBlend OnDisableClothBlendDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEnableClothBlend OnEnableClothBlendDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRageArtsBegin OnRageArtsBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRageArtsEnd OnRageArtsEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRageArtsPreAttackHit OnRageArtsPreAttackHitDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRageArtsPreAttackMiss OnRageArtsPreAttackMissDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnHit OnHitDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPoisonDamage OnPoisonDamageDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnGuard OnGuardDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCriticalHit OnCriticalHitDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnStageBreakEvent OnStageBreakEventDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnGenericItemEvent OnGenericItemEventDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemOnDamagedEvent OnItemOnDamagedEventDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemReset OnItemResetDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloorBreakStageRangeItemReset OnFloorBreakStageRangeItemResetDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSetRenderingMode OnSetRenderingModeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangePostProcessScalar OnChangePostProcessScalarDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnThrowDamage OnThrowDamageDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnGuardDamage OnGuardDamageDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFootStepSound OnFootStepSoundDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnZakoDeath OnZakoDeathDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FResyncStageWeather ResyncStageWeatherDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnReplayReloadedStage OnReplayReloadedStageDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnReplayJumpEvent OnReplayJumpEventDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissileRequest OnMissileRequestDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissileUpdate OnMissileUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissileHit OnMissileHitDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissileGuard OnMissileGuardDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissileExpired OnMissileExpiredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissileClash OnMissileClashDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissileCancel OnMissileCancelDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMotEvent OnMotEventDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMotHeadStart OnMotHeadStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMotHeadEnd OnMotHeadEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnWallHit OnWallHitDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnWallBreak OnWallBreakDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloorHit OnFloorHitDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateVisibility OnUpdateVisibilityDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerEntry OnPlayerEntryDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerUnEntry OnPlayerUnEntryDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerActivate OnPlayerActivateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerDeActivate OnPlayerDeActivateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnStageReset OnStageResetDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnStageReset OnStageResetLaterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEvaluteLiveLinkMotion OnEvaluteLiveLinkMotionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnForceUpdateActorLocation OnForceUpdateActorLocationDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnForceSuntanFlag OnForceSuntanFlagDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCharacterMeshPartsOn OnCharacterMeshPartsOnDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCharacterMeshPartsOff OnCharacterMeshPartsOffDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeStageLight OnChangeStageLightDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeStoryStageLight OnChangeStoryStageLightDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeAnotherWorld OnChangeAnotherWorldDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeVisiblePersistentLevel OnChangeVisiblePersistentLevelDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeCharacterCustomizeBG OnChangeCharacterCustomizeBGDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnShowItemOutline OnShowItemOutlineDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSetCameraCheck OnSetCameraCheckDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnInitBattleForBPEvent OnInitBattleForBPEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnAiuchiForBPEvent OnAiuchiForBPEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnRadialForce OnRadialForceDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnDramaLight OnDramaLightDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeSweatWetDirtyRatio OnChangeSweatWetDirtyRatioDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnResultStart OnResultStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayMotionLevelSequence OnPlayMotionLevelSequenceDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnStopMotionLevelSequence OnStopMotionLevelSequenceDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerMotionShift OnPlayerMotionShiftDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnStartedLoadingSublevels OnStartedLoadingSublevelsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRequestPostEffect OnRequestPostEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPetAnimationStart OnPetAnimationStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPetCancel OnPetCancelDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnToggleAuraVisibility OnToggleAuraVisibilityDelegate;
    
    UEventDispatcherObject();

    UFUNCTION(BlueprintCallable)
    void OnChangeStageLight(int32 Type, bool Immediate);
    
};

