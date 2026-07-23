#pragma once
#include "CoreMinimal.h"
#include "Atom3dSourceBaseComponent.h"
#include "Atom3dTransceiverComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtom3dTransceiverComponent : public UAtom3dSourceBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* InputPoint;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> DefaultGlobalAisacs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsInputCrossfadeFieldDebugSpheresVisible: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultDirectAudioRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultCrossfadeDistance;
    
    UAtom3dTransceiverComponent(const FObjectInitializer& ObjectInitializer);

};

