#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate_Object_DynamicDelegateDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIEventDelegate_Object_DynamicDelegate, UObject*, Value);

