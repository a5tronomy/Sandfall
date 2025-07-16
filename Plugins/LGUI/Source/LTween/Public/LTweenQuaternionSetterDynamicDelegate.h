#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LTweenQuaternionSetterDynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLTweenQuaternionSetterDynamic, const FQuat&, Value);

