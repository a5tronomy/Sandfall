#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/IMovieSceneEntityProvider.h"
#include "Tracks/MovieSceneMaterialTrack.h"
#include "Sections/MovieSceneParameterSection.h"
#include "MovieSceneLGUIMaterialTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneLGUIMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneEntityProvider, public IMovieSceneParameterSectionExtender {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    FName TrackName;
    
public:
    UMovieSceneLGUIMaterialTrack();


    // Fix for true pure virtual functions not being implemented
};

