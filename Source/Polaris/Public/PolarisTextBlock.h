#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Framework/Text/TextLayout.h"
#include "Components/TextBlock.h"
#include "EPolarisTextBlockArabicPivotType.h"
#include "EPolarisTextBlockFontType.h"
#include "PolarisTextBlock.generated.h"

UCLASS()
class POLARIS_API UPolarisTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPolarisTextBlockFontType FontType;
    
    UPROPERTY(EditAnywhere)
    FString textId;
    
    UPROPERTY(EditAnywhere)
    bool bSizeFit;
    
    UPROPERTY(EditAnywhere)
    EPolarisTextBlockArabicPivotType ArabicPivotType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETextJustify::Type> ArabicJustification;
    
    UPROPERTY(EditAnywhere)
    bool bArabicForceRLM;
    
    UPROPERTY(EditAnywhere)
    bool bOverride_ArabicTextFlowDirection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextFlowDirection ArabicTextFlowDirection;
    
    UPolarisTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextID(const FString& NewTextId);
    
    UFUNCTION(BlueprintCallable)
    void SetRawText(const FString& raw_text, bool ReplaceUnsupportedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFontType(EPolarisTextBlockFontType Type);
    
    UFUNCTION(BlueprintCallable)
    void RefreshText();
    
    UFUNCTION(BlueprintCallable)
    void CalculateSizeFit();
    
};

