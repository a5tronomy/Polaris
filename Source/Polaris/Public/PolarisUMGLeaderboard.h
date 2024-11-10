#pragma once
#include "CoreMinimal.h"
#include "EPlayerNameType.h"
#include "PolarisUserWidget.h"
#include "RankingData.h"
#include "PolarisUMGLeaderboard.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGLeaderboard : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<FRankingData> RankingDatas;
    
    UPROPERTY(BlueprintReadWrite)
    FRankingData SelfRankingData;
    
    UPROPERTY(BlueprintReadWrite)
    float MinScrollDelta;
    
    UPROPERTY(BlueprintReadOnly)
    EPlayerNameType CurrentPlayerNameType;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SelectedTabIndex;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentTabIndex;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SelectedCursorIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayerEnable;
    
    UPROPERTY(BlueprintReadOnly)
    bool CharacterEnable;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlatformEnable;
    
    UPROPERTY(BlueprintReadOnly)
    bool PeriodEnable;
    
public:
    UPolarisUMGLeaderboard();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTabIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelfRankingView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScroll(int32 top_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRankingListView(int32 update_start_rank, int32 update_num);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayerNameType();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentCursor(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleConnecting(bool is_visible);
    
    UFUNCTION()
    void SetSelfRankingData(FRankingData& ranking_data);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectedCursorByWidget(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRequireOpenProfile(bool require);
    
    UFUNCTION()
    void SetRankingDatas(int32 start_rank, TArray<FRankingData> ranking_datas, int32 ranking_num);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetRankingDataNum(int32 ranking_num);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFilterStringId(const FString& Player, const FString& Character, const FString& Platform, const FString& Period);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEnableAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDisableAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDecideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRankingListInitialized();
    
    UFUNCTION()
    bool IsScrolling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingEnableAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingDisableAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingDecideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetSkipNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetScrollDelta();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDisplayedListRange(int32& top_index, int32& bottom_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearRankingListView();
    
    UFUNCTION(BlueprintCallable)
    void ClearRankingList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeTabByWidget(int32 Index);
    
};

