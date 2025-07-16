#pragma once
#include "CoreMinimal.h"
#include "HandleAppHasLostFocusDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHandleAppHasLostFocus, bool, bLostFocus);

