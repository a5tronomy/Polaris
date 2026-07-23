#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SESTBuildData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSESTBuildData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 sest_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector color_mod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool reverse_y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool reverse_x;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float transparency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 color_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 alpha_type;
    
    FSESTBuildData();
};

