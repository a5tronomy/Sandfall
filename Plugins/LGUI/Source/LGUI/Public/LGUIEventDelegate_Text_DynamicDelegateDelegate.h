#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate_Text_DynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIEventDelegate_Text_DynamicDelegate, FText, Value);

