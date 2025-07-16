#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequence.h"
#include "LGUIPrefabSequenceObjectReferenceMap.h"
#include "LGUIPrefabSequence.generated.h"

class UMovieScene;

UCLASS(DefaultToInstanced)
class LGUI_API ULGUIPrefabSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UMovieScene* MovieScene;
    
    UPROPERTY()
    FLGUIPrefabSequenceObjectReferenceMap ObjectReferences;
    
    UPROPERTY()
    FString DisplayNameString;
    
public:
    ULGUIPrefabSequence(const FObjectInitializer& ObjectInitializer);

};