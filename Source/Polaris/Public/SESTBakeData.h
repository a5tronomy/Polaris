#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SESTBakeData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSESTBakeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 sest_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 sest_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 bake_part_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 guide_part_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 color_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector projection_translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector projection_rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector uv_offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector uv_rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector uv_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector4 color_op_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Depth;
    
    FSESTBakeData();
};

