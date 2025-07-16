#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UIBasePostProcessActor.generated.h"

class UUIPostProcessRenderable;

UCLASS(Abstract)
class LGUI_API AUIBasePostProcessActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
    AUIBasePostProcessActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    UUIPostProcessRenderable* GetUIPostProcessRenderable_Impl() const;
    
    UFUNCTION(BlueprintPure)
    UUIPostProcessRenderable* GetUIPostProcessRenderable_BP() const;
    
    UFUNCTION(BlueprintPure)
    UUIPostProcessRenderable* GetUIPostProcessRenderable() const;
    
};

