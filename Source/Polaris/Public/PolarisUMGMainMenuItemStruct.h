#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGMainMenuItemStruct.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGMainMenuItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_selectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_favorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_new_icon;
    
    POLARIS_API FPolarisUMGMainMenuItemStruct();
};

