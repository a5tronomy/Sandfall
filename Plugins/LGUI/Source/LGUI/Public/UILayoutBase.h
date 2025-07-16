#pragma once
#include "CoreMinimal.h"
#include "LGUILayoutInterface.h"
#include "LGUILifeCycleUIBehaviour.h"
#include "UILayoutBase.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUILayoutBase : public ULGUILifeCycleUIBehaviour, public ILGUILayoutInterface {
    GENERATED_BODY()
public:
    UUILayoutBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnRebuildLayout();
    
    UFUNCTION(BlueprintCallable)
    void MarkNeedRebuildLayout();
    

    // Fix for true pure virtual functions not being implemented
};

