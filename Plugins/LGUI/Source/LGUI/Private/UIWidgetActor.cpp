#include "UIWidgetActor.h"
#include "UIWidget.h"

AUIWidgetActor::AUIWidgetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIWidget>(TEXT("UIWidget"));
    this->UIWidget = (UUIWidget*)RootComponent;
}

UUIWidget* AUIWidgetActor::GetUIWidget() const {
    return NULL;
}


