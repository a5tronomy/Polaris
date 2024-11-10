#pragma once
#include "CoreMinimal.h"
#include "GalleryListInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGalleryListInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Unlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NewIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LockHidden;
    
    POLARIS_API FGalleryListInfo();
};

