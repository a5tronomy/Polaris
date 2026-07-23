#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Blueprint/UserWidget.h"
#include "CustomSlateVertex.h"
#include "PolarisWidgetBlueprintLibrary.generated.h"

class UFont;
class USlateBrushAsset;
class UUserWidget;
class UWidgetAnimation;

UCLASS(BlueprintType)
class POLARIS_API UPolarisWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisWidgetBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static FVector2D TransformPointFromPaintContext(UPARAM(Ref) FPaintContext& Context, const FVector2D Point);
    
    UFUNCTION(BlueprintPure)
    static FString ReplaceUnsupportedCharacter(const UFont* Font, const FString& SourceStr);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetLocalSizeFromPaintContext(UPARAM(Ref) FPaintContext& Contect);
    
    UFUNCTION(BlueprintCallable)
    static UWidgetAnimation* FindWidgetAnimation(UUserWidget* Widget, FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCustomVerts(UPARAM(Ref) FPaintContext& Context, USlateBrushAsset* Brush, const TArray<FCustomSlateVertex>& InVerts, const TArray<int32>& InIndices);
    
};

