#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGTextMenuSelectableDelegateDelegate.generated.h"

class UTextBlock;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPolarisUMGTextMenuSelectableDelegate, UTextBlock*, Text, bool, flag);

