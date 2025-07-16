#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReloadConfigActor.generated.h"

UCLASS()
class SANDFALL_API AReloadConfigActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool ReloadConfig;
    
    AReloadConfigActor(const FObjectInitializer& ObjectInitializer);

};

