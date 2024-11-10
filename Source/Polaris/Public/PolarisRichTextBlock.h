#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Components/RichTextBlock.h"
#include "EPolarisRichTextBlockArabicPivotType.h"
#include "EPolarisRichTextBlockOpacityType.h"
#include "EPolarisTextBlockFontType.h"
#include "PolarisRichTextBlock.generated.h"

class UCurveFloat;

UCLASS()
class POLARIS_API UPolarisRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPolarisTextBlockFontType FontType;
    
    UPROPERTY(EditAnywhere)
    FString textId;
    
    UPROPERTY(EditAnywhere)
    bool bUseScroll;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* BeginCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* EndCurve;
    
    UPROPERTY(EditAnywhere)
    float StepSpeed;
    
    UPROPERTY(EditAnywhere)
    EPolarisRichTextBlockOpacityType OpacityType;
    
    UPROPERTY(EditAnywhere)
    bool IsReverse;
    
    UPROPERTY(EditAnywhere)
    bool IsFixedRightAlignment;
    
    UPROPERTY(EditAnywhere)
    EPolarisRichTextBlockArabicPivotType ArabicPivotType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETextJustify::Type> ArabicJustification;
    
    UPROPERTY(EditAnywhere)
    bool bArabicForceRLM;
    
private:
    UPROPERTY(Transient)
    FText RawText;
    
public:
    UPolarisRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void UpdateElapsedTime(float delta_time);
    
    UFUNCTION(BlueprintCallable)
    void SetTextID(const FString& NewTextId);
    
    UFUNCTION(BlueprintCallable)
    void SetRawText(const FText& raw_text, bool ReplaceUnsupportedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetElapsedTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void ResetElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    void RefreshText();
    
};

