#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlackPenViewerControllerBase.h"
#include "EImageViewType.h"
#include "BlackPenImageViewerController.generated.h"

class UTexture2D;

UCLASS()
class POLARIS_API ABlackPenImageViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    EImageViewType ImageType;
    
public:
    ABlackPenImageViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(UTexture2D* Texture);
    
    UFUNCTION()
    void SetImageType(EImageViewType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsHideViewAnimationPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideView();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector2D GetTextureSize() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UTexture2D* GetTexture() const;
    
};

