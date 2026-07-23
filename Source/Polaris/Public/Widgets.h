#pragma once
#include "CoreMinimal.h"
#include "Widgets.generated.h"

class UCanvasPanel;

USTRUCT(BlueprintType)
struct FWidgets {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UCanvasPanel> _unlock;
    
    POLARIS_API FWidgets();
};

