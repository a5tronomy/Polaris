#include "PolarisBlueprintLibrary.h"

UPolarisBlueprintLibrary::UPolarisBlueprintLibrary() {
}

bool UPolarisBlueprintLibrary::WaitForShaderCompilation() {
    return false;
}

void UPolarisBlueprintLibrary::UpdateDynamicResolutionStatus() {
}

FVector UPolarisBlueprintLibrary::UECoordToTekkenCoord(const FVector& UECoord, float space_scaling) {
    return FVector{};
}

FVector UPolarisBlueprintLibrary::ToUnrealCoord(const FVector& TekkenCoord, float space_scaling) {
    return FVector{};
}

bool UPolarisBlueprintLibrary::SkipChangeStageLightTypeFlagAtMotheadEndForStoryMode() {
    return false;
}

void UPolarisBlueprintLibrary::SetWWiseSoundSwitchValue(const FString& _SwitchGroup, const FString& _SwitchValue, AActor* _srcActor) {
}

void UPolarisBlueprintLibrary::SetWWiseSoundStateValue(const FString& _StateName, const FString& _StateValue) {
}

void UPolarisBlueprintLibrary::SetWWiseSoundRTPCValue(const FString& _RTPCName, float _RtpcValue, AActor* _srcActor) {
}

void UPolarisBlueprintLibrary::SetVariableRateShadingEnabled(bool Enabled) {
}

void UPolarisBlueprintLibrary::SetShadowMaxResolusionPreset(EPolarisShadowMaxResolusionPreset Preset) {
}

void UPolarisBlueprintLibrary::SetResolutionUpscaling(EPolarisResolutionUpscaling upscaling) {
}

void UPolarisBlueprintLibrary::SetForceMipLevelsToBeResident(UTexture2D* pTex, float Second) {
}

void UPolarisBlueprintLibrary::SetEngineCameraMode(bool bCameraFromEngine) {
}

void UPolarisBlueprintLibrary::SetDynamicShadowPreset(EPolarisDynamicShadowPreset Preset) {
}

void UPolarisBlueprintLibrary::SetcameraZoomMode(const int32& player_id, const int32& param_a, const int32& param_b, const int32& param_c, const int32& param_d) {
}

void UPolarisBlueprintLibrary::SetcameraZoom(const int32& player_id, const int32& param_a, const int32& param_b, const int32& param_c, const int32& param_d) {
}

void UPolarisBlueprintLibrary::SetAntiAliasingMethod(EPolarisAntiAliasingMethod Method) {
}

void UPolarisBlueprintLibrary::PolarisExecuteConsoleCommand(UObject* WorldContextObject, const FString& ExecCommand, bool bWriteToLog) {
}

bool UPolarisBlueprintLibrary::PlayCharacterAnimationStatus(EPolarisCharacterAnimStatus anim_status, int32 player_id) {
    return false;
}

void UPolarisBlueprintLibrary::KeyOnWWiseAudioEvent(UAkAudioEvent* _srcEvent, int32 NoMultiPlayFrame, AActor* _srcActor) {
}

bool UPolarisBlueprintLibrary::IsZoneDrive() {
    return false;
}

bool UPolarisBlueprintLibrary::IsVectorParameterValueOverriden(UMaterialInterface* pMaterialInterface, const FName& Parameter) {
    return false;
}

bool UPolarisBlueprintLibrary::IsVariableRateShadingSupported() {
    return false;
}

bool UPolarisBlueprintLibrary::IsVariableRateShadingEnabled() {
    return false;
}

bool UPolarisBlueprintLibrary::IsSwitchedToDemonstrationStage() {
    return false;
}

bool UPolarisBlueprintLibrary::IsStoryMultipleCpuMode() {
    return false;
}

bool UPolarisBlueprintLibrary::IsStoryMode() {
    return false;
}

void UPolarisBlueprintLibrary::IsReplayMode(bool& bReplay, bool& bPreCalculated) {
}

