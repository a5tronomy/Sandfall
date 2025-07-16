#pragma once
#include "CoreMinimal.h"
#include "OnReferenceFlagChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnReferenceFlagChanged, bool, _isActive);

