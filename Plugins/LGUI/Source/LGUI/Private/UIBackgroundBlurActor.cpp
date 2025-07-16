#include "UIBackgroundBlurActor.h"
#include "UIBackgroundBlur.h"

AUIBackgroundBlurActor::AUIBackgroundBlurActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIBackgroundBlur>(TEXT("UIBackgroundBlurComponent"));
    this->UIBackgroundBlur = (UUIBackgroundBlur*)RootComponent;
}

UUIBackgroundBlur* AUIBackgroundBlurActor::GetUIBackgroundBlur() const {
    return NULL;
}


