#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetThumbnailBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class POLARIS_API UAssetThumbnailBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAssetThumbnailBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetAssetThumbnail(UObject* Asset, const TArray<FColor>& colorDatas, int32 SizeX, int32 SizeY);
    
    UFUNCTION(BlueprintCallable)
    static void GetAssetThumbnail(UObject* Asset, TArray<uint8>& ImageDatas);
    
};

