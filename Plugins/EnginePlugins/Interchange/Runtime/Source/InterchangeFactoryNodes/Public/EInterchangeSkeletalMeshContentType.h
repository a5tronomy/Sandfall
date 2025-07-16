#pragma once
#include "CoreMinimal.h"
#include "EInterchangeSkeletalMeshContentType.generated.h"

UENUM()
enum class EInterchangeSkeletalMeshContentType : uint8 {
    All,
    Geometry,
    SkinningWeights,
    MAX,
};

