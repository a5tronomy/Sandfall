#pragma once
#include "CoreMinimal.h"
#include "ECustomNavModifierComponents.generated.h"

UENUM()
enum class ECustomNavModifierComponents {
    BoxComponent = 1,
    CapsuleComponent,
    StaticMeshComponent = 4,
    SkeletalMeshComponent = 8,
    DynamicMeshComponent = 16,
};

