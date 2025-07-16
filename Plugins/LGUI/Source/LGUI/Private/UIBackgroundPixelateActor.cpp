#include "UIBackgroundPixelateActor.h"
#include "UIBackgroundPixelate.h"

AUIBackgroundPixelateActor::AUIBackgroundPixelateActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIBackgroundPixelate>(TEXT("UIBackgroundPixelateComponent"));
    this->UIBackgroundPixelate = (UUIBackgroundPixelate*)RootComponent;
}

UUIBackgroundPixelate* AUIBackgroundPixelateActor::GetUIBackgroundPixelate() const {
    return NULL;
}


