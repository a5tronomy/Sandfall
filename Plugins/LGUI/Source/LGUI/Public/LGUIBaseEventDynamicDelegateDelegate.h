#pragma once
#include "CoreMinimal.h"
#include "LGUIBaseEventDynamicDelegateDelegate.generated.h"

class ULGUIBaseEventData;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIBaseEventDynamicDelegate, ULGUIBaseEventData*, EventData);

