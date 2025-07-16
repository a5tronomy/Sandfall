#pragma once
#include "CoreMinimal.h"
#include "BoolCVarChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FBoolCVarChangedSignature, bool, NewValue);

