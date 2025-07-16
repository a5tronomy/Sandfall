#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LTweenVector2SetterDynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLTweenVector2SetterDynamic, const FVector2D&, Value);

