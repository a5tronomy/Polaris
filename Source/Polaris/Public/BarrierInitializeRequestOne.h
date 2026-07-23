#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BarrierInitializeRequestOne.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FBarrierInitializeRequestOne {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator ActorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlphaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FacadeVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LocalFacade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlphaOffset1;
    
    POLARIS_API FBarrierInitializeRequestOne();
};

