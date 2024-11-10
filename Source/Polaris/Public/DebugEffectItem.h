#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DebugEffectItem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UDebugEffectItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CaptureFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FieldOfView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector EffectPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQuat EffectRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector CameraPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQuat CameraRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector EffectMove;
    
    UDebugEffectItem();

};

