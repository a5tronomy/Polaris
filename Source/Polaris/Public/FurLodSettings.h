#pragma once
#include "CoreMinimal.h"
#include "FurLodSettings.generated.h"

USTRUCT(BlueprintType)
struct FFurLodSettings {
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
    
    POLARIS_API FFurLodSettings();
};

