#pragma once
#include "CoreMinimal.h"
#include "EALSStance.h"
#include "ALSBaseCharacterStanceChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FALSBaseCharacterStanceChangedSignature, EALSStance, previousStance, EALSStance, nextStance);

