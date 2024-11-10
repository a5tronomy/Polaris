#pragma once
#include "CoreMinimal.h"
#include "PolarisDialogButtonDelegateDelegate.h"
#include "PolarisDialogButtonParam.generated.h"

USTRUCT(BlueprintType)
struct FPolarisDialogButtonParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisDialogButtonDelegate OnDecide;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool IsTextId;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool IsGhost;
    
    POLARIS_API FPolarisDialogButtonParam();
};

