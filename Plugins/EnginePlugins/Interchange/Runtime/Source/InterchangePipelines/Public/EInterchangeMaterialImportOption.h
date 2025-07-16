#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMaterialImportOption.generated.h"

UENUM()
enum class EInterchangeMaterialImportOption : uint8 {
    ImportAsMaterials,
    ImportAsMaterialInstances,
};

