#pragma once
#include "CoreMinimal.h"
#include "EALSGait.h"
#include "ALSBaseCharacterGaitChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FALSBaseCharacterGaitChangedSignature, EALSGait, previousGait, EALSGait, nextGait);

