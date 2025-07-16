#include "UITextActor.h"
#include "UIText.h"

AUITextActor::AUITextActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIText>(TEXT("UITextComponent"));
    this->UIText = (UUIText*)RootComponent;
}

UUIText* AUITextActor::GetUIText() const {
    return NULL;
}


