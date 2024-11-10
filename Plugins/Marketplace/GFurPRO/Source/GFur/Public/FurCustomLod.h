#pragma once
#include "CoreMinimal.h"
#include "FurCustomLod.generated.h"

USTRUCT(BlueprintType)
struct FFurCustomLod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsCustomLodEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxCustomLodScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinCustomLodScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LodDivNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LodPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsContinuous;
    
    GFUR_API FFurCustomLod();
};

