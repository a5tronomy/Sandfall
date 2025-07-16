#pragma once
#include "CoreMinimal.h"
#include "LGUIPointerEventDynamicDelegateDelegate.generated.h"

class ULGUIPointerEventData;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIPointerEventDynamicDelegate, ULGUIPointerEventData*, pointerEventData);

