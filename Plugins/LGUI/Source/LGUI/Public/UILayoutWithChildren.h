#pragma once
#include "CoreMinimal.h"
#include "UILayoutWithAnimation.h"
#include "UILayoutWithChildren.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUILayoutWithChildren : public UUILayoutWithAnimation {
    GENERATED_BODY()
public:
    UUILayoutWithChildren(const FObjectInitializer& ObjectInitializer);

};

