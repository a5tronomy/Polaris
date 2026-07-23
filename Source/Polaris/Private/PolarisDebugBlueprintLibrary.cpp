#include "PolarisDebugBlueprintLibrary.h"

UPolarisDebugBlueprintLibrary::UPolarisDebugBlueprintLibrary() {
}

void UPolarisDebugBlueprintLibrary::UpdateDynamicResolutionStatusDebug() {
}

TArray<FString> UPolarisDebugBlueprintLibrary::SortStringArray(TArray<FString> string_array) {
    return TArray<FString>();
}

void UPolarisDebugBlueprintLibrary::SetReloadMothead() {
}

void UPolarisDebugBlueprintLibrary::SetRealtimeView(bool bRealtime) {
}

void UPolarisDebugBlueprintLibrary::SetOutlineFilterParams(float InsideWidth, float OutsideWidth, float MaskLevel, float BackGroundColorLevel, const FVector InsideColor, const FVector OutsideColor) {
}

void UPolarisDebugBlueprintLibrary::SetOutlineFilter(bool isDraw) {
}

void UPolarisDebugBlueprintLibrary::SetNiagaraSpawnScale(UNiagaraComponent* Instance, float spawn_count_scale) {
}

void UPolarisDebugBlueprintLibrary::SetLightingBakeQuality(int32 quality) {
}

void UPolarisDebugBlueprintLibrary::SetFighterDebugSettings(int32 p1, int32 p1Cos, int32 p2, int32 p2Cos, bool loadImmediate) {
}

void UPolarisDebugBlueprintLibrary::SetDebugOptionDrawFlagGameBone(int32 id_databuf, bool isDraw) {
}

void UPolarisDebugBlueprintLibrary::SetDebugOption(int32 option_id, int32 is_enabled) {
}

bool UPolarisDebugBlueprintLibrary::SetCollisionComplexity(UStaticMesh* StaticMesh, TEnumAsByte<ECollisionTraceFlag> trace_flag) {
    return false;
}

void UPolarisDebugBlueprintLibrary::SetAutoTestPlayerOption(bool bCPUMode, bool bZoneMode, bool bRageMode, bool bInfiniteHP) {
}

void UPolarisDebugBlueprintLibrary::SetActorLabel(AActor* Actor, const FString& PrefixLabel) {
}

bool UPolarisDebugBlueprintLibrary::SaveColorPanelPaletteCSV(int32 ID, const FString& PaletteData) {
    return false;
}

void UPolarisDebugBlueprintLibrary::SaveAndCheckIn(const bool bSaveMapPackages, const bool bSaveContentPackages) {
}

void UPolarisDebugBlueprintLibrary::RequestStageSequenceNo(int32 sequenceNo, bool bCallInitbattle, bool bStoryMode) {
}

void UPolarisDebugBlueprintLibrary::RequestCustomizeCharacter(APolarisDebugCustomizeActor* Actor, UCustomizeSet* _loadCS) {
}

void UPolarisDebugBlueprintLibrary::PolarisSetDramaPosition(float posx, float posz, float rotz, bool bPos, bool bRot) {
}

void UPolarisDebugBlueprintLibrary::PolarisSetDebugOffCollision(int32 player_id, int32 bodyHitOff) {
}

void UPolarisDebugBlueprintLibrary::PolarisSetDebugHitStaEnd(int32 player_id, int32 hit_sta, int32 hit_end, int32 atk_dta_id) {
}

void UPolarisDebugBlueprintLibrary::PolarisSetAttackData(int32 player_id, int32 attack_id, float Size, float Height, int32 bone_id_1, int32 bone_id_2, FVector Offset_1, FVector Offset_2, int32 hitsta, int32 hitend) {
}

void UPolarisDebugBlueprintLibrary::PolarisLogString(const FString& InString, bool bPrintToLog) {
}

void UPolarisDebugBlueprintLibrary::PolarisGetDramaPosition(float& posx, float& posz, float& rotz) {
}

int32 UPolarisDebugBlueprintLibrary::PolarisGetDebugOffCollision(int32 player_id) {
    return 0;
}

void UPolarisDebugBlueprintLibrary::PolarisGetDebugHitStaEnd(int32 player_id, int32& hit_sta, int32& hit_end) {
}

void UPolarisDebugBlueprintLibrary::PolarisGetAttackData(int32 player_id, int32 attack_id, float& Size, float& Height, int32& bone_id_1, int32& bone_id_2, FVector& Offset_1, FVector& Offset_2, int32& hitsta, int32& hitend) {
}

