#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/MovieSceneEntitySystem.h"
#include "EntitySystem/MovieScenePreAnimatedStateSystem.h"
#include "MovieSceneLGUIMaterialSystem.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneLGUIMaterialSystem : public UMovieSceneEntitySystem, public IMovieScenePreAnimatedStateSystemInterface {
    GENERATED_BODY()
public:
    UMovieSceneLGUIMaterialSystem();


    // Fix for true pure virtual functions not being implemented
};

