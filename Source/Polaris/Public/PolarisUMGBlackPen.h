#pragma once
#include "CoreMinimal.h"
#include "BlackPen.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBlackPen.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBlackPen : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FBlackPen> IconDatas;
    
public:
    UPolarisUMGBlackPen();

};

