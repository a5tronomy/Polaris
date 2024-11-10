#pragma once
#include "CoreMinimal.h"
#include "BlackPenViewerControllerBase.h"
#include "BlackPenPlCustViewerController.generated.h"

class UTexture2D;

UCLASS()
class POLARIS_API ABlackPenPlCustViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    UTexture2D* ShogoBGTexture;
    
    UPROPERTY(BlueprintReadWrite)
    FString ShogoTextID;
    
    UPROPERTY(BlueprintReadWrite)
    UTexture2D* HPGuageTexture;
    
    UPROPERTY(BlueprintReadWrite)
    UTexture2D* PlayerPanelTexture;
    
public:
    ABlackPenPlCustViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogoTextID(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogoBGTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewRankTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerPanelTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHPGuageTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsHideViewAnimationPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideView();
    
};

