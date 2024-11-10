#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyQuickSelect.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyQuickSelect : public UObject {
    GENERATED_BODY()
public:
    ULobbyQuickSelect();

    UFUNCTION(BlueprintCallable)
    void SetRankRange(int32 rankRange);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSideLeft(bool isLeft);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchingCrossplay(bool bRankmatch, bool isCrossplay);
    
    UFUNCTION(BlueprintCallable)
    void SetLineQuality(bool bRankmatch, int32 lineQuality);
    
    UFUNCTION(BlueprintCallable)
    void OpenQuickCustomizeSelect();
    
    UFUNCTION(BlueprintCallable)
    void OpenQuickCharacterSelect();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerSideLeft() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOpenCustomizeSelect() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOpenCharacterSelect() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMatchingCrossplay(bool bRankmatch);
    
    UFUNCTION(BlueprintPure)
    FString GetSelectedCustomizeSlotName() const;
    
    UFUNCTION(BlueprintPure)
    void GetSelectedCharacter(int32& FighterId, int32& costumeTypeId, int32& customizeSlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRankRange() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLineQuality(bool bRankmatch);
    
    UFUNCTION(BlueprintPure)
    void GetFighterNameTextId(int32 InFighterId, FString& OutFighterName) const;
    
};

