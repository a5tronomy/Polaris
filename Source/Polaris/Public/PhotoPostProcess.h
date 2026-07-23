#pragma once
#include "CoreMinimal.h"
#include "PhotoPostProcess.generated.h"

class UActorComponent;
class UMaterialInstance;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FPhotoPostProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UActorComponent* ComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* mat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* DMI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float val1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float val2;
    
    POLARIS_API FPhotoPostProcess();
};

