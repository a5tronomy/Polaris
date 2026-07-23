#pragma once
#include "CoreMinimal.h"
#include "GFurCustomLod.generated.h"

USTRUCT(BlueprintType)
struct FGFurCustomLod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsCustomLodEnable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxCustomLodScreenSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinCustomLodScreenSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LodDivNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LodPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsContinuous;
    
    POLARIS_API FGFurCustomLod();
};

