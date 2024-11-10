#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisRichTextBlock.h"
#include "PolarisSubtitleTextBlock.generated.h"

UCLASS()
class POLARIS_API UPolarisSubtitleTextBlock : public UPolarisRichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector2D Offset;
    
    UPROPERTY(EditDefaultsOnly)
    float FontDefaultSize;
    
    UPolarisSubtitleTextBlock();

};

