#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DebugThumbnailAnimationReplace.h"
#include "EPolarisReflectionBrightness.h"
#include "DebugItem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UDebugItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CaptureBankID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableAccMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ItemPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQuat ItemRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableMannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDebugThumbnailAnimationReplace MainMeshAnimationReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FDebugThumbnailAnimationReplace> DependencyMeshAnimationReplaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisReflectionBrightness Brightness;
    
    UDebugItem();

};

