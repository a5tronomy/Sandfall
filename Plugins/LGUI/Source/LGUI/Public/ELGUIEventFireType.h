#pragma once
#include "CoreMinimal.h"
#include "ELGUIEventFireType.generated.h"

UENUM()
enum class ELGUIEventFireType : uint8 {
    TargetActorAndAllItsComponents,
    OnlyTargetComponent,
    OnlyTargetActor,
};

