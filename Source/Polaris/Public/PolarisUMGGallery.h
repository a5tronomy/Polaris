#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GalleryListInfo.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGallery.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGGallery : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGallery();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateTitleNewIcon(int32 Index, bool onoff);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateMovieUnlock(int32 Index, bool Locked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateMovieNewIcon(int32 Index, bool onoff);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateIllustUnlock(int32 Index, bool Locked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateIllustNewIcon(int32 Index, bool onoff);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCategoryNewIcon(int32 Index, bool onoff);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupMovieList(const TArray<FGalleryListInfo>& infos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupIllustList(const TArray<FGalleryListInfo>& infos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Setup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetUnlockAndTotalItemCount(int32 unlock_count, int32 total_count);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleUnlockCount(int32 Index, int32 Count, int32 Max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleTexture(int32 Index, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleText(int32 Index, const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMovieSize(const FVector2D& Size);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetKeyVisualTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetKeyVisualPurchaseInfo(int32 item_count, int32 price);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIllustScale(float Scale);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIllustPosition(const FVector2D& Pos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIllustImage(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFightMoney(int64 fight_money);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectTitle(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMovie(int32 Index, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectIllust(int32 Index, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectCategory(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimMovieIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIO(bool In, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIllustIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIllustChangeIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ListOutMovie();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ListOutIllust();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ListInMovie(bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ListInIllust();
    
    UFUNCTION(BlueprintCallable)
    void InvokeTitleSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTitleDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeListSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeListDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeCategorySelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeCategoryDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimTitleClick();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMovieOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMovieIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimListOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimListItemClick();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimListIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIllustOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIllustIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIllustChangeOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIllustChangeIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector2D GetMovieSize();
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetMovieImage();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideTitle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMovie();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideIllust();
    
};

