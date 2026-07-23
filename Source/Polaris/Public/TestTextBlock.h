#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "TestTextBlock.generated.h"

UCLASS()
class POLARIS_API UTestTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Size_Fit;
    
    UTestTextBlock();

    UFUNCTION(BlueprintCallable)
    void CalculateSizeFit();
    
};

