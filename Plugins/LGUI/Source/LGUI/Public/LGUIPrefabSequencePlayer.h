#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequencePlayer.h"
#include "LGUIPrefabSequencePlayer.generated.h"

UCLASS()
class LGUI_API ULGUIPrefabSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    ULGUIPrefabSequencePlayer(const FObjectInitializer& ObjectInitializer);

};