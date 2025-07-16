#include "UIProceduralRectActor.h"
#include "UIProceduralRect.h"

AUIProceduralRectActor::AUIProceduralRectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIProceduralRect>(TEXT("UIProceduralRect"));
    this->UIProceduralRect = (UUIProceduralRect*)RootComponent;
}

UUIProceduralRect* AUIProceduralRectActor::GetUIProceduralRect() const {
    return NULL;
}


