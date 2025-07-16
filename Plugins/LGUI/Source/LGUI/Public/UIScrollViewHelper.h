#pragma once
#include "CoreMinimal.h"
#include "LGUILifeCycleUIBehaviour.h"
#include "UIScrollViewHelper.generated.h"

class UUIScrollViewComponent;

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIScrollViewHelper : public ULGUILifeCycleUIBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIScrollViewComponent> TargetComp;
    
public:
    UUIScrollViewHelper(const FObjectInitializer& ObjectInitializer);

};

