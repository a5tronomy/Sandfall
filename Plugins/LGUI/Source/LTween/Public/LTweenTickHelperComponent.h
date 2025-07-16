#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LTweenTickHelperComponent.generated.h"

class ULTweenManager;

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LTWEEN_API ULTweenTickHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<ULTweenManager> Target;
    
    ULTweenTickHelperComponent(const FObjectInitializer& ObjectInitializer);

};

