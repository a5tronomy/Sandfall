#pragma once
#include "CoreMinimal.h"
#include "EHoudiniEngineActorBakeOption.generated.h"

UENUM()
enum class EHoudiniEngineActorBakeOption {
    OneActorPerComponent,
    OneActorPerHDA,
};

