#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DebugCaptureData.generated.h"

USTRUCT(BlueprintType)
struct FDebugCaptureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector position;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector CharacterPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString BodyMotionFilename;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BodyFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString FaceMotionFilename;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FaceFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString HandLeftMotionFilename;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HandLeftFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString HandRightMotionFilename;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HandRightFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Light;
    
    POLARIS_API FDebugCaptureData();
};

