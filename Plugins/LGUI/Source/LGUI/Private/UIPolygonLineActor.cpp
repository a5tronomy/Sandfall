#include "UIPolygonLineActor.h"
#include "UIPolygonLine.h"

AUIPolygonLineActor::AUIPolygonLineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIPolygonLine>(TEXT("UIPolygonLineComponent"));
    this->UIPolygonLine = (UUIPolygonLine*)RootComponent;
}

UUIPolygonLine* AUIPolygonLineActor::GetUIPolygonLine() const {
    return NULL;
}


