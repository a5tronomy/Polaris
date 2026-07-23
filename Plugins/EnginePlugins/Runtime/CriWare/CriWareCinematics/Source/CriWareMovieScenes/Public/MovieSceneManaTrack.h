#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneManaTrack.generated.h"

class UMovieSceneAtomTrack;
class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneManaTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> ManaSections;
    
    UPROPERTY(Export)
    TSoftObjectPtr<UMovieSceneAtomTrack> SyncedAtomTrack;
    
public:
    UMovieSceneManaTrack();


    // Fix for true pure virtual functions not being implemented
    FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override PURE_VIRTUAL(CreateTemplateForSection, return FMovieSceneEvalTemplatePtr(););
};

