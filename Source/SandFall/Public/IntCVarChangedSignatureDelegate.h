#pragma once
#include "CoreMinimal.h"
#include "IntCVarChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FIntCVarChangedSignature, int32, NewValue);

