#pragma once
#include "CoreMinimal.h"
#include "HandlePlatformPauseEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHandlePlatformPauseEvent, bool, bShouldPause);

