#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGJukeBoxMode.h"
#include "JukeBoxBGM.h"
#include "JukeBoxMyList.h"
#include "JukeBoxPlayList.h"
#include "JukeBoxSeriesTab.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGJukeBox.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGJukeBox : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGJukeBox();

    UFUNCTION(BlueprintImplementableEvent)
    void SetupPlayList(const TArray<FJukeBoxPlayList>& infos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupMyList(const TArray<FJukeBoxMyList>& infos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupBGMSeriesTab(const TArray<FJukeBoxSeriesTab>& infos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupBGMList(const FJukeBoxSeriesTab& series, const TArray<FJukeBoxBGM>& infos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMode(EPolarisUMGJukeBoxMode Mode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInputEnable(bool On);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectSeriesTab(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectRandomPreset(int32 Index, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMyListInfo(int32 Index, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectJacket(int32 Index, bool Force, bool scroll_right);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectBGM(int32 Index, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimPresetWindowIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimNextPrev(bool Next);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimMyListWindowIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimMyListBGMWindowIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimClick();
    
    UFUNCTION(BlueprintImplementableEvent)
    void JacketMove(float delta_time);
    
    UFUNCTION(BlueprintCallable)
    void InvokeRandomPresetSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeRandomPresetDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMyListSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMyListDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeJacketSelectCallback(bool Right);
    
    UFUNCTION(BlueprintCallable)
    void InvokeJacketDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBGMSeriesTabSelectCallback(bool Right);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBGMSeriesTabDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBGMSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBGMDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimSelectJacket();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimPrev();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimPresetWindowOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimPresetWindowIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimPresetWindowClick();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimNext();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMyListWindowOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMyListWindowIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMyListClick();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMyListBGMWindowOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMyListBGMWindowIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMyListBGMClick();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimClick();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideRandomPreset(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMyListInfo(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideBGM(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplySeriesTab(const FJukeBoxSeriesTab& series);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyMyListInfo(const FJukeBoxMyList& Info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyJacket(const FJukeBoxPlayList& Info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyBGM(const FJukeBoxBGM& Info);
    
};

