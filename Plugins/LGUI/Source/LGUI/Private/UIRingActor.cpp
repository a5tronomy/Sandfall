#include "UIRingActor.h"
#include "UIRing.h"

AUIRingActor::AUIRingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIRing>(TEXT("UIElement"));
    this->UIElement = (UUIRing*)RootComponent;
}

UUIRing* AUIRingActor::GetUIRing() const {
    return NULL;
}

UUIRing* AUIRingActor::Get2DLineRing() const {
    return NULL;
}


