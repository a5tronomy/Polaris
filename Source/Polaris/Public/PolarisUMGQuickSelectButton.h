#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGQuickSelectButtonType.h"
#include "EPolarisUMGQuickSelectItem.h"
#include "PolarisUMGQuickSelectButton.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGQuickSelectButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisUMGQuickSelectItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisUMGQuickSelectButtonType Type;
    
    POLARIS_API FPolarisUMGQuickSelectButton();
};

