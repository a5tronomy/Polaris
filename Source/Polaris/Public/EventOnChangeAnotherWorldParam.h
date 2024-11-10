#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EStageAnotherWorldProcType.h"
#include "EStageAnotherWorldType.h"
#include "EventOnChangeAnotherWorldParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeAnotherWorldParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageAnotherWorldType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageAnotherWorldProcType proc_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator rot;
    
    POLARIS_API FEventOnChangeAnotherWorldParam();
};

