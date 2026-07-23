#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAtomSectionTemplate.generated.h"

class UMovieSceneAtomSection;

USTRUCT()
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMovieSceneAtomSection* AtomSection;
    
    CRIWAREMOVIESCENES_API FMovieSceneAtomSectionTemplate();
};

