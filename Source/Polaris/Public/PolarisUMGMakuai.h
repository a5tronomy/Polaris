#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "TopStats.h"
#include "PolarisUMGMakuai.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGMakuai : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGMakuai();

    UFUNCTION(BlueprintImplementableEvent)
    void SetStageTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStageName(const FString& stage_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStage(const FString& stage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSmallNameTexture(const UTexture2D* Texture_0, const UTexture2D* Texture_1);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRandomlySelectedStageInfoVisibility(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerName(int32 side, const FString& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNameTexture(const UTexture2D* Texture_0, const UTexture2D* Texture_1);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFaceTexture(const UTexture2D* Texture_0, const UTexture2D* Texture_1);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBallInformationVisibility(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBallInformation(const UTexture2D* Texture, const FString& ballName, const FString& damageCaption, const FString& damageRate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayGhost(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimAQ();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetPlayerInformation(int32 side, const UTexture2D* texture_panel, const FString& Name, const UTexture2D* texture_rank, int32 power, int32 platform_tag, const FString& Area, const TArray<FTopStats>& top_stats);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NameDown();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimOutFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimInFinished();
    
};

