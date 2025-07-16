#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate_PointerEvent_DynamicDelegateDelegate.generated.h"

class ULGUIPointerEventData;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIEventDelegate_PointerEvent_DynamicDelegate, ULGUIPointerEventData*, Value);

