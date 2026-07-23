#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AtomCueInfoDataTable.h"
#include "AtomCueSheetDataTable.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomCueSheetDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString BuildDate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString WorkUnit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Volume;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool EnableCueLimit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumCueLimits;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString PriorityType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 PriorityTypeIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomCueInfoDataTable> Cue;
    
    FAtomCueSheetDataTable();
};

