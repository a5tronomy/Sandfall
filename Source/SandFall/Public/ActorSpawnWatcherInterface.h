#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActorSpawnWatcherInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UActorSpawnWatcherInterface : public UInterface {
    GENERATED_BODY()
};

class IActorSpawnWatcherInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnInstigatedActorSpawned(AActor* SpawnedActor);
    
};

