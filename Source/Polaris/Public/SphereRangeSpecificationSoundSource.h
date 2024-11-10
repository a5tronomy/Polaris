#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SphereRangeSpecificationSoundSource.generated.h"

class APolarisSoundPositionActor;
class UAkAudioEvent;

USTRUCT(BlueprintType)
struct POLARIS_API FSphereRangeSpecificationSoundSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 KeyOnCountBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 KeyOnCountRandomAppend;
    
    UPROPERTY(BlueprintReadWrite)
    int32 KeyOnCountRandomAppendValue;
    
    UPROPERTY(BlueprintReadWrite)
    int32 KeyOnCountFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* KeyOnSound;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<APolarisSoundPositionActor*> SoundPositionActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlphaDegree1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlphaDegree2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BetaDegree1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BetaDegree2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OffsetParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnable;
    
    FSphereRangeSpecificationSoundSource();
};

