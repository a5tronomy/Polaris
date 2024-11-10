#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtomSelectorParam.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "Sections/MovieSceneParameterSection.h"
#include "MovieSceneAtomSection.generated.h"

class USoundAtomCue;
class USoundAttenuation;

UCLASS()
class CRIWAREMOVIESCENES_API UMovieSceneAtomSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USoundAtomCue* Sound;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY()
    FMovieSceneFloatChannel SoundVolume;
    
    UPROPERTY()
    FMovieSceneFloatChannel PitchMultiplier;
    
    UPROPERTY()
    FMovieSceneActorReferenceData AttachActorData;
    
    UPROPERTY()
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressSubtitles;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAttenuation;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(EditAnywhere)
    bool bContinueSoundWhenSequenceIsEnd;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> AsrRackIDs;
    
    UPROPERTY(EditAnywhere)
    TArray<FAtomSelectorParam> SelectorLabels;
    
    UPROPERTY(EditAnywhere)
    bool bLooping;
    
public:
    UMovieSceneAtomSection();

    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FFrameNumber InStartOffset);
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintPure)
    FFrameNumber GetStartOffset() const;
    
};

