#pragma once
#include "CoreMinimal.h"
#include "FloatCVarChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloatCVarChangedEvent, float, NewValue);

