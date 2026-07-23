#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGStoryCharaEpisodeAnimType.h"
#include "EPolarisUMGStoryCharaEpisodeListAnimType.h"
#include "EPolarisUMGStoryCharaEpisodeListIconType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryCharaEpisode.generated.h"

class UImage;
class UPolarisButton;
class UScrollBox;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryCharaEpisode : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryCharaEpisode();

    UFUNCTION(BlueprintImplementableEvent)
    void UnselectEpisode(int32 Index, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEpisodeIconEnable(int32 Index, EPolarisUMGStoryCharaEpisodeListIconType Type, bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEpisodeActivity(int32 Index, bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBGTexture(const UTexture2D* tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBgInfo(const UTexture2D* tex, const FString& Name, const FString& style, const FString& Origin, const FString& Height, const FString& Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectEpisode(int32 Index, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestEpisodeAnim(int32 Index, EPolarisUMGStoryCharaEpisodeListAnimType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnim(EPolarisUMGStoryCharaEpisodeAnimType Type);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 cpt);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasEpisodeAnimationFinished(int32 Index, EPolarisUMGStoryCharaEpisodeListAnimType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimationFinished(EPolarisUMGStoryCharaEpisodeAnimType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    UScrollBox* GetScrollBox() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetMovieImage() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UPolarisButton* GetEpisodeButton(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideEpisode(int32 Index, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateEpisodeList(const TArray<FString>& Names);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeBgMode(bool Movie);
    
};

