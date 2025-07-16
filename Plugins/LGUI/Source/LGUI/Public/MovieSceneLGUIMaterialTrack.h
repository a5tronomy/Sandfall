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
    UMovieSceneLGUIMaterialTrack(const FObjectInitializer& ObjectInitializer);

private:

    virtual void ImportEntityImpl(UMovieSceneEntitySystemLinker* EntityLinker, const FEntityImportParams& Params, FImportedEntity* OutImportedEntity) override;
    
    virtual void ExtendEntityImpl(UMovieSceneParameterSection* Section, UMovieSceneEntitySystemLinker* EntityLinker, const UE::MovieScene::FEntityImportParams& Params, UE::MovieScene::FImportedEntity* OutImportedEntity) override;
};