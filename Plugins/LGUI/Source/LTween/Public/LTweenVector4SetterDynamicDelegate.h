#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LTweenVector4SetterDynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLTweenVector4SetterDynamic, const FVector4&, Value);

