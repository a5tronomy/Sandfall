#include "UI2DLineChildrenAsPointsActor.h"
#include "UI2DLineChildrenAsPoints.h"

AUI2DLineChildrenAsPointsActor::AUI2DLineChildrenAsPointsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUI2DLineChildrenAsPoints>(TEXT("UIElement"));
    this->UIElement = (UUI2DLineChildrenAsPoints*)RootComponent;
}

UUI2DLineChildrenAsPoints* AUI2DLineChildrenAsPointsActor::Get2DLineChildrenAsPoints() const {
    return NULL;
}


