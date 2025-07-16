#pragma once
#include "CoreMinimal.h"
#include "LGUITextInputCustomInputTypeDynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FLGUITextInputCustomInputTypeDynamicDelegate, const FString&, InString, int32, InStartIndex);

