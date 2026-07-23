#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NewsResourceData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FNewsResourceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ReleaseVersion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enable;
    
    FNewsResourceData();
};

