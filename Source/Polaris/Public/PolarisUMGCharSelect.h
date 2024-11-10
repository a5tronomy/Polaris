#pragma once
#include "CoreMinimal.h"
#include "CharSelectFighterInfo.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCharSelect.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGCharSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, UTexture2D*> thumb_normal_textures;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, UTexture2D*> thumb_selected_textures;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, UTexture2D*> name_textures;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, UTexture2D*> bg_face_l_textures;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, UTexture2D*> bg_face_r_textures;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, UTexture2D*> bg_name_textures;
    
public:
    UPolarisUMGCharSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowUnselectedAll(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDevelopment(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayWipeAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenControllerDialog(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetPanelCenter(float X, float Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetFacePanel(int32 X, int32 Y, int32 ID, bool Unlocked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetCurrentRank(bool is_left, const UTexture2D* rank_tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetCurrentName(bool is_left, int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetCurrentFlag(bool is_left, int32 ID, bool is_random, bool is_decide);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetCurrentFighterInfo(bool is_left, const FCharSelectFighterInfo& fighter_info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectedCPU(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelected2P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelected1P2P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelected1P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeselected(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecidedCPU(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecided2P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecided1P2P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecided1P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCanceledDecidedRandom(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCanceledDecidedCharacter(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCanceled();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasInAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseControllerDialog(int32 side);
    
};

