#include "DragonIKPhysicsHolder.h"
#include "Components/SceneComponent.h"

ADragonIKPhysicsHolder::ADragonIKPhysicsHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootSceneComponent"));
    this->connected_actor = NULL;
}


