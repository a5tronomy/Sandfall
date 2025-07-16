#pragma once
#include "CoreMinimal.h"
#include "UIPanelLayoutBase.h"
#include "UIPanelLayoutWithOverrideOrder.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIPanelLayoutWithOverrideOrder : public UUIPanelLayoutBase {
    GENERATED_BODY()
public:
    UUIPanelLayoutWithOverrideOrder(const FObjectInitializer& ObjectInitializer);

};

