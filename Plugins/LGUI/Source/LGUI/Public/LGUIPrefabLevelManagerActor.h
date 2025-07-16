#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LGUIPrefabLevelManagerActor.generated.h"

UCLASS(NotPlaceable)
class LGUI_API ALGUIPrefabLevelManagerActor : public AActor {
    GENERATED_BODY()
public:
    ALGUIPrefabLevelManagerActor(const FObjectInitializer& ObjectInitializer);

};

