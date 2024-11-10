#pragma once
#include "CoreMinimal.h"
#include "PhotoMouseInput.generated.h"

USTRUCT(BlueprintType)
struct FPhotoMouseInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MX_Prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MY_Prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float M_Move_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float M_Move_Y;
    
    POLARIS_API FPhotoMouseInput();
};

