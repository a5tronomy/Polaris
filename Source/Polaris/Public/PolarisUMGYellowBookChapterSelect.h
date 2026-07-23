#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGYellowBookChapterSelect.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGYellowBookChapterSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGYellowBookChapterSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowOthersMovie(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetWindowInfo(const FString& Title, const FString& Category, const FString& Text, const UTexture2D* tex, bool is_movie, bool is_diary);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOtherPanelNew(int32 Index, int32 sub_index, bool is_new);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLogoTexture(int32 Index, const UTexture2D* tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetClearIconVisibility(int32 cpt, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetChapterTitleText(const FString& Title, const FString& Info, bool cleared);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBGTexture(const UTexture2D* tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectOtherPanel(int32 cpt, int32 cpt_sub);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMainPanel(int32 cpt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectDLCPanel(int32 cpt, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ScrollPanel(int32 Type, float Speed, bool change_speed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ScrollDetailWindow(bool to_up);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestIOAnim(bool In);
    
    UFUNCTION(BlueprintCallable)
    bool IsOtherPanelNotRightMost(int32 Index, int32 sub_index);
    
    UFUNCTION(BlueprintCallable)
    bool IsOtherPanelNew(int32 Index, int32 sub_index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabSelectCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeOtherSelectCallback(int32 Index, int32 sub_index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeOtherDecideCallback(int32 Index, int32 sub_index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMainSelectCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMainDecideCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDLCSelectCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDLCDecideCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasScrollAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetOthersMovieImage() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetNearestOtherPanel(int32 line, int32 chapter);
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetNearestMainPanel(int32 line, int32 chapter);
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetNearestDLCPanel(int32 line, int32 chapter);
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetMovieImage() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideOtherPanel(int32 cpt, int32 cpt_sub);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMainPanel(int32 cpt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideDLCPanel(int32 cpt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateOtherPanel(const TMap<int32, bool>& List);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateDLCPanel(const TArray<UTexture2D*>& tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeBgMode(bool Movie);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CancelDetailWindow();
    
};

