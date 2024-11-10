#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryTournamentSelect.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryTournamentSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAnimClickEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAnimInEnd;
    
    UPolarisUMGStoryTournamentSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void SetProfile(int32 no, const FString& titleText, const FString& leftText, const FString& rightText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetChoosePlayerText(const FString& chooseText1, const FString& chooseText2);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacter(bool Left, const FString& nameText, const UTexture2D* charaTexture, const UTexture2D* nameTexture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimHover(bool Left);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimClick(bool Left);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartMovie();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetup(bool leftSelected, bool rightSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAnimInEndCallback();
    
};

