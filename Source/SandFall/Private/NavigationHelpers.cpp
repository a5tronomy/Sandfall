#include "NavigationHelpers.h"

UNavigationHelpers::UNavigationHelpers() {
}

void UNavigationHelpers::SetFillCollisionUnderneathForNavmesh(UPrimitiveComponent* PrimitiveComponent, bool bFillCollisionUnderneathForNavmesh) {
}

void UNavigationHelpers::SetCanEverAffectNavigation(UActorComponent* ActorComponent, bool bRelevant) {
}

bool UNavigationHelpers::IsNavigationRelevant(UActorComponent* ActorComponent) {
    return false;
}

ANavigationData* UNavigationHelpers::GetNavDataForAgentName(UObject* WorldContextObject, FName AgentName) {
    return NULL;
}

bool UNavigationHelpers::CanEverAffectNavigation(UActorComponent* ActorComponent) {
    return false;
}


