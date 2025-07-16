#include "UI2DLineActor.h"
#include "UI2DLineRaw.h"

AUI2DLineActor::AUI2DLineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUI2DLineRaw>(TEXT("UIElement"));
    this->UIElement = (UUI2DLineRaw*)RootComponent;
}

UUI2DLineRaw* AUI2DLineActor::Get2DLineRaw() const {
    return NULL;
}


