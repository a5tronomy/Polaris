#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ItemOffsetSlotDataStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FItemOffsetSlotDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString ItemOffsetSlotDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator CustomizeRotationOffset;
    
    FItemOffsetSlotDataStruct();
};

