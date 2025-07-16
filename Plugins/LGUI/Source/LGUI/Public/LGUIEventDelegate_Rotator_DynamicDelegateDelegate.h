#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIEventDelegate_Rotator_DynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIEventDelegate_Rotator_DynamicDelegate, FRotator, Value);

