#pragma once
#include "CoreMinimal.h"
#include "ESentryDatabaseLocation.generated.h"

UENUM()
enum class ESentryDatabaseLocation : uint8 {
    ProjectDirectory,
    ProjectUserDirectory,
};

