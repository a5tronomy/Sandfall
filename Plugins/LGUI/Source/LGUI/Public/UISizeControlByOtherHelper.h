#pragma once
#include "CoreMinimal.h"
#include "LGUILifeCycleUIBehaviour.h"
#include "UISizeControlByOtherHelper.generated.h"

class UUISizeControlByOther;

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISizeControlByOtherHelper : public ULGUILifeCycleUIBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUISizeControlByOther> TargetComp;
    
public:
    UUISizeControlByOtherHelper(const FObjectInitializer& ObjectInitializer);

};

