#pragma once
#include "CoreMinimal.h"
#include "TargetingRequestHandle.h"
#include "PerformTargetingReadyDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPerformTargetingReady, FTargetingRequestHandle, TargetingHandle);

