#pragma once
#include "CoreMinimal.h"
#include "TargetingRequestHandle.h"
#include "TargetReadyDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetReadyDelegate, FTargetingRequestHandle, TargetingRequestHandle);