bool UPolarisBlueprintLibrary::IsPlayerVisible(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsMotheadDrama(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsMatchRound() {
    return false;
}

bool UPolarisBlueprintLibrary::IsMatchPoint() {
    return false;
}

bool UPolarisBlueprintLibrary::IsLowestSpec() {
    return false;
}

bool UPolarisBlueprintLibrary::IsFighterWeaponVisible(int32 player_id, int32 flag) {
    return false;
}

bool UPolarisBlueprintLibrary::IsFighterPowerUp(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsFighterBeforeAttackingEnd(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsFighterAttackingMot(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsFighterAttacking(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsEnableResolutionUpscaling(EPolarisResolutionUpscaling upscaling) {
    return false;
}

bool UPolarisBlueprintLibrary::IsDoingZoneCutIn(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsDoingZone(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsDoingStop() {
    return false;
}

bool UPolarisBlueprintLibrary::IsDoingRageAura(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsDoingRageArtsPre(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsDoingRageArtsPlayerID(int32 player_id) {
    return false;
}

bool UPolarisBlueprintLibrary::IsDoingRageArts() {
    return false;
}

bool UPolarisBlueprintLibrary::IsDisableBattleHUD() {
    return false;
}

bool UPolarisBlueprintLibrary::IsBattlePostFilterON() {
    return false;
}

bool UPolarisBlueprintLibrary::IsBattleMain() {
    return false;
}

bool UPolarisBlueprintLibrary::IsBackground() {
    return false;
}

bool UPolarisBlueprintLibrary::IsAutoResolutionControlEnabled() {
    return false;
}

bool UPolarisBlueprintLibrary::IsActorInActiveWorld(AActor* Actor) {
    return false;
}

int32 UPolarisBlueprintLibrary::GetZoneGuardDamage(int32 player_id) {
    return 0;
}

int32 UPolarisBlueprintLibrary::GetZoneCounter(int32 player_id) {
    return 0;
}

int32 UPolarisBlueprintLibrary::GetYellowBookBattleNo() {
    return 0;
}

int32 UPolarisBlueprintLibrary::GetYellowBookActNo() {
    return 0;
}

int32 UPolarisBlueprintLibrary::GetTargetPlayerID(int32 player_id) {
    return 0;
}

float UPolarisBlueprintLibrary::GetStatUnitRHIRaw() {
    return 0.0f;
}

float UPolarisBlueprintLibrary::GetStatUnitRenderRaw() {
    return 0.0f;
}

float UPolarisBlueprintLibrary::GetStatUnitGPURaw() {
    return 0.0f;
}

float UPolarisBlueprintLibrary::GetStatUnitGameRaw() {
    return 0.0f;
}

float UPolarisBlueprintLibrary::GetStatUnitFrameTimeRaw() {
    return 0.0f;
}

float UPolarisBlueprintLibrary::GetStatUnitFrameTimeByDelta(float Delta) {
    return 0.0f;
}

int32 UPolarisBlueprintLibrary::GetStageRoundCount() {
    return 0;
}

int32 UPolarisBlueprintLibrary::GetStageModelNo() {
    return 0;
}

APolarisStageManager* UPolarisBlueprintLibrary::GetStageManager() {
    return NULL;
}

int32 UPolarisBlueprintLibrary::GetSideByPlayerID(int32 player_id) {
    return 0;
}

FRotator UPolarisBlueprintLibrary::GetsetVectorFightRy2(FVector rot, int32 player_id) {
    return FRotator{};
}

EPolarisResolutionUpscaling UPolarisBlueprintLibrary::GetResolutionUpscaling() {
    return EPolarisResolutionUpscaling::CatmullRom;
}

bool UPolarisBlueprintLibrary::GetRenderingMovieFlag() {
    return false;
}

int32 UPolarisBlueprintLibrary::GetPlayerIDOriginalFromID(int32 player_id) {
    return 0;
}

int32 UPolarisBlueprintLibrary::GetPlayerCount() {
    return 0;
}

FString UPolarisBlueprintLibrary::GetMotName(const int32& player_id) {
    return TEXT("");
}

APolarisMobManager* UPolarisBlueprintLibrary::GetMobManager() {
    return NULL;
}

int32 UPolarisBlueprintLibrary::GetKamuiHashDigest(const FString& String) {
    return 0;
}

float UPolarisBlueprintLibrary::GetGameSpeedTotal() {
    return 0.0f;
}

float UPolarisBlueprintLibrary::GetFrameSkip() {
    return 0.0f;
}

float UPolarisBlueprintLibrary::GetFloorHeightByPlayerID(int32 player_id) {
    return 0.0f;
}

float UPolarisBlueprintLibrary::GetFloorHeight(UObject* WorldContextObject) {
    return 0.0f;
}

FVector UPolarisBlueprintLibrary::GetFighterPosition(int32 player_id) {
    return FVector{};
}

FQuat UPolarisBlueprintLibrary::GetFighterJointRotateQuat(int32 player_id, const FString& joint_name) {
    return FQuat{};
}

FRotator UPolarisBlueprintLibrary::GetFighterJointRotateByName(int32 player_id, const FString& joint_name) {
    return FRotator{};
}

FRotator UPolarisBlueprintLibrary::GetFighterJointRotateByGameBoneId(int32 player_id, int32 game_bone_id) {
    return FRotator{};
}

FRotator UPolarisBlueprintLibrary::GetFighterJointRotate(int32 player_id, int32 joint_index) {
    return FRotator{};
}

FVector UPolarisBlueprintLibrary::GetFighterJointPositionByName(int32 player_id, const FString& joint_name) {
    return FVector{};
}

FVector UPolarisBlueprintLibrary::GetFighterJointPositionByGameBoneId_Model(int32 player_id, int32 game_bone_id) {
    return FVector{};
}

FVector UPolarisBlueprintLibrary::GetFighterJointPositionByGameBoneId(int32 player_id, int32 game_bone_id) {
    return FVector{};
}

FVector UPolarisBlueprintLibrary::GetFighterJointPosition(int32 player_id, int32 joint_index) {
    return FVector{};
}

int32 UPolarisBlueprintLibrary::GetFighterIDByPlayerID(int32 player_id) {
    return 0;
}

float UPolarisBlueprintLibrary::GetFighterBodyHitLength(int32 player_id) {
    return 0.0f;
}

FRotator UPolarisBlueprintLibrary::GetFighterBaseRotation(int32 player_id) {
    return FRotator{};
}

FVector UPolarisBlueprintLibrary::GetFighterBasePosition(int32 player_id) {
    return FVector{};
}

int32 UPolarisBlueprintLibrary::GetFighterAttackingDamageValue(int32 player_id) {
    return 0;
}

int32 UPolarisBlueprintLibrary::GetFighterAttackingBone(int32 player_id) {
    return 0;
}

UEventDispatcherObject* UPolarisBlueprintLibrary::GetEventDispatcherObject() {
    return NULL;
}

APolarisEffectManager* UPolarisBlueprintLibrary::GetEffectManager() {
    return NULL;
}

float UPolarisBlueprintLibrary::GetDrameLatestMotheadFrame() {
    return 0.0f;
}

APolarisDramaManager* UPolarisBlueprintLibrary::GetDramaManager() {
    return NULL;
}

EStageLightType UPolarisBlueprintLibrary::GetCurrentStageLightType() {
    return EStageLightType::Default;
}

void UPolarisBlueprintLibrary::GetCurrentBattleMode(bool& bMotheadInterface, bool& bBattle, bool& bCustomize) {
}

APolarisCharacterManager* UPolarisBlueprintLibrary::GetCharacterManager() {
    return NULL;
}

int32 UPolarisBlueprintLibrary::GetBattleRound() {
    return 0;
}

APolarisBallManager* UPolarisBlueprintLibrary::GetBallManager() {
    return NULL;
}

void UPolarisBlueprintLibrary::GetApplicationMode(bool& bBuildDevelop, bool& bBuildTest, bool& bBuildShipping, bool& bEditor, bool& bPlaySimulateMode, bool& bPlayInEditor, bool& bNoMenuTab) {
}

EPolarisAntiAliasingMethod UPolarisBlueprintLibrary::GetAntiAliasingMethod() {
    return EPolarisAntiAliasingMethod::FXAA;
}

void UPolarisBlueprintLibrary::ForceLog(const FString& String) {
}

void UPolarisBlueprintLibrary::DrawToRenderTargetWithDataArray(UTextureRenderTarget2D* dst, const TArray<float>& data256) {
}

void UPolarisBlueprintLibrary::DelayGarbageCollection() {
}

void UPolarisBlueprintLibrary::ClipboardCopyNewLine(const TArray<FString>& StrArray) {
}

void UPolarisBlueprintLibrary::ClipboardCopy(const TArray<FString>& StrArray) {
}

void UPolarisBlueprintLibrary::CheckMenuMode(int32 inMenuMode, bool& bOnline, bool& bPic, bool& bDec, bool& bMu, bool& bPlayerCustomize, bool& bReplay) {
}

void UPolarisBlueprintLibrary::CheckMenuItemID(int32 inMenuItemID, bool& bPic, bool& bDec, bool& bMu, bool& bPlayerCustomize, bool& bReplay, bool& bOnline, bool& bOption, bool& bNe, bool& bCom, bool& bPlayData, bool& bStore, bool& bTournament) {
}

APolarisMobActor* UPolarisBlueprintLibrary::CastToPolarisMobActor(APawn* Pawn) {
    return NULL;
}

bool UPolarisBlueprintLibrary::AreAllMipLevelsLoaded(UTexture2D* pTex) {
    return false;
}

bool UPolarisBlueprintLibrary::ActivatePhotoCamera() {
    return false;
}


