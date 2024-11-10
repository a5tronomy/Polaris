#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "Engine/TextureDefines.h"
#include "ManaTexture.generated.h"

class UManaComponent;
class UManaComponentTexture;
class UManaSource;
class UManaTexture;

UCLASS()
class CRIWARERUNTIME_API UManaTexture : public UTexture {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextureUpdated, UManaTexture*, ManaTexture);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UManaSource* MovieSource;
    
private:
    UPROPERTY()
    FString MovieFilePath;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRenderToTexture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetGamma;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    uint8 bHDR: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FLinearColor ClearColor;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideDimensions: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FIntPoint TargetDimensions;
    
    UPROPERTY()
    TEnumAsByte<EPixelFormat> OverrideFormat;
    
    UPROPERTY(BlueprintAssignable)
    FOnTextureUpdated OnTextureUpdated;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<UManaComponentTexture*> ComponentTextures;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<UManaComponentTexture*> AlphaComponentTextures;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UManaComponent> ManaPlayer;
    
public:
    UManaTexture();

    UFUNCTION(BlueprintCallable)
    void SetMovieSource(UManaSource* InSource);
    
};

