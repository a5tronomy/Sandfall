#pragma once
#include "CoreMinimal.h"
#include "OnReferenceFlagChangedMulticastDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReferenceFlagChangedMulticast, bool, _isActive);

