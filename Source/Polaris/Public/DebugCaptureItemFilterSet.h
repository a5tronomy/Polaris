#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDebugCaptureCategory.h"
#include "FDebugCaptureFilterList.h"
#include "DebugCaptureItemFilterSet.generated.h"

UCLASS()
class POLARIS_API UDebugCaptureItemFilterSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EDebugCaptureCategory, FFDebugCaptureFilterList> FilterSet;
    
    UDebugCaptureItemFilterSet();

};

