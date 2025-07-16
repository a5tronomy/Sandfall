#include "LGUIPrefabSequence.h"
#include "MovieScene.h"

ULGUIPrefabSequence::ULGUIPrefabSequence(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    this->bParentContextsAreSignificant = true;
    this->MovieScene = CreateDefaultSubobject<UMovieScene>(TEXT("MovieScene"));
    this->DisplayNameString = TEXT("Default__LGUIPrefabSequence");
}