#include "LGUIPrefabSequence.h"
#include "MovieScene.h"

ULGUIPrefabSequence::ULGUIPrefabSequence() {
    this->bParentContextsAreSignificant = true;
    this->MovieScene = CreateDefaultSubobject<UMovieScene>(TEXT("MovieScene"));
    this->DisplayNameString = TEXT("Default__LGUIPrefabSequence");
}


