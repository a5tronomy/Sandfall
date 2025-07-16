#pragma once
#include "CoreMinimal.h"
#include "EHoudiniToolType.generated.h"

UENUM()
enum class EHoudiniToolType : uint8 {
    HTOOLTYPE_GENERATOR,
    HTOOLTYPE_OPERATOR_SINGLE,
    HTOOLTYPE_OPERATOR_MULTI,
    HTOOLTYPE_OPERATOR_BATCH,
};

