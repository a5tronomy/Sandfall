#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LTweenVector3SetterDynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLTweenVector3SetterDynamic, const FVector&, Value);

