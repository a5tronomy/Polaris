#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnItemDragDetectedDelegate.h"
#include "OnItemSelectionChangedDelegate.h"
#include "AkWwiseTreeSelector.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkWwiseTreeSelector : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnItemSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemDragDetected OnItemDragged;
    
    UAkWwiseTreeSelector();

};

