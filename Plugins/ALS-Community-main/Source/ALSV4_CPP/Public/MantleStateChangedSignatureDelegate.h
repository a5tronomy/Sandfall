#pragma once
#include "CoreMinimal.h"
#include "MantleStateChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMantleStateChangedSignature, bool, State);

