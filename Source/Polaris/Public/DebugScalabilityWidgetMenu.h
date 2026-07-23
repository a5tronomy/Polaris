#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DebugScalabilityWidget.h"
#include "DebugScalabilityWidgetMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UDebugScalabilityWidgetMenu : public UDebugScalabilityWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool NeedsClose;
    
    UDebugScalabilityWidgetMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void SyncFocus(bool isFocus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPosition(const FVector2D& position);
    
};

