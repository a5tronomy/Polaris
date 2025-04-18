#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioEventTrack();


    // Fix for true pure virtual functions not being implemented
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
};

