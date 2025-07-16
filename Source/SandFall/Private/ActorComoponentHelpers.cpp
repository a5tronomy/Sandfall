#include "ActorComoponentHelpers.h"

UActorComoponentHelpers::UActorComoponentHelpers() {
}

bool UActorComoponentHelpers::HasComponentBegunPlay(UActorComponent* Component) {
    return false;
}

void UActorComoponentHelpers::DestroyComponentExternally(UActorComponent* ComponentToDestroy) {
}

bool UActorComoponentHelpers::ChangeOwner(UActorComponent* Component, AActor* NewOwner) {
    return false;
}


