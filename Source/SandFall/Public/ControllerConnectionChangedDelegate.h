#pragma once
#include "CoreMinimal.h"
#include "ControllerConnectionChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerConnectionChanged, bool, bIsConnected);

