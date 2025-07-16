#include "UIPolygonActor.h"
#include "UIPolygon.h"

AUIPolygonActor::AUIPolygonActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIPolygon>(TEXT("UIPolygonComponent"));
    this->UIPolygon = (UUIPolygon*)RootComponent;
}

UUIPolygon* AUIPolygonActor::GetUIPolygon() const {
    return NULL;
}


