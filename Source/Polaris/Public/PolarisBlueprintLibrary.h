#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPolarisAntiAliasingMethod.h"
#include "EPolarisCharacterAnimStatus.h"
#include "EPolarisDynamicShadowPreset.h"
#include "EPolarisResolutionUpscaling.h"
#include "EPolarisShadowMaxResolusionPreset.h"
#include "EStageLightType.h"
#include "PolarisBlueprintLibrary.generated.h"

class AActor;
class APawn;
class APolarisBallManager;
class APolarisCharacterManager;
class APolarisDramaManager;
class APolarisEffectManager;
class APolarisMobActor;
class APolarisMobManager;
class APolarisStageManager;
class UAkAudioEvent;
class UEventDispatcherObject;
class UMaterialInterface;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class POLARIS_API UPolarisBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WaitForShaderCompilation();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateDynamicResolutionStatus();
    
    UFUNCTION(BlueprintPure)
    static FVector UECoordToTekkenCoord(const FVector& UECoord, float space_scaling);
    
    UFUNCTION(BlueprintPure)
    static FVector ToUnrealCoord(const FVector& TekkenCoord, float space_scaling);
    
    UFUNCTION(BlueprintPure)
    static bool SkipChangeStageLightTypeFlagAtMotheadEndForStoryMode();
    
    UFUNCTION(BlueprintCallable)
    static void SetWWiseSoundSwitchValue(const FString& _SwitchGroup, const FString& _SwitchValue, AActor* _srcActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetWWiseSoundStateValue(const FString& _StateName, const FString& _StateValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetWWiseSoundRTPCValue(const FString& _RTPCName, float _RtpcValue, AActor* _srcActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetVariableRateShadingEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowMaxResolusionPreset(EPolarisShadowMaxResolusionPreset Preset);
    
    UFUNCTION(BlueprintCallable)
    static void SetResolutionUpscaling(EPolarisResolutionUpscaling upscaling);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceMipLevelsToBeResident(UTexture2D* pTex, float Second);
    
    UFUNCTION(BlueprintCallable)
    static void SetEngineCameraMode(bool bCameraFromEngine);
    
    UFUNCTION(BlueprintCallable)
    static void SetDynamicShadowPreset(EPolarisDynamicShadowPreset Preset);
    
    UFUNCTION(BlueprintCallable)
    static void SetcameraZoomMode(const int32& player_id, const int32& param_a, const int32& param_b, const int32& param_c, const int32& param_d);
    
    UFUNCTION(BlueprintCallable)
    static void SetcameraZoom(const int32& player_id, const int32& param_a, const int32& param_b, const int32& param_c, const int32& param_d);
    
    UFUNCTION(BlueprintCallable)
    static void SetAntiAliasingMethod(EPolarisAntiAliasingMethod Method);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PolarisExecuteConsoleCommand(UObject* WorldContextObject, const FString& ExecCommand, bool bWriteToLog);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayCharacterAnimationStatus(EPolarisCharacterAnimStatus anim_status, int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    static void KeyOnWWiseAudioEvent(UAkAudioEvent* _srcEvent, int32 NoMultiPlayFrame, AActor* _srcActor);
    
    UFUNCTION(BlueprintPure)
    static bool IsZoneDrive();
    
    UFUNCTION(BlueprintCallable)
    static bool IsVectorParameterValueOverriden(UMaterialInterface* pMaterialInterface, const FName& Parameter);
    
    UFUNCTION(BlueprintPure)
    static bool IsVariableRateShadingSupported();
    
    UFUNCTION(BlueprintPure)
    static bool IsVariableRateShadingEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsSwitchedToDemonstrationStage();
    
    UFUNCTION(BlueprintPure)
    static bool IsStoryMultipleCpuMode();
    
    UFUNCTION(BlueprintPure)
    static bool IsStoryMode();
    
    UFUNCTION(BlueprintPure)
    static void IsReplayMode(bool& bReplay, bool& bPreCalculated);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayerVisible(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsMotheadDrama(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsMatchRound();
    
    UFUNCTION(BlueprintPure)
    static bool IsMatchPoint();
    
    UFUNCTION(BlueprintPure)
    static bool IsLowestSpec();
    
    UFUNCTION(BlueprintPure)
    static bool IsFighterWeaponVisible(int32 player_id, int32 flag);
    
    UFUNCTION(BlueprintPure)
    static bool IsFighterPowerUp(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsFighterBeforeAttackingEnd(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsFighterAttackingMot(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsFighterAttacking(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsEnableResolutionUpscaling(EPolarisResolutionUpscaling upscaling);
    
    UFUNCTION(BlueprintPure)
    static bool IsDoingZoneCutIn(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsDoingZone(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsDoingStop();
    
    UFUNCTION(BlueprintPure)
    static bool IsDoingRageAura(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsDoingRageArtsPre(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsDoingRageArtsPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static bool IsDoingRageArts();
    
    UFUNCTION(BlueprintPure)
    static bool IsDisableBattleHUD();
    
    UFUNCTION(BlueprintPure)
    static bool IsBattlePostFilterON();
    
    UFUNCTION(BlueprintPure)
    static bool IsBattleMain();
    
    UFUNCTION(BlueprintCallable)
    static bool IsBackground();
    
    UFUNCTION(BlueprintPure)
    static bool IsAutoResolutionControlEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsActorInActiveWorld(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static int32 GetZoneGuardDamage(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static int32 GetZoneCounter(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static int32 GetYellowBookBattleNo();
    
    UFUNCTION(BlueprintPure)
    static int32 GetYellowBookActNo();
    
    UFUNCTION(BlueprintPure)
    static int32 GetTargetPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static float GetStatUnitRHIRaw();
    
    UFUNCTION(BlueprintPure)
    static float GetStatUnitRenderRaw();
    
    UFUNCTION(BlueprintPure)
    static float GetStatUnitGPURaw();
    
    UFUNCTION(BlueprintPure)
    static float GetStatUnitGameRaw();
    
    UFUNCTION(BlueprintPure)
    static float GetStatUnitFrameTimeRaw();
    
    UFUNCTION(BlueprintPure)
    static float GetStatUnitFrameTimeByDelta(float Delta);
    
    UFUNCTION(BlueprintPure)
    static int32 GetStageRoundCount();
    
    UFUNCTION(BlueprintPure)
    static int32 GetStageModelNo();
    
    UFUNCTION(BlueprintPure)
    static APolarisStageManager* GetStageManager();
    
    UFUNCTION(BlueprintPure)
    static int32 GetSideByPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetsetVectorFightRy2(FVector rot, int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static EPolarisResolutionUpscaling GetResolutionUpscaling();
    
    UFUNCTION(BlueprintPure)
    static bool GetRenderingMovieFlag();
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlayerIDOriginalFromID(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlayerCount();
    
    UFUNCTION(BlueprintCallable)
    static FString GetMotName(const int32& player_id);
    
    UFUNCTION(BlueprintPure)
    static APolarisMobManager* GetMobManager();
    
    UFUNCTION(BlueprintPure)
    static int32 GetKamuiHashDigest(const FString& String);
    
    UFUNCTION(BlueprintPure)
    static float GetGameSpeedTotal();
    
    UFUNCTION(BlueprintPure)
    static float GetFrameSkip();
    
    UFUNCTION(BlueprintPure)
    static float GetFloorHeightByPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetFloorHeight(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FVector GetFighterPosition(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static FQuat GetFighterJointRotateQuat(int32 player_id, const FString& joint_name);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetFighterJointRotateByName(int32 player_id, const FString& joint_name);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetFighterJointRotateByGameBoneId(int32 player_id, int32 game_bone_id);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetFighterJointRotate(int32 player_id, int32 joint_index);
    
    UFUNCTION(BlueprintPure)
    static FVector GetFighterJointPositionByName(int32 player_id, const FString& joint_name);
    
    UFUNCTION(BlueprintPure)
    static FVector GetFighterJointPositionByGameBoneId_Model(int32 player_id, int32 game_bone_id);
    
    UFUNCTION(BlueprintPure)
    static FVector GetFighterJointPositionByGameBoneId(int32 player_id, int32 game_bone_id);
    
    UFUNCTION(BlueprintPure)
    static FVector GetFighterJointPosition(int32 player_id, int32 joint_index);
    
    UFUNCTION(BlueprintPure)
    static int32 GetFighterIDByPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static float GetFighterBodyHitLength(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetFighterBaseRotation(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static FVector GetFighterBasePosition(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static int32 GetFighterAttackingDamageValue(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static int32 GetFighterAttackingBone(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static UEventDispatcherObject* GetEventDispatcherObject();
    
    UFUNCTION(BlueprintPure)
    static APolarisEffectManager* GetEffectManager();
    
    UFUNCTION(BlueprintCallable)
    static float GetDrameLatestMotheadFrame();
    
    UFUNCTION(BlueprintPure)
    static APolarisDramaManager* GetDramaManager();
    
    UFUNCTION(BlueprintPure)
    static EStageLightType GetCurrentStageLightType();
    
    UFUNCTION(BlueprintPure)
    static void GetCurrentBattleMode(bool& bMotheadInterface, bool& bBattle, bool& bCustomize);
    
    UFUNCTION(BlueprintPure)
    static APolarisCharacterManager* GetCharacterManager();
    
    UFUNCTION(BlueprintPure)
    static int32 GetBattleRound();
    
    UFUNCTION(BlueprintPure)
    static APolarisBallManager* GetBallManager();
    
    UFUNCTION(BlueprintPure)
    static void GetApplicationMode(bool& bBuildDevelop, bool& bBuildTest, bool& bBuildShipping, bool& bEditor, bool& bPlaySimulateMode, bool& bPlayInEditor, bool& bNoMenuTab);
    
    UFUNCTION(BlueprintPure)
    static EPolarisAntiAliasingMethod GetAntiAliasingMethod();
    
    UFUNCTION(BlueprintCallable)
    static void ForceLog(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static void DrawToRenderTargetWithDataArray(UTextureRenderTarget2D* dst, const TArray<float>& data256);
    
    UFUNCTION(BlueprintCallable)
    static void DelayGarbageCollection();
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardCopyNewLine(const TArray<FString>& StrArray);
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardCopy(const TArray<FString>& StrArray);
    
    UFUNCTION(BlueprintPure)
    static void CheckMenuMode(int32 inMenuMode, bool& bOnline, bool& bPic, bool& bDec, bool& bMu, bool& bPlayerCustomize, bool& bReplay);
    
    UFUNCTION(BlueprintPure)
    static void CheckMenuItemID(int32 inMenuItemID, bool& bPic, bool& bDec, bool& bMu, bool& bPlayerCustomize, bool& bReplay, bool& bOnline, bool& bOption, bool& bNe, bool& bCom, bool& bPlayData, bool& bStore, bool& bTournament);
    
    UFUNCTION(BlueprintPure)
    static APolarisMobActor* CastToPolarisMobActor(APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    static bool AreAllMipLevelsLoaded(UTexture2D* pTex);
    
    UFUNCTION(BlueprintPure)
    static bool ActivatePhotoCamera();
    
};

