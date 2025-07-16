#include "UIContainerActor.h"
#include "UIItem.h"

AUIContainerActor::AUIContainerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIItem>(TEXT("UIItemComponent"));
    this->UIItem = (UUIItem*)RootComponent;
}


