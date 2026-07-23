#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BodySetupEnums.h"
#include "PolarisDebugBlueprintLibrary.generated.h"

class AActor;
class APlayerController;
class APolarisDebugCustomizeActor;
class UCustomizeSet;
class UNiagaraComponent;
class UObject;
class UStaticMesh;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class POLARIS_API UPolarisDebugBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisDebugBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateDynamicResolutionStatusDebug();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> SortStringArray(TArray<FString> string_array);
    
    UFUNCTION(BlueprintCallable)
    static void SetReloadMothead();
    
    UFUNCTION(BlueprintCallable)
    static void SetRealtimeView(bool bRealtime);
    
    UFUNCTION(BlueprintCallable)
    static void SetOutlineFilterParams(float InsideWidth, float OutsideWidth, float MaskLevel, float BackGroundColorLevel, const FVector InsideColor, const FVector OutsideColor);
    
    UFUNCTION(BlueprintCallable)
    static void SetOutlineFilter(bool isDraw);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraSpawnScale(UNiagaraComponent* Instance, float spawn_count_scale);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightingBakeQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetFighterDebugSettings(int32 p1, int32 p1Cos, int32 p2, int32 p2Cos, bool loadImmediate);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugOptionDrawFlagGameBone(int32 id_databuf, bool isDraw);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugOption(int32 option_id, int32 is_enabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCollisionComplexity(UStaticMesh* StaticMesh, TEnumAsByte<ECollisionTraceFlag> trace_flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoTestPlayerOption(bool bCPUMode, bool bZoneMode, bool bRageMode, bool bInfiniteHP);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorLabel(AActor* Actor, const FString& PrefixLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveColorPanelPaletteCSV(int32 ID, const FString& PaletteData);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAndCheckIn(const bool bSaveMapPackages, const bool bSaveContentPackages);
    
    UFUNCTION(BlueprintCallable)
    static void RequestStageSequenceNo(int32 sequenceNo, bool bCallInitbattle, bool bStoryMode);
    
    UFUNCTION(BlueprintCallable)
    static void RequestCustomizeCharacter(APolarisDebugCustomizeActor* Actor, UCustomizeSet* _loadCS);
    
    UFUNCTION(BlueprintCallable)
    static void PolarisSetDramaPosition(float posx, float posz, float rotz, bool bPos, bool bRot);
    
    UFUNCTION(BlueprintCallable)
    static void PolarisSetDebugOffCollision(int32 player_id, int32 bodyHitOff);
    
    UFUNCTION(BlueprintCallable)
    static void PolarisSetDebugHitStaEnd(int32 player_id, int32 hit_sta, int32 hit_end, int32 atk_dta_id);
    
    UFUNCTION(BlueprintCallable)
    static void PolarisSetAttackData(int32 player_id, int32 attack_id, float Size, float Height, int32 bone_id_1, int32 bone_id_2, FVector Offset_1, FVector Offset_2, int32 hitsta, int32 hitend);
    
    UFUNCTION(BlueprintCallable)
    static void PolarisLogString(const FString& InString, bool bPrintToLog);
    
    UFUNCTION(BlueprintPure)
    static void PolarisGetDramaPosition(float& posx, float& posz, float& rotz);
    
    UFUNCTION(BlueprintPure)
    static int32 PolarisGetDebugOffCollision(int32 player_id);
    
    UFUNCTION(BlueprintPure)
    static void PolarisGetDebugHitStaEnd(int32 player_id, int32& hit_sta, int32& hit_end);
    
    UFUNCTION(BlueprintPure)
    static void PolarisGetAttackData(int32 player_id, int32 attack_id, float& Size, float& Height, int32& bone_id_1, int32& bone_id_2, FVector& Offset_1, FVector& Offset_2, int32& hitsta, int32& hitend);
    
    UFUNCTION(BlueprintCallable)
    static void PolarisAddAttackData(int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    static void OpenAssetEditorOnly(const FString& AssetPathName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStatEnabled(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableDynamicResolution();
    
    UFUNCTION(BlueprintCallable)
    static void IMGUI_SetInputShared(bool keyboard, bool Mouse, bool Pad);
    
    UFUNCTION(BlueprintCallable)
    static void GetStreamingLevelNameList(TArray<FString>& LevelNameList);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetOffCollisionTypeTable();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetOffCollisionTypePartsTable();
    
    UFUNCTION(BlueprintPure)
    static int32 GetOffCollisionShort();
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumVertices(UStaticMesh* Mesh, int32 LODIndex);
    
    UFUNCTION(BlueprintPure)
    static FString GetGameNameByGameBoneId(int32 bone_id);
    
    UFUNCTION(BlueprintCallable)
    static void GetFighterString(int32 FighterId, FString& Name, FString& origName, bool& validName, int32 CostumeID, FString& costumeName, bool& validCostume);
    
    UFUNCTION(BlueprintCallable)
    static void GetFighterIdFromString(const FString& FighterString, int32& FighterId, bool& validName);
    
    UFUNCTION(BlueprintCallable)
    static void GetFighterDebugSettings(int32& p1, int32& p1Cos, int32& p2, int32& p2Cos);
    
    UFUNCTION(BlueprintPure)
    static int32 GetDebugOption(int32 option_id);
    
    UFUNCTION(BlueprintCallable)
    static void GetCurrentSequenceName(FString& SequenceName, FString& sceneName);
    
    UFUNCTION(BlueprintPure)
    static FString GetConsoleCommandSetByName(const FString& CommandName);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetBoneNameMap();
    
    UFUNCTION(BlueprintCallable)
    static void ForceApplicationCrash(UObject* ptr_forNullAccess, int32 zero_divide);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteConsoleCommandWithCurrentPriority(const UObject* WorldContextObject, const FString& Command, APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void EndGpuCapture();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogStreamingTextureInfo(int32 LODGroup, bool bOnlyStreamable);
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogResolutionInfo();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogPrintString(const FString& Str);
    
    UFUNCTION(BlueprintCallable)
    static FString CreateMotheadText(int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    static void CountDiffTexturePixel(UTextureRenderTarget2D* Texture, float& retCount, float& retSigma);
    
    UFUNCTION(BlueprintCallable)
    static void ClearScalabilityGroupSetBy(const FString& InGroupName, bool bRuntimeChangedOnly);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConsoleVariableSetBy(const FString& InName, bool bRuntimeChangedOnly);
    
    UFUNCTION(BlueprintPure)
    static bool CanExecuteConsoleCommandByScalability(const FString& CommandName);
    
    UFUNCTION(BlueprintCallable)
    static void CallBrowserObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void BeginLightBake(int32 VisibilityOnly, bool bForceBake);
    
    UFUNCTION(BlueprintCallable)
    static void BeginGpuCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static float ApplyForceNiagaraSpawnScale(UNiagaraComponent* Instance, int32 quality_level);
    
};

