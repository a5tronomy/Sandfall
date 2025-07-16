#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LTweenRotatorSetterDynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLTweenRotatorSetterDynamic, const FRotator&, Value);

