#include "UISpriteActor.h"
#include "UISprite.h"

AUISpriteActor::AUISpriteActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUISprite>(TEXT("UISpriteComponent"));
    this->UISprite = (UUISprite*)RootComponent;
}

UUISprite* AUISpriteActor::GetUISprite() const {
    return NULL;
}


