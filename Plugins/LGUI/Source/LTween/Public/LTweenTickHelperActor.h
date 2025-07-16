#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LTweenTickHelperActor.generated.h"

class ULTweenManager;

UCLASS(NotPlaceable, Transient)
class LTWEEN_API ALTweenTickHelperActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<ULTweenManager> Target;
    
    ALTweenTickHelperActor(const FObjectInitializer& ObjectInitializer);

};

