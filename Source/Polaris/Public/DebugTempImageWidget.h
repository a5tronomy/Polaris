#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugTempImageWidget.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UDebugTempImageWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDebugTempImageWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SetFileNameText(const FString& file_name);
    
};

