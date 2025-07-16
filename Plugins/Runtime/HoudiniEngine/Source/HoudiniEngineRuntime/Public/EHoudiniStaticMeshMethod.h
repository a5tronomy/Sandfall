#pragma once
#include "CoreMinimal.h"
#include "EHoudiniStaticMeshMethod.generated.h"

UENUM()
enum class EHoudiniStaticMeshMethod {
    RawMesh_DEPRECATED,
    FMeshDescription,
    UHoudiniStaticMesh,
};