void UPolarisDebugBlueprintLibrary::PolarisAddAttackData(int32 player_id) {
}

void UPolarisDebugBlueprintLibrary::OpenAssetEditorOnly(const FString& AssetPathName) {
}

bool UPolarisDebugBlueprintLibrary::IsStatEnabled(const FString& InName) {
    return false;
}

bool UPolarisDebugBlueprintLibrary::IsEnableDynamicResolution() {
    return false;
}

void UPolarisDebugBlueprintLibrary::IMGUI_SetInputShared(bool keyboard, bool Mouse, bool Pad) {
}

void UPolarisDebugBlueprintLibrary::GetStreamingLevelNameList(TArray<FString>& LevelNameList) {
}

TArray<FString> UPolarisDebugBlueprintLibrary::GetOffCollisionTypeTable() {
    return TArray<FString>();
}

TArray<FString> UPolarisDebugBlueprintLibrary::GetOffCollisionTypePartsTable() {
    return TArray<FString>();
}

int32 UPolarisDebugBlueprintLibrary::GetOffCollisionShort() {
    return 0;
}

int32 UPolarisDebugBlueprintLibrary::GetNumVertices(UStaticMesh* Mesh, int32 LODIndex) {
    return 0;
}

FString UPolarisDebugBlueprintLibrary::GetGameNameByGameBoneId(int32 bone_id) {
    return TEXT("");
}

void UPolarisDebugBlueprintLibrary::GetFighterString(int32 FighterId, FString& Name, FString& origName, bool& validName, int32 CostumeID, FString& costumeName, bool& validCostume) {
}

void UPolarisDebugBlueprintLibrary::GetFighterIdFromString(const FString& FighterString, int32& FighterId, bool& validName) {
}

void UPolarisDebugBlueprintLibrary::GetFighterDebugSettings(int32& p1, int32& p1Cos, int32& p2, int32& p2Cos) {
}

int32 UPolarisDebugBlueprintLibrary::GetDebugOption(int32 option_id) {
    return 0;
}

void UPolarisDebugBlueprintLibrary::GetCurrentSequenceName(FString& SequenceName, FString& sceneName) {
}

FString UPolarisDebugBlueprintLibrary::GetConsoleCommandSetByName(const FString& CommandName) {
    return TEXT("");
}

TArray<FString> UPolarisDebugBlueprintLibrary::GetBoneNameMap() {
    return TArray<FString>();
}

void UPolarisDebugBlueprintLibrary::ForceApplicationCrash(UObject* ptr_forNullAccess, int32 zero_divide) {
}

void UPolarisDebugBlueprintLibrary::ExecuteConsoleCommandWithCurrentPriority(const UObject* WorldContextObject, const FString& Command, APlayerController* SpecificPlayer) {
}

void UPolarisDebugBlueprintLibrary::EndGpuCapture() {
}

void UPolarisDebugBlueprintLibrary::DebugLogStreamingTextureInfo(int32 LODGroup, bool bOnlyStreamable) {
}

void UPolarisDebugBlueprintLibrary::DebugLogResolutionInfo() {
}

void UPolarisDebugBlueprintLibrary::DebugLogPrintString(const FString& Str) {
}

FString UPolarisDebugBlueprintLibrary::CreateMotheadText(int32 player_id) {
    return TEXT("");
}

void UPolarisDebugBlueprintLibrary::CountDiffTexturePixel(UTextureRenderTarget2D* Texture, float& retCount, float& retSigma) {
}

void UPolarisDebugBlueprintLibrary::ClearScalabilityGroupSetBy(const FString& InGroupName, bool bRuntimeChangedOnly) {
}

void UPolarisDebugBlueprintLibrary::ClearConsoleVariableSetBy(const FString& InName, bool bRuntimeChangedOnly) {
}

bool UPolarisDebugBlueprintLibrary::CanExecuteConsoleCommandByScalability(const FString& CommandName) {
    return false;
}

void UPolarisDebugBlueprintLibrary::CallBrowserObject(UObject* Object) {
}

void UPolarisDebugBlueprintLibrary::BeginLightBake(int32 VisibilityOnly, bool bForceBake) {
}

void UPolarisDebugBlueprintLibrary::BeginGpuCapture(const FString& Filename) {
}

float UPolarisDebugBlueprintLibrary::ApplyForceNiagaraSpawnScale(UNiagaraComponent* Instance, int32 quality_level) {
    return 0.0f;
}


