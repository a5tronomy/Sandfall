#include "LGUIEventSystemActor.h"
#include "LGUIEventSystem.h"

ALGUIEventSystemActor::ALGUIEventSystemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventSystem = CreateDefaultSubobject<ULGUIEventSystem>(TEXT("EventSystem"));
}


