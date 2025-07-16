#pragma once
#include "CoreMinimal.h"
#include "UIStaticMeshVertexColorType.generated.h"

UENUM()
enum class UIStaticMeshVertexColorType : uint8 {
    MultiplyWithUIColor,
    ReplaceByUIColor,
    NotAffectByUIColor,
};

