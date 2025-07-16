#include "ALT_NavLink.h"
#include "Components/SceneComponent.h"

AALT_NavLink::AALT_NavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PointLinks.AddDefaulted(1);
    this->step = 0;
    this->canGenerateCollider = true;
    this->radiusSphere = 200;
    this->capsuleHeightDelta = 15;
    this->capsuleRefreshRate = 0.05f;
    this->capsuleDistanceDelta = 2.40f;
    this->capsuleNormalDelta = 1.00f;
    this->canDebug = false;
}

void AALT_NavLink::CheckCollision() {
}

void AALT_NavLink::BuildNav() {
}


