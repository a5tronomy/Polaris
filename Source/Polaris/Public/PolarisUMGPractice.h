#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPractice.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPractice : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPractice();

    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityTips(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityTimer(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityHpInfo(int32 side, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityHistory(int32 side, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityFrameSimpleInfo(int32 side, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityFrameInfo(int32 side, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityDamageInfo(int32 side, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityCountDown(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityCommandListButton(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityComboInfo(int32 side, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityComboChallenge(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTopUIPosition(float pos_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsVisibilityGreat(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsText(const FString& tips_text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsCommandText(const FString& combo_text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTipsComboDamage(const FString& combo_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTimerNum(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHistoryData(int32 side, int32 Index, const UTexture2D* Icon_0, const UTexture2D* Icon_1, const UTexture2D* Icon_2, int32 lever, int32 Button, int32 frame);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFrameInfoIconTexture(int32 side, const UTexture2D* Texture_0, const UTexture2D* Texture_1);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDamageInfoIconTexture(int32 side, const UTexture2D* Texture_0, const UTexture2D* Texture_1, const UTexture2D* Texture_2, const UTexture2D* Texture_3, const UTexture2D* Texture_4);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCountDownNum(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommandListButtonShift(bool Shift);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommandListButtonNoteText(const FString& note_text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommandListButtonNo(int32 no, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommandListButtonNameText(const FString& name_text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommandListButtonIconTexture(const UTexture2D* Texture_0, const UTexture2D* Texture_1, const UTexture2D* Texture_2, const UTexture2D* Texture_3);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommandListButtonDifficulty(int32 difficulty, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommandListButtonDamageText(const FString& damage_text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommandListButtonCommandText(const FString& command_text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommandListButtonCheckBox(bool checked, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetComboChallengeName(const FString& name_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetComboChallengeCurrentCommand(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetComboChallengeCommand(int32 Index, const FString& command_text, const FString& command_dark_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetComboChallengeCheckBox(bool checked, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWallHitOut(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWallHitIn(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPunishOut(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPunishIn(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayHpInfoInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCounterHitOut(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCounterHitIn(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCommandListButtonTAM();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCommandListButtonResetElapsedTime();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCommandListButtonNoteOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCommandListButtonNoteIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboOut(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboIn(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboDamageOut(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboDamageIn(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboDamageCount(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboCount(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCleanHitOut(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCleanHitIn(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetVisibilityTips();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearComboChallengeCommand();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddComboChallengeCommand(const FString& command_text, const FString& command_dark_text);
    
};

