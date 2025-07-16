#pragma once
#include "CoreMinimal.h"
#include "EActivityStatus.generated.h"

UENUM()
enum class EActivityStatus : uint8 {
    Activity_Started,
    Activity_Ended,
};

