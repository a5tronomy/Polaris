#pragma once
#include "CoreMinimal.h"
#include "FurLod.generated.h"

USTRUCT(BlueprintType)
struct FFurLod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Lod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PhysicsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableMorphTargets;
    
    GFUR_API FFurLod();
};

