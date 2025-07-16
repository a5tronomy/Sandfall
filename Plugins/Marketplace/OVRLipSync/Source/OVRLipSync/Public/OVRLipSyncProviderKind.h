#pragma once
#include "CoreMinimal.h"
#include "OVRLipSyncProviderKind.generated.h"

UENUM()
enum class OVRLipSyncProviderKind : uint8 {
    Original,
    Enhanced,
    EnhancedWithLaughter,
};

